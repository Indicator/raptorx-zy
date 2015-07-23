import numpy as np
import copy
import glob
import pprint
from ProteinUtil import *
from SimpleParallel import *
import test_rank_rosetta

__author__ = 'zywang@ttic.edu'

class CNFSample(Runnable):
    # old, to be deleted.do not use
    def get_run_string_cnfsample(self):
        exec_file="" # find  DATA -type f ; find config -type f ; find SEQ  -name "${PDBID}*"
        # ./generatefeature-zy.sh $PDBID 1 &> genfeature.$PDBID.log
        # tar xzf $input_tar ; mkdir Decoy_$PDBID ;  ./bin/ProteinFolder -f ./DATA/proteinFolderCNFo2.conf -a $METHOD -A ./SEQ/EPAD/$PDBID.epad$EPMIFILE  -o Decoy_$PDBID/ $PDBID ; tar czf $output_tar Decoy_$PDBID
    def get_run_string(self,sample, output_dir,**kwargs):
    # return cmd file
        sample_id=sample.sample_id
        input_files="" # relative path
        input_tar= "" # full path
        # run at local?
        pre_cmd="cd work/casp11/2order_Contact/ ; ./generatefeature-zy.sh %s 1 &> genfeature.%s.log " % ( sample.sample_id, sample.sample_id ) + " ; " + \
            "tar czf $input_tar -h bin/ProteinFolder $input_files"
        cmd="tar xzf $input_tar ; mkdir Decoy_$PDBID ;  ./bin/ProteinFolder -f ./DATA/proteinFolderCNFo2.conf -a $METHOD -A ./SEQ/EPAD/$PDBID.epad$EPMIFILE  -o Decoy_$PDBID/ $PDBID ; tar czf $output_tar Decoy_$PDBID"
        # Because of the output map
        post_cmd="scp $output_tar localhost" # can be done in computer
        output_files=""
        input_tar="test-innput-tar"
        output_tar="test-output-tar"
        return (cmd,pre_cmd,input_tar,output_tar)

class ProteinSampler(Runnable):
    # Provide a the running command with parameters ,but not run
    """Class of runnable programs, such as training program or predicting program"""
    def __init__(self,sample=Sample(""),name="ProteinSampler",remote_workpath="",computer=ComputingHost(),job_id=0,no_ref=False):
        self.name=name
        self.executable="./bin/ProteinFolder"
        self.library_dir="/home/zywang/work/casp11/2order_Contact"
        self.repeat=10 # TODO
        self.remote_workpath=remote_workpath
        self.computer=computer
        cmd="cd {lib_dir}; echo -n $(find  DATA -type f ; find config -type f ; ) ".format(PDBID=sample.sample_id,lib_dir=self.library_dir)
        self.program_files=ComputingHost().run_and_wait(cmd)
        self.job_id=job_id
        self.no_ref=no_ref
    def get_pre_run_string(self):
        return self.pre_cmd
    def get_post_run_string(self):
        return self.post_cmd
    def get_run_string(self):
        return self.cmd
    def deploy_program(self):
        # for remote computer with shared disk nodes
        cmd="ssh {user}@{host} mkdir -p {workpath}/bin ; ".format(user=self.computer.remote_user, host=self.computer.remote_host, workpath=self.remote_workpath ) + \
        "cd {lib_dir}; scp {executable} {user}@{host}:{workpath}/bin ; ".format(lib_dir=self.library_dir,workpath=self.remote_workpath,executable=self.program_files,user=self.computer.remote_user, host=self.computer.remote_host)
        return cmd
    def bind_remote(self,sample, output_dir,**kwargs):
        # This function will generate submit script, and run script, and submit the submit script on OSG network.
        # To upgrade
        self.sample=sample
        self.signature="pf_"+sample.sample_id+"_"+str(abs(hash(self)))
        self.input_tar="%s.input.tgz" % sample.sample_id
        if "job_id" in kwargs:
            self.job_id=kwargs["job_id"]
        self.output_tar="%s.output.tgz" % sample.sample_id
        self.output_dir=output_dir

        cmd="cd {lib_dir}; echo -n $(find  DATA -type f ; find config -type f ; find SEQ  -name \"{PDBID}*\") ".format(PDBID=sample.sample_id,lib_dir=self.library_dir)
        self.input_files=ComputingHost().run_and_wait(cmd)
        if sample.epmifile != "" :
            self.input_files=self.input_files + " "+self.executable + " ./%s" % os.path.basename(sample.epmifile)
            self.pre_cmd="cd $HOME/work/casp11/2order_Contact/ ; ln -s {epmifile} . ;  ./generatefeature-zy.sh {pdbid} 1 " \
                         "&> genfeature.{pdbid}.log ".format(epmifile=sample.epmifile,pdbid=sample.sample_id) + " ; " + \
                "tar czf {input_tar} -h bin/ProteinFolder {input_files} ; ".format(input_tar=self.input_tar,input_files=self.input_files,epmifile=sample.epmifile) + \
                self.deploy_program() + \
                "scp {input_tar} {user}@{host}:{workpath} ; ".format(workpath=self.remote_workpath,user=self.computer.remote_user, host=self.computer.remote_host,input_tar=self.input_tar)
            #print self.pre_cmd ; exit(0)
            #  IMPORTANT, it can be sth functional; bind sth and run later; what is that?
            self.post_cmd="scp {user}@{host}:{output_tar}* {local_dir}".format(user=kwargs["computer"].remote_user,host=kwargs["computer"].remote_host,
                                                                         local_dir=kwargs["local_dir"],output_tar=self.remote_workpath+"/"+self.output_tar)
            pdbid=sample.sample_id
            sample.output_tar=self.output_tar
            epmi_file=","+os.path.basename(sample.epmifile)
            if self.no_ref:
                epmi_file=epmi_file+",no_ref"

            self.cmd="mkdir -p {output_dir} ; ./bin/ProteinFolder -f ./DATA/proteinFolderCNFo2.conf -a {METHOD} " \
                    "-A ./SEQ/EPAD/{PDBID}.epad{EPMIFILE}  -o {output_dir} {PDBID} " \
                    .format(output_dir=output_dir,input_tar=self.input_tar,output_tar=self.output_tar,PDBID=sample.sample_id,METHOD="REMC", EPMIFILE=epmi_file)
            # a debug code
            #self.cmd="mkdir -p {output_dir} ; echo ./bin/ProteinFolder -f ./DATA/proteinFolderCNFo2.conf -a {METHOD} " \
            #        "-A ./SEQ/EPAD/{PDBID}.epad{EPMIFILE}  -o {output_dir} {PDBID} > {output_dir}/{PDBID}.$$.pdb" \
            #        .format(output_dir=output_dir,input_tar=self.input_tar,output_tar=self.output_tar,PDBID=sample.sample_id,METHOD="REMC", EPMIFILE=epmi_file)
            #self.cmd="{cmd}' > {output} ".format(cmd=self.cmd, output=self.output_tar)
            #            self.cmd="tar xzf {input_tar} ; mkdir Decoy_{PDBID} ;  ".format(input_tar=self.input_tar,output_tar=self.output_tar,PDBID=sample.sample_id,METHOD="REMC", EPMIFILE=epmi_file)
            #                     " tar czf {output_tar} Decoy_{PDBID}".format(input_tar=self.input_tar,output_tar=self.output_tar,PDBID=sample.sample_id,METHOD="REMC", EPMIFILE=epmi_file)
    def bind_local(self,sample, output_dir,**kwargs):
        # run the program and output to full path
        if sample.epmifile != "" :
            epmi_file=","+sample.epmifile
            self.cmd="mkdir -p {output_dir} ; cd {path} ;  ./generatefeature-zy-casp10.sh {PDBID} 1 &> genfeature.{PDBID}.log ; "  \
            "./bin/ProteinFolder -f ./DATA/proteinFolderCNFo2.conf -a {METHOD} " \
                 "-A ./SEQ/EPAD/{PDBID}.epad{EPMIFILE}  -o {output_dir} {PDBID} " \
                .format(output_dir="~/"+self.remote_workpath+"/"+output_dir,
                        PDBID=sample.sample_id,
                        METHOD="REMC", EPMIFILE=epmi_file,path=self.library_dir )
    def bind(self,sample, output_dir,**kwargs):
        #self.bind_local(sample, output_dir,**kwargs)
        self.bind_remote(sample, output_dir,**kwargs)

class ProteinSamplerCasp10(SampleTask, test_rank_rosetta.RankRosetta): # We need RankRosetta to run all the rebalance.
    """Apply a runnable to a sample on a machine"""
    # Which files need to copy
    # COmmand to run
    # How to check status
    # Which files to copy back.
    # Task name
    def __init__(self,name,runnable,sample_list,computer,workdir,exprdir,progdir,progdir_list):
        self.name=name
        self.workdir=workdir
        self.exprdir=exprdir
        self.exprdir_full=exprdir
        self.progdir=progdir_list
        self.progdir_list=progdir_list
        self.runnable=runnable
        self.sample_list=sample_list
        self.computer=computer
        self.num_sample_track=1 # I forgot what this means.
        self.exprdir_full=self.workdir+"/"+self.exprdir
        # set work dir

    def run(self,dryrun=False,**kwargs):
        # create dirs
        for i in self.progdir :
            dir=self.workdir+"/"+self.exprdir+"/"+i
            if not os.path.isdir(dir) :
                os.makedirs(dir)
            cmd_list=[]
            run_list=[]
            for sample in self.sample_list :
                output_dir="Decoy_"+sample.sample_id
                for job_id in range(self.num_sample_track):
                    self.runnable.bind(sample,output_dir,computer=self.computer, local_dir=self.workdir+"/"+self.exprdir+"/"+ i , job_id=job_id)
                    #cmd=self.runnable.get_run_string(sample,output_dir,**kwargs)
                    cmd=self.runnable.get_run_string()
                    cmd_list.append(cmd)
                    run_list.append(copy.copy(self.runnable))
            #print cmd_list
            self.computer.runbatch_and_wait(cmd_list,run_list=run_list, dryrun=dryrun)
    def get_decoy_list(self,folder_tarball_name,sample):
        full_decoy_folder=""
        if(os.path.isfile(folder_tarball_name)):
            # untar and return the list
            full_exprdir=self.workdir+"/"+self.exprdir+"/"+self.progdir[0]
            print full_exprdir
            cmd="tar xzf %s -C %s " % (folder_tarball_name,full_exprdir)
            print cmd
            ComputingHost().run_and_wait(cmd)
            # give the get_tmscore the result decoy folder .
            full_decoy_folder=full_exprdir+"/Decoy_%s" % sample.sample_id
        else:
            full_decoy_folder=folder_tarball_name
        return glob.glob("%s/%s*.pdb" % (full_decoy_folder,sample.sample_id))
    def analysis(self,redo=False):
        # This should be run independently to analyse a result
        method_tag="epmi.sampling." # more information aobut the method
        # method_tag="model.model_parameter.testmethod.test_method_parameter"
        import matplotlib
        matplotlib.use('Agg')
        import matplotlib.pyplot

        for isample in range(len(self.sample_list)):
            density=[]
            alldata=[]
            res_list=[]
            sample=self.sample_list[isample]

            pngfile=self.workdir+"/"+self.exprdir+"/png/"+sample.sample_id+".png"
            if (not redo) and os.path.exists(pngfile) :
                print "Skip %s" % sample.sample_id
                return ""
            # untar copy back output files
            for i in self.progdir_list :
                #res=self.get_tmscore(self.workdir+"/"+self.exprdir+"/"+i+"/"+sample.sample_id, sample, )
                decoy_list=[]
                if i=="cnfsampling.epmi":
                    decoy_list.extend(glob.glob(self.workdir+"/"+self.exprdir+"/"+i+"/Decoy_%s/*.pdb" % sample.sample_id))
                    # for job_id in range(self.num_sample_track):
                    #     sample.output_tar=self.workdir+"/"+self.exprdir+"/"+i+"/%s.output.tgz.%d" % (sample.sample_id,job_id)
                    #     if os.path.isfile(sample.output_tar):
                    #         decoy_list.extend(self.get_decoy_list(sample.output_tar,sample))
                else:
                    decoy_list=self.get_decoy_list(self.workdir+"/"+self.exprdir+"/"+i+"/" + sample.sample_id+"/",sample)
                #cmd="cd result_dir/ ; for i in *.output.tgz.* ; do mkdir group$k ; tar xzf $i -C group$k ; k=$(($k+1)) ; done  "
                res=TMscore(computer=ComputingHost()).get_tmscore_list(native=sample.native_pdb, decoy_list=decoy_list)
                alldata=alldata+res
                res_list.append(res)
            if len(alldata)  == 0 :
                continue
            m1=min(alldata)
            m2=max(alldata)
            if m1 == m2 :
                continue
            for i in range(len(res_list)) :
                density.append(np.histogram(np.array(res_list[i]),np.arange(m1,m2,(m2-m1)/10),density=True)[0])
            # compare energy, TM-score, gdt-score with native

            matplotlib.pyplot.clf()
            matplotlib.pyplot.plot(np.arange(m1,m2,(m2-m1)/10)[0:9], density[0],'r',label=self.progdir[0])
            matplotlib.pyplot.plot(np.arange(m1,m2,(m2-m1)/10)[0:9], density[1],'b',label=self.progdir[1])
            matplotlib.pyplot.legend()
            matplotlib.pyplot.savefig(pngfile)
        # work on outputfiles and compute the result
        #extract files, run tmscore parallel, and compute distribution
        return ""
    def raptorxroll_from_tarball(self,pdbid):
        pass
    def lowest_energy_decoy(self,decoy_list):
        energy=[]
        best_decoy=None
        min_energy=None
        for decoy in decoy_list:
            with open(decoy,"r") as ff:
                hh=ff.readline()
                energy=[(energy,decoy), re.split("\s+|;",hh)[8]]
                if min_energy==None or energy<min_energy:
                    min_energy=energy
                    best_decoy=decoy
        return best_decoy
    def best_top5decoy(self,decoy_list):
        pass
    def folding_analysis(self,sample_list, human_list="/home/zywang/work/data/casp10/casp10-human.list"):
        # read the score of the best 5 result of human targets, 67 proteins.
        casp10_lead_list=readlist("/home/zywang/work/data/casp10/casp10-human.tmscore.gdt.gdtha.dat")
        casp10_lead_list=readlist("/home/zywang/work/data/casp10/casp10-raptorx-human.tmscore.gdt.gdtha.dat")
        casp10_lead_list=readlist("/home/zywang/work/data/casp10/casp10-raptorx-hard.tmscore.gdt.gdtha.dat")
        casp10_lead_list=readlist("/home/zywang/work/data/casp10/casp10-raptorx-fm.domain.tmscore.gdt.gdtha.dat")
        casp10_lead_list=readlist("/home/zywang/work/data/casp10/casp10-raptorx-roll-nonzero--fm.domain.tmscore.gdt.gdtha.dat")
        casp10_lead_list=readlist("/home/zywang/work/data/casp10/casp10-raptorx-roll-nonzero-all.tmscore.gdt.gdtha.dat")
        #casp10_lead_list=readlist("/home/zywang/work/data/casp10/casp10-raptorx-roll-submitted-nonzero.tmscore.gdt.gdtha.dat")
        #casp10_lead_list=readlist("/home/zywang/work/data/casp10/casp10-quark-fm.domain.tmscore.gdt.gdtha.dat")
        #casp10_lead_list=readlist("/home/zywang/work/data/casp10/casp10-baker-fm.domain.tmscore.gdt.gdtha.dat")
        #casp10_lead_list=readlist("/home/zywang/work/data/casp10/casp10-fm.domain.tmscore.gdt.gdtha.dat")
        casp10_lead_list=readlist("/home/zywang/work/data/casp10/casp10-raptorx-roll-all.tmscore.gdt.gdtha.dat.from_predictioncenter")
        #casp10_lead_list=readlist("/home/zywang/work/data/casp10/casp10-quark-all.tmscore.gdt.gdtha.dat.from_predictioncenter")
        #casp10_lead_list=readlist("/home/zywang/work/data/casp10/casp10-rosettaserver-all.tmscore.gdt.gdtha.dat.from_predictioncenter")
        # use panda.read_csv for read a data frame next time
        casp10_lead={}
        for line in casp10_lead_list:
            sample_id=re.split("\s+",line)[0]
            casp10_lead[sample_id]=[float(x) for x in re.split("\s+",line)[1:]]
        target_list=readlist(human_list)

        cluster_ctr_path="/home/zywang/work/epmi/test_sample_casp10/cnfsampling.epmi/cluster_result"

        all_epmi=[]
        all_lead=[]
        all_pdbid=[]
        for sample in sample_list : # the g_pdbid file
            if sample.sample_id in casp10_lead:
                protein_x=cluster_ctr_path+"/g_"+sample.sample_id
                #print protein_x
                protein_x_clusters=readlist(protein_x)
                protein_x_tmscore=[]
                for eachline in protein_x_clusters:
                    decoy=re.split("\s+",eachline)[-1]  # the decoy centroid
                    tms=TMscore(computer=ComputingHost()).get_tmscore(sample.native_pdb, decoy,method="TMscore")
                    protein_x_tmscore.append(tms)
                    #print decoy, tms
                protein_x_epmi=np.max(protein_x_tmscore)

                #use the lowest energy one

                decoy_list_str="/home/zywang/work/epmi/test_sample_casp10/"\
                    "cnfsampling.epmi/Decoy_tarball-1/{pdbid}.output.tgz.*/" \
                    "Decoy_{pdbid}/{pdbid}*.pdb".format(pdbid=sample.sample_id)
                #print decoy_list_str
                best_decoy=self.lowest_energy_decoy(glob.glob(decoy_list_str))
                #protein_x_epmi=TMscore(computer=ComputingHost()).get_tmscore(sample.native_pdb, best_decoy,method="gdt")

                protein_x_lead=casp10_lead[sample.sample_id][0] # tmscore
                all_epmi.append(protein_x_epmi)
                all_lead.append(protein_x_lead)
                all_pdbid.append(sample.sample_id)
                if protein_x_epmi > protein_x_lead :
                    print sample.sample_id,protein_x_epmi , protein_x_lead
        print "average_epmi_tmscore average_lead_tmscore %.4f %.4f" % (np.average(all_epmi),np.average(all_lead))
        #print ["%.4f" % x for x in all_epmi]
        #print ["%.4f" % x for x in all_lead]
        pprint.PrettyPrinter().pprint( np.array(zip(all_pdbid,all_epmi,all_lead)))
        #for (x,y) in zip(all_epmi,all_lead):
        #    if x > y:
        #        print (x,y)

        # choose a score to compare,

def run_and_analysis(**kwargs):
    pass

    def main(test_list_file="/home/zywang/work/casp10tplFull/casp10off.list",dryrun=False,parallel=False,**kwargs):
        if dryrun=="True":
            dryrun=True
        test_list=readlist(test_list_file)
        sample_list=[ Sample(s) for s in test_list]
        workdir="/home/zywang/work/epmi/"
        exprdir="test_sample_casp10"
        exprdir_fullpath=workdir+"/" +exprdir

        for s in sample_list:
            s.native_pdb="/home/zywang/work/casp10pdb/%s.pdb" % s.sample_id
            s.epmifile=exprdir_fullpath + "/cnfsampling.epmi/%s/%s.epad.prob" % (s.sample_id,s.sample_id)
            epad_file="/home/zywang/work/sdcp/data1/epad.casp10/%s.epad.prob" % s.sample_id
            #rebalance_combine(s.epmifile,epad_file,1)
            s.epmifile=exprdir_fullpath + "/cnfsampling.epmi/%s/%s.epad.prob.reb" % (s.sample_id,s.sample_id)
        if parallel:
            from joblib import Parallel, delayed
            import multiprocessing
            results = Parallel(n_jobs=32)(delayed(process_rebalance)(exprdir_fullpath,x,1,0.8,False
                                                                    # sub_epad_dir="cnfsampling.epad",
                                                                    # sub_epmi_dir="cnfsampling.epmi"
                                                                    ) for x in sample_list)
            #results=[process_rebalance(self,x,rebalance_factor,mix_rate) for x in self.sample_list]
        else:
            #print "Serial run rebalance"
            #[process_rebalance(exprdir_fullpath,x,1,0.8,False) for x in sample_list]
            pass

        computer=OpenScienceGrid("lfzhao", "login.osgconnect.net",num_proc=200) # the queue
        test_epmi=ProteinSamplerCasp10("compare-epmi-epad",
                                       ProteinSampler(remote_workpath="work/epmi/test_sample_casp10/cnfsampling.epmi",
                                                      computer=computer,no_ref=True),
                                       sample_list,
                                       computer,
                                       workdir="/home/zywang/work/epmi/",
                                       exprdir="test_sample_casp10",
                                       progdir="cnfsampling.epmi",
                                       progdir_list=["cnfsampling.epmi"]
                                       )
        #test_epmi.run_rebalance(1,0.8,True,1)
        #test_epmi.run(dryrun=dryrun)
        #test_epmi.progdir=["cnfsampling.epmi", "cnfsampling.epad"]
        #test_epmi.progdir_list=["cnfsampling.epmi", "cnfsampling.epad"]
        #test_epmi.analysis(redo=True)
        test_epmi.folding_analysis(sample_list)
def test1():
    main(test_list_file='test.list.h1',dryrun='False')
if __name__ == '__main__':
    import sys
    #print " ".join([ x[0]+"="+x[1] for x in zip(sys.argv[1::2], sys.argv[2::2])])
    #cProfile.run('main(**( dict(zip(sys.argv[1::2], sys.argv[2::2]))))')
    #test1()
    main(**( dict(zip(sys.argv[1::2], sys.argv[2::2]))))

