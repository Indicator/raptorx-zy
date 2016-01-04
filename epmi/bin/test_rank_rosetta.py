import glob
import scipy.stats
import numpy as np
import itertools
import zydb as db
import SimpleParallel as sp
from ProteinUtil import *


__author__ = 'zywang@ttic.edu'

class RankRosetta(RankTask):
    def __init__(self,*args, **kwargs):
        super(RankRosetta, self).__init__(*args, **kwargs)

    def run(self,dryrun=False,**kwargs):
        __doc__ = "Run the function defined by get_run_string."
        # create dirs
        for i in self.progdir :
            dir=self.workdir+"/"+self.exprdir+"/"+i
            if not os.path.isdir(dir) :
                os.makedirs(dir)
        cmd_list=[]
        # Change to calling get_energy
        flag_use_get_energy = True
        for sample in self.sample_list :
            output_dir=self.workdir+"/"+self.exprdir+"/"+self.progdir[0]
            output_file=output_dir+"/"+sample.sample_id+".res"
            if not flag_use_get_energy:
                cmd=self.runnable.get_run_string(sample,output_dir,**kwargs)
                cmd_list.append(cmd)
                # Deprecate runbatch_and_wait.
                self.computer.runbatch_and_wait(cmd_list,dryrun=dryrun)
            else:
                res = self.runnable.evaluate_energy_for_all_decoys(sample, db=db)
                sp.write_result_file(output_file, res.items())
                sp.write_result_file(output_file+".bak", res.items())
        for sample in self.sample_list :
            output_dir=self.workdir+"/"+self.exprdir+"/"+self.progdir[0]
            output_file=output_dir+"/"+sample.sample_id+".res"
            RunARank().modify_result_file(sample, output_file,self.pairwise_energy_mix_rate,self.pairwise_energy_method)
                

        # TO run the rank task, we need to define sample, runnable, computer, and run()
    def analysis(self,top_number=5):
        __doc__ = "This function compares two results head to head. Results are stored in progdir[].\n"
        "Input: top_number: number of model to be selected."
        "self.progdir: folders of input energy evaluation results. This is to be replaced by a NONIO of the evaluation results."
        "self.sample_list: a list of sample, which sample_id is used to locate evaluation results. This is to be replaced by a nonio design."
        "self.workdir, self.exprdir: environment of the intermediate results."
        
        def mean_list(input_list):
            return [np.mean(x) for x in input_list]
        
        sample_list=self.sample_list
        number_native_identified=[0,0]
        average_rank=[0,0]
        native_rank=[[],[]]
        corr_pair=[[],[]]
        corr_pair_tmscore=[[],[]]

        best_gdt_pair=[[],[]] # the top ranked gdt score
        def apply_analysis_filter(progdir, sample_list, with_native, func):
            res = np.zeros([len(sample_list),len(progdir)])
            for i in range(len(sample_list)):
                sample=sample_list[i]
                for j in range(len(self.progdir)):
                    result_file=self.workdir+"/"+self.exprdir+"/"+self.progdir[j]+"/"+sample.sample_id+".res"
                    res[i,j] = func(result_file,sample, with_native=with_native)
            return res
        db.logger.info("compute best gdt without native.")
        best_gdt_pair_native_free = apply_analysis_filter(progdir=self.progdir, sample_list=self.sample_list, with_native=False,func=self.compute_best_gdt)
        db.logger.info("compute best TMscore without native.")
        best_tmscore_pair_native_free = apply_analysis_filter(progdir=self.progdir, sample_list=self.sample_list, with_native=False,func=self.compute_best_gdt)
       
        best_tmscore_pair=[[],[]] # the top ranked tmscore score
        zscore_pair=[[],[]]
        rank_lowest_energy_pair_in_gdt=[[],[]]
        rank_lowest_energy_pair_in_gdt_without_native=[[],[]]
        num_highest_tmscore_identified_without_native=[[],[]]
        num_highest_tmscore_identified_with_native=[[],[]]
        loglikelihood=[[],[]]
        decoy_average_quality=[]
        num_sample = len(sample_list)
        for isample in range(len(sample_list)):
            sample=sample_list[isample]
            for i in range(len(self.progdir)) :  # boiler plate TODO merge it with previous Task
                res=self.compute_rank(self.workdir+"/"+self.exprdir+"/"+self.progdir[i]+"/"+sample.sample_id+".res",sample.sample_id,sample)
                if res < top_number :
                    #print sample.sample_id,self.progdir[i]," ",res
                    number_native_identified[i]=number_native_identified[i]+1
                native_rank[i].append(res)
            for i in range(len(self.progdir)) :
                result_file=self.workdir+"/"+self.exprdir+"/"+self.progdir[i]+"/"+sample.sample_id+".res"
                corr_pair[i].append(self.compute_corr(result_file,sample, with_native=False))
                corr_pair_tmscore[i].append(self.compute_corr(result_file,sample,method="TMscore",with_native=False))
                best_gdt_pair[i].append(self.compute_best_gdt(result_file,sample))
                best_tmscore_pair[i].append(self.compute_best_gdt(result_file,sample,method="TMscore"))
                zscore_pair[i].append(self.compute_native_zscore(result_file,sample))
                rank_lowest_energy_pair_in_gdt[i].append(self.compute_rank_lowest_energy(result_file,sample,sample,method="GDT"))
                rank_lowest_energy_pair_in_gdt_without_native[i].append(
                    self.compute_rank_lowest_energy(result_file,sample,sample,method="GDT",with_native=False)
                )
                num_highest_tmscore_identified_with_native[i].append(
                    self.lowest_tmscore_decoy_identified(result_file,sample.sample_id,sample,topnumber=1,with_native=True))
                num_highest_tmscore_identified_without_native[i].append(
                    self.lowest_tmscore_decoy_identified(result_file,sample.sample_id,sample,topnumber=1,with_native=False))
                loglikelihood[i].append(
                    self.calc_loglikelihood(result_file,sample))
            decoy_average_quality.append(self.calc_decoy_quality(sample))
                # add more per sample analysis here

        #print self.progdir
        #print [np.mean(x) for x in average_rank]
        #print corr_pair
        #print np.mean(corr_pair[0]),np.mean(corr_pair[1])
        #print np.mean(best_gdt_pair[0]),np.mean(best_gdt_pair[1])
        #print [np.mean(x) for x in rank_lowest_energy_pair_in_gdt ]
        print "progdir\n",self.progdir
        """self.show_mean(number_native_identified=number_native_identified,
                       native_rank=native_rank,
                       corr_pair_gdt=corr_pair,
                       corr_pair_tmscore=corr_pair_tmscore,
                       best_gdt_pair=best_gdt_pair,
                       best_tmscore_pair=best_tmscore_pair,
                       rank_lowest_energy_pair_in_gdt=rank_lowest_energy_pair_in_gdt,
                       rank_lowest_energy_pair_in_gdt_without_native=rank_lowest_energy_pair_in_gdt_without_native,
                       num_highest_tmscore_identified_with_native=num_highest_tmscore_identified_with_native,
                       num_highest_tmscore_identified_without_native=num_highest_tmscore_identified_without_native,
                       zscore_pair=zscore_pair,
                       loglikelihood_native=loglikelihood,
                       )"""
        print "decoy_average_quality", np.mean(decoy_average_quality,0)
        # Figure the neff and length
        average_rank=mean_list(native_rank) #(np.mean(native_rank[0]),np.mean(native_rank[1]))
        res_doc={"progdir":self.progdir,
                "native_rank":native_rank,
                 "average_native_rank":average_rank,
                 "native_identified":number_native_identified,
                 "correlation":corr_pair,
                 "mean of correlation":(np.mean(corr_pair[0]),np.mean(corr_pair[1])),
                 "gdt":best_gdt_pair,
                 "mean of best gdt":(np.mean(best_gdt_pair[0]),np.mean(best_gdt_pair[1])),
                 "zscore of native":(np.mean(zscore_pair[0]),np.mean(zscore_pair[1])),
                 "number_native_identified":number_native_identified,
                "native_rank":native_rank,
                "corr_pair_gdt":corr_pair,
                "corr_pair_tmscore":corr_pair_tmscore,
                "best_gdt_pair":best_gdt_pair,
                "best_tmscore_pair":best_tmscore_pair,
                "rank_lowest_energy_pair_in_gdt":rank_lowest_energy_pair_in_gdt,
                "rank_lowest_energy_pair_in_gdt_without_native":rank_lowest_energy_pair_in_gdt_without_native,
                "num_highest_tmscore_identified_with_native":num_highest_tmscore_identified_with_native,
                "num_highest_tmscore_identified_without_native":num_highest_tmscore_identified_without_native,
                "zscore_pair":zscore_pair,
                "loglikelihood_native":loglikelihood,
                "decoy_average_quality":decoy_average_quality
        }
        # Merge the following code into codebase later.
        res_doc_1={"progdir":self.progdir,
#                "native_rank":native_rank,
                   "8, native-included, rank of the native structure":average_rank,
#                 "native_identified":number_native_identified,
#                 "correlation":corr_pair,
#                 "mean of correlation":(np.mean(corr_pair[0]),np.mean(corr_pair[1])),
#                 "gdt":best_gdt_pair,
#                 "mean of best gdt":(np.mean(best_gdt_pair[0]),np.mean(best_gdt_pair[1])),
                   "10, native-included, Z-score of the native structure energy value": mean_list(zscore_pair),
                   #(np.mean(zscore_pair[0]),np.mean(zscore_pair[1])),
                   "4, native-included, number of native structure identified in the top 5 models":number_native_identified,
                   "0, native-free, correlation between GDT and energy value": mean_list(corr_pair),
                   "1, native-free, correlation between TMscore and energy value": mean_list(corr_pair_tmscore),
                   "2, native-included, GDT score of the top ranked decoy": mean_list(best_gdt_pair),
                   "2.1, native-free, GDT score of the top ranked decoy": list(np.mean(best_gdt_pair_native_free,axis=0)),
                   "9, native-included, TMscore of the top ranked decoy": mean_list(best_tmscore_pair),
                   "9.1, native-free, TMscore of the top ranked decoy": list(np.mean(best_tmscore_pair_native_free,axis=0)),
                   "6, native-included, place(rank) of the lowest energy decoy in the order of GDT": mean_list(rank_lowest_energy_pair_in_gdt),
                   "7, native-free, place(rank) of the lowest energy decoy in the order of GDT": mean_list(rank_lowest_energy_pair_in_gdt_without_native),
#                "num_highest_tmscore_identified_with_native":num_highest_tmscore_identified_with_native,
                   "5, native-free, percentage of the decoy closest to the native identified in the top ranked model": [sum(x)/num_sample for x in num_highest_tmscore_identified_without_native] ,
                   
                   #                "zscore_pair":zscore_pair,
#                "loglikelihood_native":loglikelihood,
#                "decoy_average_quality":decoy_average_quality
        }
        import pprint
        pprint.pprint(res_doc_1)
        return res_doc
    def show_mean(self,**kwargs):
        for x in kwargs:
            print x,",",[np.mean(y) for y in kwargs[x]]

    def calc_loglikelihood(self,result_file, sample):
        all_lines=readlist(result_file)
        for i in range(len(all_lines)) :
            decoyfile=re.split("\s+",all_lines[i])[0]
            decoyfile=self.recover_fullpath(decoyfile,sample)
            if decoyfile == sample.native_pdb_file :
                return float(re.split("\s+",all_lines[i].rstrip())[-1])
    def calc_decoy_quality(self,sample):
        # return average of
        tms_alldecoy=[]
        for decoy_x in sample.decoy_list:
            tms=TMscore().get_tmscore(sample.native_pdb_file,decoy_x)
            tms_alldecoy.append(tms)
        return (np.average(tms_alldecoy),np.std(tms_alldecoy))
    def compute_rank(self,result_file,pdbid,sample):
        all_lines=readlist(result_file)
        max_tms=0
        rank_of_best_decoy=0
        for i in range(len(all_lines)) :
            # if native appear
            if re.search("%s.pdb" % pdbid, all_lines[i])!=None :
                return i
            # if native not appear, find the best tmscore one
            decoyfile=re.split("\s+",all_lines[i])[0]
            decoyfile=self.recover_fullpath(decoyfile,sample)
            tms=TMscore().get_tmscore(sample.native_pdb_file,decoyfile)
            if tms > max_tms:
                best_decoy=decoyfile
                rank_of_best_decoy=i
        return rank_of_best_decoy

    def compute_rank_lowest_energy(self,result_file,pdbid,sample,method="GDT",with_native=True):
        import operator
        all_lines=readlist(result_file)
        min_energy=None
        # sort all lines by gdt
        all_gdtscore=[]
        for i in range(len(all_lines)) :
            decoyfile=re.split("\s+",all_lines[i])[0]
            decoyfile=self.recover_fullpath(decoyfile,sample)
            gdtscore=TMscore().get_tmscore(sample.native_pdb_file, decoyfile, method=method)
            all_gdtscore.append((all_lines[i],gdtscore))
        all_gdtscore.sort(key=operator.itemgetter(1),reverse=True)
        all_lines_sorted_by_gdt=[x[0] for x in all_gdtscore ]
        rank_of_lowest_energy_decoy=0
        for i in range(len(all_lines_sorted_by_gdt)) :
            decoyfile=re.split("\s+",all_lines_sorted_by_gdt[i])[0]
            decoyfile=self.recover_fullpath(decoyfile,sample)
            if with_native==False :
                if decoyfile == sample.native_pdb_file :
                    continue
            eng=float(re.split("\s+",all_lines_sorted_by_gdt[i])[-1])
            if min_energy==None or eng < min_energy:
                min_energy=eng
                best_decoy=decoyfile
                rank_of_lowest_energy_decoy=i
        return rank_of_lowest_energy_decoy

    def lowest_tmscore_decoy_identified(self,result_file,pdbid,sample,topnumber=5,with_native=True):
        # read again,.
        all_lines=readlist(result_file)
        max_tms=0
        best_decoy="none"
        for i in range(len(all_lines)) :
            # if native not appear, find the best tmscore one
            decoyfile=re.split("\s+",all_lines[i])[0]
            decoyfile=self.recover_fullpath(decoyfile,sample)
            if with_native==False:
                if decoyfile == sample.native_pdb_file:
                    continue
            tms=TMscore(computer=self.computer).get_tmscore(sample.native_pdb_file,decoyfile)
            if tms > max_tms:
                best_decoy=decoyfile
                max_tms=tms
        for i in range(topnumber) :
            if re.search(best_decoy, all_lines[i])!=None or re.search(os.path.basename(best_decoy), all_lines[i])!=None  :
                return 1
        return 0

    def recover_fullpath(self,decoy_file,sample):
        if not os.path.isfile(decoy_file):
            decoy_file_withpdbid=os.path.dirname(decoy_file)+"/"+sample.sample_id+"-"+os.path.basename(decoy_file)
            if os.path.isfile(decoy_file_withpdbid):
                decoy_file=decoy_file_withpdbid

        if decoy_file==os.path.basename(decoy_file):
            if decoy_file == os.path.basename(sample.native_pdb_file):
                return sample.native_pdb_file
            for decoy_x in sample.decoy_list:
                if decoy_file==os.path.basename(decoy_x):
                    decoy_file=decoy_x
                    break
        return decoy_file
    def compute_corr(self,result_file,sample,method="GDT",with_native=True):
        all_lines=readlist(result_file)
        all_gdt=[]
        all_energy=[]
        for i in range(len(all_lines)) :
            energy=float(re.split("\s+",all_lines[i].rstrip())[-1])
            decoy_file=re.split("\s+",all_lines[i].rstrip())[0]
            decoy_file=self.recover_fullpath(decoy_file,sample)
            if (not with_native) and decoy_file== sample.native_pdb_file:
                continue
            gdt=TMscore(computer=self.computer).get_tmscore(sample.native_pdb_file,decoy_file,method=method)
            all_energy.append(energy)
            all_gdt.append(gdt)
        return scipy.stats.pearsonr(all_gdt,all_energy)[0]

    def compute_best_gdt(self,result_file,sample,method="GDT",with_native=True):
        # This is the top ranked decoy's gdt score
        all_lines=readlist(result_file)
        if len(all_lines)==0 :
            print "Result_file "+result_file+" empty!\n"

        decoy_file=re.split("\s+",all_lines[0].rstrip())[0]
        decoy_file=self.recover_fullpath(decoy_file,sample)
        if (not with_native ) and decoy_file == sample.native_pdb_file:
            # get the next one if the first one is the native pdb file.
            decoy_file=re.split("\s+",all_lines[1].rstrip())[0]
        decoy_file=self.recover_fullpath(decoy_file,sample)
        min_gdt=TMscore(computer=self.computer).get_tmscore(sample.native_pdb_file,decoy_file,method=method)
        return min_gdt

    def compute_native_zscore(self,result_file,sample):
        all_lines=readlist(result_file)
        all_energy=[]
        for i in range(len(all_lines)) :
            if re.search("%s.pdb" % sample.sample_id, all_lines[i])!=None :
                break
        native_index=i
        for i in range(len(all_lines)) :
            energy=float(re.split("\s+",all_lines[i].rstrip())[-1])
            all_energy.append(energy)
        zscore=scipy.stats.mstats.zscore(all_energy)
        return zscore[native_index]

    # require self.sample_list
    def run_epad(self):
        for s in self.sample_list:
            s.prob_file="%s/rank.epad/%s.epad.prob" % (self.exprdir_full, s.sample_id)
            if not os.path.isfile(s.prob_file) :
                print s.prob_file," not exist"
                exit(-1)
        self.progdir=["rank.epad"]
        #test_epmi.run(dryrun=True)
        self.run(bincut="0,4,5,6,7,8,9,10,11,12,13,14")

    def split_sample_list(self,sample_list,protein_prof,**kwargs): # Change kwargs to sth more specific
        sub_sample_list=list()
        for s in sample_list:
            bb=True;
            for cc in kwargs: # kwargs store a set of ranges , like neff=[0,8],
                if len(kwargs[cc])==2:
                    bb = bb and ( protein_prof[s.sample_id][cc]>=kwargs[cc][0] and protein_prof[s.sample_id][cc]<kwargs[cc][1] )
            if bb:
                sub_sample_list.append(s)
        return sub_sample_list

    def run_rebalance(self,rebalance_factor,mix_rate,parallel=True,ncpu=14,balance_method="by_length"): # modified rebalance
        if parallel:
            from joblib import Parallel, delayed
            import multiprocessing
            results = Parallel(n_jobs=ncpu)(delayed(process_rebalance)(self.exprdir_full,
                                                                       x,rebalance_factor,
                                                                       mix_rate,False,balance_method) for x in self.sample_list)
            #results=[process_rebalance(self,x,rebalance_factor,mix_rate) for x in self.sample_list]
        else:
            print "Serial run rebalance"
            [process_rebalance(self.exprdir_full,x,rebalance_factor,mix_rate,False) for x in self.sample_list]
    def run_epmi(self,rebalance_factor,distcut,seqcut,debug=False,dryrun=False):
        __doc__ = "Gerenate .res file, and return all energy values."
        for s in self.sample_list:
            s.prob_file="%s/rank.epmi/%s.epad.prob" % (self.exprdir_full, s.sample_id)
            if rebalance_factor > 0 :
                s.prob_file="%s/rank.epmi/%s.epad.prob.reb" % (self.exprdir_full,s.sample_id)
        self.progdir=["rank.epmi"]
        if rebalance_factor > 0:
            self.run(bincut="0,4,5,6,7,8,9,10,11,12,13,14",distcut=str(distcut),seqcut=str(seqcut),debug=debug,dryrun=dryrun)
        else:
            self.run(bincut="0,4,5,6,7,8,9,10,11,12,13,14,15",distcut=str(distcut),seqcut=str(seqcut),dryrun=dryrun)

        # RUn the final analysis to compare two methods.
        print "distcut %d, seqcut %d reb %.2f" % (distcut,seqcut,rebalance_factor)

    def run_split_list(self, rebalance_factor, distcut, seqcut,  neff_cut=[0,20],length_cut=[0,2000]):
        __doc__ = "Assemble all the results and print them out."
        self.progdir=["rank.epad","rank.epmi"]
        protein_prof=get_protein_prof(self.prof_file)
        # 0 mean all the pdb, 8 means all protein with neff > 8.
        original_list=self.sample_list
        sub_sample_list=self.split_sample_list(self.sample_list,protein_prof,neff=neff_cut,length=length_cut)
        self.sample_list=sub_sample_list
        res_doc=self.analysis()

        res={"workdir":self.workdir,
                 "exprdir":self.exprdir,
                 "progdir":self.progdir,
                 "(distcut,seqcut,rebalance_factor,neff_cut)":(distcut,seqcut,rebalance_factor,neff_cut),
                 "number_sample":len(sub_sample_list),
                 "result":res_doc,
                 "rebalance_factor":rebalance_factor,
                 "neff_cut":neff_cut,
                 "sample_list": [ x.sample_id for x in sub_sample_list],
                 "profile" : [ protein_prof[x.sample_id] for x in sub_sample_list]
                 }
        self.db["result"].insert(res)
        self.sample_list=original_list
def run_and_analysis(**kwargs):
    pass


def mix_pairwise_energy():
    pass

def main(test_list_file="/home/zywang/work/epmi/test_rank_rosetta/test.list",**kwargs):
    # Folder structure of raw data
    # model is encoded in the parameter of a running program
    #
    # workdir: project_dir / exprdir: experiment_name{train|test}_method_dataset / progdir: program(testmethod, parameter)/ sample/files for this sample

    def init_sample_list(test_list=test_list_file):
        sample_list=[ Sample(s) for s in readlist(test_list) ]
        for s in sample_list:
            s.decoy_list=glob.glob("/home/zywang/work/data/rosetta_decoys_62proteins/first_decoys/*%s*.pdb" % s.sample_id) \
                        +glob.glob("/home/zywang/work/data/rosetta_decoys_62proteins/low_score_decoys/*%s*.pdb" % s.sample_id) \
                        +glob.glob("/home/zywang/work/data/rosetta_decoys_62proteins/natives/*%s*.pdb" % s.sample_id)
            s.fasta_file="/home/zywang/work/data/rosetta_fasta/%s.fasta" % s.sample_id
            s.native_pdb_file="/home/zywang/work/data/rosetta_decoys_62proteins/natives/%s.pdb" % s.sample_id
        return sample_list

    sample_list=init_sample_list()

    import zydb
    #for (distcut, seqcut, rebalance_factor) in itertools.product([9999],[6],[1]):

    db.pkg_config['epadlocal.workdir'] = '/home/zywang/work/allbio.re1/contrib/epad/EPAD'
    db.pkg_config['epadlocal.executable'] = '/home/zywang/work/allbio.re1/contrib/epad/EPAD/runEPAD_example.sh'

    for (distcut, seqcut, rebalance_factor, mix_rate,
         balance_method, pe_mix_rate, pairwise_energy_method) in \
            itertools.product([9999],[6],[1 ],[0.5],
                              ["by_length"], [0.2, 0.5, 0.8], [EvaluateEpadLocal]):
        print "(distcut, seqcut, rebalance_factor, mix_rate, balance_method, pe_mix_rate, pairwise_energy_method)"
        print (distcut, seqcut, rebalance_factor, mix_rate,
         balance_method, pe_mix_rate, pairwise_energy_method)
        #test_epmi.run_rebalance(rebalance_factor=rebalance_factor,mix_rate=0.8)
        test_epmi=RankRosetta(
            "compare-rank-epmi-epad",
            RunARank(),sample_list,
            #LocalCruncher(),
            ComputingHost(ncpu=64),
            workdir="/home/zywang/work/epmi/",
            exprdir="test_rank_rosetta",
            progdir=["rank.epmi","rank.epad"],
            db=zydb.db,
            prof_file="/home/zywang/work/data/rosetta.prof",
            pairwise_energy_mix_rate=pe_mix_rate,
        )
        test_epmi.pairwise_energy_method=pairwise_energy_method
        test_epmi.run_rebalance(rebalance_factor=rebalance_factor,mix_rate=mix_rate,parallel=True,ncpu=32,balance_method=balance_method)
        test_epmi.run_epmi(rebalance_factor,distcut,seqcut)
        test_epmi.run_split_list(rebalance_factor,distcut,seqcut,neff_cut=[0,20])

    test_dfire=RankRosetta("compare-rank-epmi-epad",
            RunARank(evaluate_method=EvaluateDfire),sample_list,
            #LocalCruncher(),
            ComputingHost(ncpu=64),
            workdir="/home/zywang/work/epmi/",
            exprdir="test_rank_rosetta",
            progdir=["rank.epmi","rank.epad"],
            db=zydb.db,
            prof_file="/home/zywang/work/data/rosetta.prof"
            )
    #for (distcut, seqcut, rebalance_factor) in itertools.product([9999],[6],[1]):
        #test_epmi.run_rebalance(rebalance_factor=rebalance_factor,mix_rate=0.8)
        #test_dfire.run_epmi(rebalance_factor,distcut,seqcut)
        #test_dfire.run_split_list(rebalance_factor,distcut,seqcut,neff_cut=[0,20])




if __name__ == '__main__':
    #    main()
    #cProfile.run('re.compile("foo|bar")')
    #print zip(sys.argv[1::2], sys.argv[2::2])
    #import cProfile
    import sys
    a=sys.argv
    #cProfile.run('main(**( dict(zip(sys.argv[1::2], sys.argv[2::2]))))')
    main(**( dict(zip(sys.argv[1::2], sys.argv[2::2]))))

# check ref 1 norm 1 and calc_divide
