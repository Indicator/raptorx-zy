#!/usr/bin/python

import numpy as np
import random

import zydb as db
from SimpleParallel import *


def get_protein_prof(filename):
    # return a dict, pdbid->(neff=>,len=>)
    res=dict()
    xx=readlist(filename)
    for ii in xx:
        ss=re.split("\s+",ii)
        res[ss[0]]={"neff":float(ss[1]),"length":int(ss[2])}
    return res

def rebalance(filename,factor):
    prob=np.genfromtxt(filename)
    prob=prob[:,0:14]
    (dimx,dimy)=prob.shape
    #
    ss= sum(prob[:,2:].T)
    prob[:,2:]=np.divide(prob[:,2:],np.tile(ss.reshape(dimx,1),[1,dimy-2]))
    prob[:,dimy-1]=np.exp(np.log(prob[:,dimy-1])/factor)

    ss= sum(prob[:,2:].T)
    prob[:,2:]=np.divide(prob[:,2:],np.tile(ss.reshape(dimx,1),[1,dimy-2]))
    np.savetxt(filename+".reb",prob,fmt=" ".join(["%d","%d"]+["%.5f" for i in range(dimy-2)]))
def process_rebalance1(exprdir_full,s,rebalance_factor,mix_rate,dryrun=False):
    if dryrun:
        print s.sample_id
    return 1
def process_rebalance(exprdir_full,s,rebalance_factor,mix_rate,dryrun=False,balance_method="by_length",sub_epmi_dir="rank.epmi",sub_epad_dir="rank.epad"):
    __doc__ = "Balance with input: .epad.prob and prob files, and output: epad.prob.reb."
    if dryrun:
        print s.sample_id
        return 1
    s.prob_file="%s/%s/%s.epad.prob" % (exprdir_full,sub_epmi_dir, s.sample_id)
    if rebalance_factor > 0 :
        epad_file="%s/%s/%s.epad.prob" % (exprdir_full,sub_epad_dir, s.sample_id)
        #rebalance(s.prob_file,rebalance_factor)
        rebalance_combine(s.prob_file,epad_file,rebalance_factor,mix_rate)
        s.prob_file="%s/%s/%s.epad.prob.reb" % (exprdir_full,sub_epmi_dir, s.sample_id)
        rebalance_bin_prob(epad_file,s.prob_file,balance_method)
    if not os.path.isfile(s.prob_file) :
        print s.prob_file," not exist"
        return 2 #exit(-1)
    return 1
def rebalance_combine(filename1,filename2,factor,mix_rate=0.8):
    prob=np.genfromtxt(filename1)
    prob[:,13]=prob[:,14]+prob[:,13]
    prob=prob[:,0:14]
    (dimx,dimy)=prob.shape

    ss= sum(prob[:,2:].T)
    prob[:,2:]=np.divide(prob[:,2:],np.tile(ss.reshape(dimx,1),[1,dimy-2]))
    prob[:,dimy-1]=np.exp(np.log(prob[:,dimy-1])/factor) # do factor on new prob.

    ss= sum(prob[:,2:].T)
    prob[:,2:]=np.divide(prob[:,2:],np.tile(ss.reshape(dimx,1),[1,dimy-2]))

    prob2=np.genfromtxt(filename2) # original epad file
    (dimx2,dimy2)=prob2.shape
    if not (dimx==dimx2 and dimy2==dimy):
        raise "Rebalance_combine dimension not match"
    ss= sum(prob2[:,2:].T)
    prob2[:,2:]=np.divide(prob2[:,2:],np.tile(ss.reshape(dimx,1),[1,dimy-2]))
    # combine prob and prob2
    prob[:,2:]=prob[:,2:]*(1-mix_rate)+prob2[:,2:]*mix_rate
    #prob[:,2:]=prob[:,2:]

    np.savetxt(filename1+".reb",prob,fmt=" ".join(["%d","%d"]+["%.5f" for i in range(dimy-2)]))
def read_dist_bin(method="total",nbin=3):
    if method == "total":
        dist_bin_h200=np.genfromtxt('/home/zywang/work/dpln/run.pnn1/distance_bin.txt',delimiter=",")
        dist_bin=np.sum(dist_bin_h200,0)/3
        return dist_bin

    if method == "by_seq_dist":
        return np.genfromtxt('/home/zywang/work/dpln/run.pnn1/distance_bin.txt',delimiter=",")
    if method == "by_lengh_seq_dist" or method == "by_length":
        import scipy.io
        if nbin==3 :
            return scipy.io.loadmat('/home/zywang/work/dpln/run.pnn1/distance_bin.mat')['count_all']
        else:
            return scipy.io.loadmat('/home/zywang/work/dpln/run.pnn1/distance_bin%d.mat' % (nbin))['count_all']
def get_seq_dist_bin(seq_dist):
    if seq_dist<=12:
        return 0
    else:
        if seq_dist <=24:
            return 1
        else:
            return 2
def get_length_bin(length,nbin=3):

    if nbin==3:
        if length<=100:
            return 0
        else:
            if length<=200:
                return 1
            else:
                return 2
    if nbin==10:
        binning=[1,60,80,100,120,140,160,200,300,500,1000]
        for i in range(len(binning)):
            if length>=binning[i] and length < binning[i+1]:
                return i-1

def rebalance_bin_prob(epad_prob,epmi_prob,method="by_lengh",nbin=10):
    def calc_linear(pijk,qk):
        distr=np.sum(pijk,0)
        ratio=np.divide(qk*np.sum(distr),np.tile(distr,[pijk.shape[0],1]))
        #print distr.shape
        #print pijk.shape
        #print qk.shape
        #print ratio.shape
        return np.multiply(pijk,ratio)
    def calc_exp(pijk,qk):
        pijk=pijk+0.00001
        ratio=np.exp(-np.sum(np.log( np.divide(pijk,qk) ),0 )/ qk.shape[0])
        pijk=np.multiply(pijk,np.tile(ratio,[pijk.shape[0],1]))
        return pijk
    def calc_divide(pijk,qk):
        return (pijk+qk)/2
    if method == "total":
        target_dist=read_dist_bin(method)
        #xxepad=np.genfromtxt(epad_prob)
        #target_distr=np.sum(xxepad,0)[2:]
        xxepmi=np.genfromtxt(epmi_prob)
        pijk=xxepmi[:,2:]
        qk=target_dist
        xxepmi[:,2:]=calc_linear(pijk,qk)
        np.savetxt(epmi_prob, xxepmi, delimiter=" ",fmt=" ".join(["%d","%d"]+["%.5f" for i in range(xxepmi.shape[1]-2)]))

    if method=="by_seq_dist":
        xxepmi=np.genfromtxt(epmi_prob)
        target_dist=read_dist_bin(method)
        # rebalance_by_seq_dist(xxepmi=xxepmi)
        row_bin=[[],[],[]]
        row_dist=[]
        for irow in range(xxepmi.shape[0]):
            #target_dist_seq_dist=target_dist[get_seq_dist_bin(xxepmi[irow,1]-xxepmi[irow,0]),:]
            #xxepmi[irow,2:]=np.multiply(xxepmi[irow,2:],np.tile(ratio,[xxepmi.shape[0],1]))
            row_bin[get_seq_dist_bin(xxepmi[irow,1]-xxepmi[irow,0])].append(irow)
        for i in range(3):
            pijk=xxepmi[row_bin[i],2:]
            qk=np.tile(target_dist[i,:],[pijk.shape[0],1])
            calc_exp(pijk,qk)
            xxepmi[row_bin[i],2:]=pijk
            #xxepmi[:,2:]=xxepmi[:,2:]+0.00001
            #distr=np.sum(xxepmi[row_bin[i],2:],0)
            #ratio=np.divide(target_dist[i,:]*np.sum(distr),distr)
            #xxepmi[row_bin[i],2:]=np.multiply(xxepmi[row_bin[i],2:],np.tile(ratio,[len(row_bin[i]),1]))

        np.savetxt(epmi_prob, xxepmi, delimiter=" ",fmt=" ".join(["%d","%d"]+["%.5f" for i in range(xxepmi.shape[1]-2)]))
    if method=="by_length":
        xxepmi=np.genfromtxt(epmi_prob)
        seqlen=xxepmi[xxepmi.shape[0]-1,1]
        if seqlen>120 :
            target_dist=read_dist_bin(method,nbin=nbin)
            target_dist=target_dist[0,get_length_bin(seqlen,nbin=nbin)]
            target_dist=np.sum(target_dist,0)/3

            pijk=xxepmi[:,2:]
            qk=np.tile(target_dist,[pijk.shape[0],1])
        #if seqlen>120:
            xxepmi[:,2:]=calc_linear(pijk,qk)
            np.savetxt(epmi_prob, xxepmi, delimiter=" ",fmt=" ".join(["%d","%d"]+["%.8f" for i in range(xxepmi.shape[1]-2)]))
        #else:
        #    xxepmi[:,2:]=calc_exp(pijk,qk)
        #xxepmi[:,2:]=xxepmi[:,2:]+0.00001


    if method=="by_length_seq_dist":
        xxepmi=np.genfromtxt(epmi_prob)
        seqlen=xxepmi[xxepmi.shape[0]-1,1]
        target_dist=read_dist_bin(method,nbin=nbin)
        target_dist=target_dist[0,get_length_bin(seqlen,nbin=nbin)]
        xxepmi=np.genfromtxt(epmi_prob)
        row_bin=[[],[],[]]
        for irow in range(xxepmi.shape[0]):
            #target_dist_seq_dist=target_dist[get_seq_dist_bin(xxepmi[irow,1]-xxepmi[irow,0]),:]
            #xxepmi[irow,2:]=np.multiply(xxepmi[irow,2:],np.tile(ratio,[xxepmi.shape[0],1]))
            row_bin[get_seq_dist_bin(xxepmi[irow,1]-xxepmi[irow,0])].append(irow)
        for i in range(3):
            pijk=xxepmi[row_bin[i],2:]
            qk=np.tile(target_dist[i,:],[pijk.shape[0],1])
            calc_divide(pijk,qk)
            xxepmi[row_bin[i],2:]=pijk
            #xxepmi[:,2:]=xxepmi[:,2:]+0.00001
        np.savetxt(epmi_prob, xxepmi, delimiter=" ",fmt=" ".join(["%d","%d"]+["%.5f" for i in range(xxepmi.shape[1]-2)]))

    #print epmi_p
    # rob
    #print ("epad","epmi")
    #print np.sum(xxepad,0)
    #print np.sum(xxepmi,0)


def check_bin_prob(probfile,new_probfile):
    def print_dist():
        xxepad=np.genfromtxt(probfile)
        xxepmi=np.genfromtxt(new_probfile)
        print ("epad","epmi")
        print np.sum(xxepad,0)
        print np.sum(xxepmi,0)
    print_dist()
    rebalance_bin_prob(probfile,new_probfile)
    print_dist()


class EvaluateEnergy(Runnable):
    def __init__(self):
        self.name="evaluate_pairprob"
        self.executable="/home/zywang/work/dpln/src/energy2nd/build/eval_energy"
        self.computer=LocalCruncher(cpu_per_node=1)
    def get_run_string(self,sample,pdb_file,carbon="1",bincut="0,4,5,6,7,8,9,10,11,12,13,14",distcut="9999",seqcut="6", value_only=False):
        __doc__ = "Build the command line to compute the energy. Override if needed."
        executable=self.executable
        #res="echo -n %s \" \" " % pdb_file + "; %s -act pp -pp %s -pdb %s -pdbid %s " \
        #    "-fasta %s  -bin 0,4,5,6,7,8,9,10,11,12,13,14 " \
        #    "-log %s.log -ref 1" % (executable, sample.prob_file, pdb_file, sample.sample_id, sample.fasta_file, sample.sample_id)
        # for 13 probabilities
        #if re.match("epmi",sample.prob_file)!=None :
        res="echo -n %s \" \" " % pdb_file + " $( %s -act pp -pp %s -pdb %s -pdbid %s " \
            " -fasta %s  " \
            " -ref 1 " % (executable, sample.prob_file, pdb_file, sample.sample_id, sample.fasta_file) + \
            " -bin " + bincut + \
            " -carbon " + carbon + \
            " -distcut " + distcut + \
            " -seqcut " + seqcut + \
            " -norm 1 " +\
            " |tail -n1 ) ; echo \"\" "
        if value_only:
            res=" ( %s -act pp -pp %s -pdb %s -pdbid %s " \
                " -fasta %s  " \
                " -ref 1 " % (executable, sample.prob_file, pdb_file, sample.sample_id, sample.fasta_file) + \
                " -bin " + bincut + \
                " -carbon " + carbon + \
                " -distcut " + distcut + \
                " -seqcut " + seqcut + \
                " -norm 1 " +\
                " |tail -n1|awk '{print $NF}' )  "

        return res
    
    def get_energy(self,sample, decoy,method="",redo=False, callback=None):
        __doc__ = "Get energy from database or running the experiment."
        if not  os.path.isfile(decoy) :
            print decoy," not exist!\n"
            raise -1
        method=method.lower()
        #c=db.db["tmscore"]
        res=None
        c=None
        if db.db!=None:
            c=db.db["stat_energy"] # TODO create a table for this
            res=c.find_one({"decoy":decoy,"method":method})
        #res=None
        def check_out_of_date():
            __doc__ = " TODO: test if native decoy or model file are newer than the record."
            return False
        if res==None or redo==True or check_out_of_date():
            cmd=self.get_run_string(sample=sample, pdb_file=decoy,value_only=True)
            db.logger.info(cmd)
            # TODO, using callback,
            energy=float(self.computer.run_and_wait(cmd))
            res=dict()
            res.update({"decoy":decoy, "method":method, "energy":energy })
            if db.db!=None:
                c.insert(res)
                c.ensure_index([("decoy",db.pm.HASHED)], background=True  )
        return res["energy"]

class EvaluateDope(Runnable): # deprecated.
    def __init__(self):
        self.name="evaluate_dope"
        self.executable="/home/zywang/work/dpln/src/energy2nd/eval_energy"
    def get_run_string(self,sample,pdb_file,carbon="1",bincut="0,4,5,6,7,8,9,10,11,12,13,14",distcut="9999",seqcut="6",ref=1):
        executable=self.executable
        #res="echo -n %s \" \" " % pdb_file + "; %s -act pp -pp %s -pdb %s -pdbid %s " \
        #    "-fasta %s  -bin 0,4,5,6,7,8,9,10,11,12,13,14 " \
        #    "-log %s.log -ref 1" % (executable, sample.prob_file, pdb_file, sample.sample_id, sample.fasta_file, sample.sample_id)
        # for 13 probabilities
        #if re.match("epmi",sample.prob_file)!=None :
        res="echo -n %s \" \" " % pdb_file + "; %s -act dope -pp %s -pdb %s -pdbid %s " \
            "-fasta %s  " \
            "-log %s.log -ref %d" % (executable, sample.prob_file, pdb_file, sample.sample_id, sample.fasta_file, sample.sample_id, ref) \
            + \
            " -bin " + bincut + \
            " -carbon " + carbon + \
            " -distcut " + distcut + \
            " -seqcut " + seqcut +\
            " -norm 0"
        return res
    
class EvaluateEpadLocal(EvaluateEnergy):
    def __init__(self):
        super(EvaluateEpadLocal,self).__init__()
        self.name="epadlocal"
        self.executable=db.pkg_config['epadlocal.executable'] 
        self.workdir=db.pkg_config['epadlocal.workdir'] 
    def get_run_string(self,sample,pdb_file,value_only=False,**kwargs):
        executable=self.executable
        res = """tmpdir=$(mktemp -d) && cd $tmpdir && 
               mkdir -p SEQ/EPAD && mkdir -p DECOYS/{sample_id} &&
               ln -s {epad_feature_file} SEQ/EPAD/{sample_id}.epad &&
               cut -d' ' -f1-3,25-50 SEQ/EPAD/{sample_id}.epad > SEQ/EPAD/{sample_id}.epad_local &&
               ln -s {pdb_file} DECOYS/{sample_id} &&
               ls DECOYS/{sample_id}/ > DECOYS/{sample_id}.lst &&
               ./bin/EPADCalc -e EPAD -A SEQ/EPAD/{sample_id}.epad -d DECOYS/{sample_id} -L DECOYS/{sample_id}.lst -p simple && res=$(grep -o   'EPADLocal=[-+\.0-9]*' err1|sed 's/EPADLocal=//' |head -n1) && echo {pdb_file} $res""".format(sample_id=sample.sample_id, pdb_file=pdb_file, epad_feature_file=sample.epad_feature_file)
        if value_only:
            res = "tmpdir=$(mktemp -d) && cd $tmpdir && " \
            "mkdir -p SEQ/EPAD && mkdir -p DECOYS/{sample_id} && " \
            "ln -s {epad_feature_file} SEQ/EPAD/{sample_id}.epad && " \
            "cut -d' ' -f1-3,25-50 SEQ/EPAD/{sample_id}.epad > SEQ/EPAD/{sample_id}.epad_local && " \
            "ln -s {pdb_file} DECOYS/{sample_id} && " \
            "ln -s {workdir}/bin {workdir}/config ./ &&" \
            "ls DECOYS/{sample_id}/ > DECOYS/{sample_id}.lst && " \
            "./bin/EPADCalc -e EPAD -A SEQ/EPAD/{sample_id}.epad -d DECOYS/{sample_id} -L DECOYS/{sample_id}.lst -p simple 2>err1 1>{sample_id}.EPAD && res=$(grep -o 'EPADLocal=[-+\.0-9]*' err1|sed 's/EPADLocal=//' |head -n1) && echo $res".format(sample_id=sample.sample_id, pdb_file=pdb_file, epad_feature_file=sample.epad_feature_file, workdir=self.workdir)
        return res

class EvaluateOpus(EvaluateEnergy):
    # For a movable callback,
    def __init__(self):
        super(EvaluateOpus,self).__init__()
        self.name="opus"
        self.executable="/home/zywang/work/epmi/src/contrib/opus_psp_src/opus_psp"
        self.workdir="/home/zywang/work/epmi/src/contrib/opus_psp_src/" # only work in this folder
    def get_run_string(self,sample,pdb_file,value_only=False,**kwargs):
        executable=self.executable
        res = "cd %s ; echo -n %s ' '; echo %s | ./opus_psp |tail -n1 | awk '{print $2}' " % (self.workdir,pdb_file,pdb_file)
        if value_only:
            res = "cd %s ; echo %s | ./opus_psp |tail -n1 | awk '{print $2}' " % (self.workdir,pdb_file)
        return res



class EvaluateDfire(EvaluateEnergy):
    # For a movable callback,
    def __init__(self):
        super(EvaluateDfire,self).__init__()
        self.name="evaluate_dfire"
        self.executable="/home/zywang/work/epmi/src/contrib/dfire/dfire"
        self.workdir="/home/zywang/work/epmi/src/contrib/dfire/" # only work in this folder
    def get_run_string(self,sample,pdb_file,value_only=False, **kwargs):
        executable=self.executable
        tempfilename=str(int(random.random()*1000000) % 1000000)+".pdb"
        res = "cd {workdir} ; ln -s {pdb_file} {tempfile} ; " \
              "echo -n {pdb_file} ' ' ; (echo 'filename 0' ; echo '{tempfile} 0') | ./dfire |tail -n1 | ".format(
                tempfile=tempfilename,workdir=self.workdir,pdb_file=pdb_file) + \
              "awk '{print $2}' ; rm %s " % tempfilename
        if value_only:
            res = "cd {workdir} ; ln -s {pdb_file} {tempfile} ; " \
                  " (echo 'filename 0' ; echo '{tempfile} 0') | ./dfire |tail -n1 | ".format(
                      tempfile=tempfilename,workdir=self.workdir,pdb_file=pdb_file) + \
                  "awk '{print $2}' ; rm %s " % tempfilename
        return res

class EvaluateRw(EvaluateEnergy):
    # For a movable callback,
    def __init__(self):
        super(EvaluateRw,self).__init__()
        self.name="rw"
        self.executable="/home/zywang/work/epmi/src/contrib/rw/calRW"
        self.workdir="/home/zywang/work/epmi/src/contrib/rw/" # only work in this folder
    def get_run_string(self,sample,pdb_file,value_only=False, **kwargs):
        executable=self.executable
        res = "cd %s ; echo -n %s ' ';  ./calRW  %s |tail -n1 | awk '{print $4}' " % (self.workdir,pdb_file,pdb_file)
        if value_only:
            res = "cd %s ;  ./calRW  %s |tail -n1 | awk '{print $4}' " % (self.workdir,pdb_file)
        return res



class EvaluateDFire_0(Runnable):
    def __init__(self):
        self.name="evaluate_dfire"
        self.path="/home/zywang/program/dfire-alone"
        self.executable="prepot_dfire_alone"

    def get_run_string(self,sample,pdb_file,carbon="1",bincut="0,4,5,6,7,8,9,10,11,12,13,14",distcut="9999",seqcut="6"):
        executable=self.executable
        pdb_file_basename=os.path.basename(pdb_file)
        res="cd %s ; ln -s %s . ; ( echo . ; echo %s ) | ./%s ; rm %s " % \
            ( self.path,
              pdb_file,
              pdb_file_basename,
              self.executable,
              pdb_file_basename
            )
        return res

def em_stateless(evaluate_method, sample, pdb_file, redo):
    __doc__ = "Multi process runnable object."
    em=evaluate_method()
    return em.get_energy(sample,pdb_file, em.name, redo=redo)

class RunARank(Runnable):
    __doc__ = "Rank decoys from the same protein."
    def __init__(self,evaluate_method=EvaluateEnergy): # Can we pass the name of a class?
        self.evaluate_method=evaluate_method
        
    def evaluate_energy_for_all_decoys(self, sample, parallel="multithreads", db=None, redo=False):
        __doc__ = "Return a map, decoy -> energy."
        em=self.evaluate_method()
        db.logger.info("Evaluate energy for all decoys of "+sample.sample_id)
        res={}
        # Multiprocess call localcruncher to run get_energy.
        if parallel=="multiprocesses":
            from joblib import Parallel, delayed
            import multiprocessing
            res_list= Parallel(n_jobs=len(sample.decoy_list))(delayed(em_stateless)(self.evaluate_method, sample, pdb_file, redo)  for pdb_file in sample.decoy_list)
            res = dict(zip(sample.decoy_list, res_list))
        elif parallel=="multithreads":
            import threading
            import Queue
            q=Queue.Queue()
            def em_stateless_thread(q, evaluate_method, sample, pdb_file, redo):
                em=evaluate_method()
                res=em.get_energy(sample,pdb_file, em.name, redo=redo)
                q.put((pdb_file, res))
            for pdb_file in sample.decoy_list:
                t =threading.Thread(target=em_stateless_thread, args=(q, self.evaluate_method, sample, pdb_file, redo))
                t.start()
            res_list=[]
            for t in sample.decoy_list:
                res_list.append(q.get(block=True))
            res=dict(res_list)
        else:
            for pdb_file in sample.decoy_list :
                res[pdb_file]=em.get_energy(sample=sample, decoy=pdb_file, method=em.name)
        return res

    def get_run_string(self,sample, output_dir,debug=False,**kwargs):
        # input, energy function, native pdb, decoys
        # shell script based
        # .epad .epmi
        res_decoy=[]
        for pdb_file in sample.decoy_list :
            res=self.evaluate_method().get_run_string(sample,pdb_file,**kwargs)
            res_decoy.append(res)
        output_file=output_dir+"/"+sample.sample_id+".res"
        if debug :
            print "function run_once(){ \n" + " \n ".join(res_decoy) + " \n } \n run_once |sort -n -k 5 > " + output_file
        if self.evaluate_method().name=="evaluate_dfire": # WARNING: Very unstable walk around.
            res="function run_once(){ \n" + " \n ".join(res_decoy) + " \n } \n run_once |sort -n -k2 > " + output_file
        else: #if self.evaluate_method().name=="evaluate_dfire":
            res="function run_once(){ \n" + " \n ".join(res_decoy) + " \n } \n run_once |sort -n -k 5 > " + output_file
        return res
        # The list of command return a list of results
        # since ,we have only 4 decoys
    # using callback
    # final result = run_background(eval_energy(), result_prcess)

    def modify_result_file(self,sample,result_file,mix_rate,energy_method):
        # read result_file
        # mix with dope
        # sort a gain
        # write to result_fileZydf2015
        all_lines=readlist(result_file)
        ee = energy_method()
        res = []
        for i in range(len(all_lines)) :
            # if native not appear, find the best tmscore one
            ss = re.split("\s+",all_lines[i])
            decoyfile = ss[0]
            e1 = float(ss[len(ss)-1]) # or 5 , depends on the energy result file
            #decoyfile=self.recover_fullpath(decoyfile,sample)
            e2 = ee.get_energy(sample=sample,decoy=decoyfile,method=ee.name)
            e3 = e2 * mix_rate + (1-mix_rate) * e1
            res.append([decoyfile, e3])
        write_result_file(result_file,res ,sort=True)
        # modify_result_file(result_file1, 0.5, EvaluateOpus) # the result will be mixture sorted energy file
class TMscore(Runnable):
    def __init__(self,name="TMscore",computer=ComputingHost(ncpu=64)):
        self.name=name
        self.executable="/home/zywang/bin/TMscore_Uni"
        self.computer=computer
        self.method_position=dict([ ("TMscore",0), ("MaxSub",1), ("GDT",2), ("GDT-HA",3)])
    def get_run_string(self,native,decoy,method="TMscore"):
        #tmscore_output=tempfile.mkstemp()[1]
        tmscore_output=os.path.basename(decoy)+".tmscore_output"
        #return "{0} {1} {2} {3} ; head -n1 {3} | cut -d' ' -f1 ; rm {3} ".format(self.executable,native,decoy,tmscore_output)
        return "{0} {1} {2} {3} ; head -n1 {3} | cut -d' ' -f{4} ; rm {3} ".\
            format(self.executable,native,decoy,tmscore_output,self.method_position[method]+1)
    def get_tmscore(self,native,decoy,method="TMscore",redo=False):
        if not (os.path.isfile(native) and os.path.isfile(decoy)) :
            print native," ",decoy," not exist!\n"
            raise -1
        method=method.lower()
        res=None
        c=None
        if db.db!=None :
            c=db.tmscore
            res=c.find_one({"native":native,"decoy":decoy})
        def check_out_of_date():
            # Add codes to test if native decoy are newer than the record.
            return False
        if res==None or redo==True or check_out_of_date():
            tmscore_output=os.path.basename(decoy)+".tmscore_output"
            cmd="{0} {1} {2} {3} ; head -n1 {3} ; rm {3} ".\
            format(self.executable,native,decoy,tmscore_output)
            res_val=[float(s) for s in re.split("\s+",self.computer.run_and_wait(cmd))[0:4] ]
            res_name=[s.lower() for s in ["TMscore","MaxSub","GDT","GDT-HA"]]
            res=dict(zip(res_name,res_val))
            res.update({"native":native,"decoy":decoy})
            if db.db!=None:
                c.insert(res)
                c.ensure_index([("native",db.pm.HASHED)], background=True  )
        return res[method]
    def get_tmscore_list(self,native,decoy_list,method="TMscore"):
        res=[]
        for i in decoy_list:
            res.append(self.get_tmscore(native,i,method=method))
        return res
    def _test_tmscore(self):
        res=self.get_tmscore("/home/zywang/work/data/rosetta_decoys_62proteins/natives/1a19.pdb",
                        "/home/zywang/work/data/rosetta_decoys_62proteins/natives/1a19.pdb",
                        "TMscore")
        print res
        res=self.get_tmscore("/home/zywang/work/data/rosetta_decoys_62proteins/natives/1a19.pdb",
                        "/home/zywang/work/data/rosetta_decoys_62proteins/low_score_decoys/"
                        "1a19A_BOINC_ABRELAX_SAVE_ALL_OUT_BARCODE-1a19A-frags83__1706_0.clean.out.13.pdb",
                        "TMscore")
        print res

class Protein(Sample):
    """Class of data samples"""
    def __init__(self,pdbid,feature_dir):
        super(Protein,self).__init__(pdbid,feature_dir)
        self.files=["SEQ/PSP/%s.psp","SEQ/Merge_cnf/%s.pretag","SEQ/TGT/%s.tgt","SEQ/EPAD/%s.epad","SEQ/INPUT_CNF/%s.hhr","SEQ/INPUT_CNF/%s.pretag","SEQ/INPUT_CNF/%s.horiz","SEQ/INPUT_CNF/%s.seq","SEQ/INPUT_CNF/%s.diso","SEQ/INPUT_CNF/%s.ss8","SEQ/INPUT_CNF/%s.ss2","SEQ/INPUT_CNF/%s.acc","SEQ/INPUT_CNF/%s.epad_prob","SEQ/INPUT_CNF/%s.newss","SEQ/INPUT_CNF/%s.psp","SEQ/INPUT_CNF/%s.ss","SEQ/INPUT_CNF/%s.hhm","SEQ/INPUT_CNF/%s.a3m","SEQ/INPUT_CNF/%s.fasta","SEQ/INPUT_CNF/%s.*","SEQ/INPUT_CNF/%s.a3m","SEQ/INPUT_CNF/%s.acc","SEQ/INPUT_CNF/%s.diso","SEQ/INPUT_CNF/%s.epad_prob","SEQ/INPUT_CNF/%s.fasta","SEQ/INPUT_CNF/%s.hhm","SEQ/INPUT_CNF/%s.hhr","SEQ/INPUT_CNF/%s.horiz","SEQ/INPUT_CNF/%s.newss","SEQ/INPUT_CNF/%s.pretag","SEQ/INPUT_CNF/%s.psp","SEQ/INPUT_CNF/%s.seq","SEQ/INPUT_CNF/%s.ss","SEQ/INPUT_CNF/%s.ss2","SEQ/INPUT_CNF/%s.ss3","SEQ/INPUT_CNF/%s.ss8","SEQ/INPUT_CNF/%s.tgt","SEQ/INPUT_CNF/%s.tgt","SEQ/INPUT_CNF/%s.ss3","SEQ/PSIPRED-SS/%s.ss","SEQ/PSIPRED-SS/%s.newss","SEQ/PSIPRED-SS/%s.ss2","SEQ/HMM/%s.hhm"]
        self.files=[i % self.sample_id for i in self.files ]

class Condor(ComputingHost):
    # old, do not use,  Run the actually command on specific machine
    def __init__(self,sample,runnable):
        self.hostname="login.osgconnect.net"
        self.username="lfzhao"
        self.connect_string="ssh %s@%s" % (self.username,self.hostname)
        #self.file_transfer_method
    def get_condor_submit(self):
        executable="%s.%s.condor.sh" % (runnable.name,sample.sample_id)
        script='''#!/bin/bash
        Universe = vanilla
        transfer_input_files = {0}
        transfer_output_files = {1}
        transfer_output_remaps = "{1}={1}.\$(Process)"
        Executable = {2}
        Error = job.error
        Output = job.output
        Log = job.log
        +ProjectName="ConnectTrain"
        Queue {3}'''.format (input_tar,output_tar,executable,2000)
        return script

    def cp_in_files(self,files, local_dir):
        files_str=" ".join(files)
        cmd=" tar cz -C %s/ %s | ssh %s@%s tar xz -C %s " % (local_dir, files, self.username,self.hostname,self.workdir) ;
        print cmd;
        
    def cp_out_files(self,output_file,local_dir):
        # output_file: a list of files to copy to local, the file contain a relative 
        # from self.work_dir
        output_file_str=" ".join(output_file)
        cmd="ssh %s@%s tar cz -C %s/ %s | tar xz -C %s " % (self.username,self.hostname,self.workdir,output_file_str, local_dir)
        print cmd
    def get_track_id(ss):
        # Example: 200 job(s) submitted to cluster 226237.
        line=ss.splitlines()[-1]
        track_id=int(float(line.split(" ")[-1]))
        return track_id

    def submit(self, runnable, sample):
        input_tar="%s.input.tgz" % sample.sample_id
        output_tar="%s.output.tgz" % sample.sample_id
        runcmd="#!/bin/bash\ntar xzf %s  ; mkdir Decoy_%s ; %s  ; tar czf %s Decoy_%s " % (input_tar, sample.sample_id, runnable.get_run_cmd(), output_tar, sample.sample_id)
        # Write needed scripts
        fout=open(sample.sample_id+".condor.sh","w")
        fout.write(runcmd)
        fout.close()
        fout=open(sample.sample_id+".condor","w")
        fout.write(get_condor_submit())
        fout.close()
        # get submit_id, or cluster id
        cmd="condor_submit $PDBID.condor | %s " % connect_string
        output=Popen(cmd,shell=True,stdout=PIPE).communicate()[0];
        track_id=self.get_track_id(output)
        return track_id
    def check(self,track_id):
        pass
#class Condor(Computer):
# TODO add check status 
    
# need some thing to
# 1. generate id for each task
# 2. check if task is finished successfully.

def test_evaluate_energy():
    a=EvaluateOpus() 
    print a.get_energy(sample="",decoy="/home/zywang/work/data/itasser_decoy_set/1vcc_/1vcc_-em_d10001.pdb",method="EvaluateOpus", redo=True) 
    a=EvaluateDfire() 
    print a.get_energy(sample="",decoy="/home/zywang/work/data/itasser_decoy_set/1vcc_/1vcc_-em_d10001.pdb",method="EvaluateDfire", redo=True)
    a=EvaluateRw()
    print a.get_energy(sample="",decoy="/home/zywang/work/data/itasser_decoy_set/1vcc_/1vcc_-em_d10001.pdb",method="EvaluateRw", redo=True) 
    db.pkg_config['epadlocal.workdir'] = '/home/zywang/work/allbio.re1/contrib/epad/EPAD'
    db.pkg_config['epadlocal.executable'] = '/home/zywang/work/allbio.re1/contrib/epad/EPAD/runEPAD_example.sh'
    a=EvaluateEpadLocal()
    sample=Sample("1vcc")
    sample.epad_feature_file = "/home/zywang/work/data/ros.epad/1vcc.pretag.ca"
    print a.get_energy(sample, decoy="/home/zywang/work/data/rosetta_decoys_62proteins/low_score_decoys/1vcc__BOINC_ABRELAX_SAVE_ALL_OUT_BARCODE-1vcc_-frags83__1706_0.clean.out.9.pdb", method="EpadLocal", redo=True)
    a=EvaluateEnergy()
    #print a.get_energy(sample

def test_evaluate_energy_for_all_decoys():
    __doc__ = "Mock a RunARank."
    db.pkg_config['epadlocal.workdir'] = '/home/zywang/work/allbio.re1/contrib/epad/EPAD'
    db.pkg_config['epadlocal.executable'] = '/home/zywang/work/allbio.re1/contrib/epad/EPAD/runEPAD_example.sh'
    sample=Sample("1vcc")
    sample.epad_feature_file = "/home/zywang/work/data/ros.epad/1vcc.pretag.ca"
    sample.decoy_list=[
        "/home/zywang/work/data/rosetta_decoys_62proteins/low_score_decoys/1vcc__BOINC_ABRELAX_SAVE_ALL_OUT_BARCODE-1vcc_-frags83__1706_0.clean.out.9.pdb",
        "/home/zywang/work/data/rosetta_decoys_62proteins/low_score_decoys/1vcc__BOINC_ABRELAX_SAVE_ALL_OUT_BARCODE-1vcc_-frags83__1706_0.clean.out.10.pdb"
        ]
    r=RunARank(evaluate_method=EvaluateEpadLocal)
    print r.evaluate_energy_for_all_decoys(sample,redo=True)
    
    
def test_modify_result_file():
    a=RunARank()
    a.modify_result_file("/home/zywang/work/epmi/test_rank_itasser/rank.epmi/1hbkA.test.res",0,EvaluateOpus)
def main():
    # Folder structure of raw data
    # model is encoded in the parameter of a running program
    #
    # workdir: project_dir / exprdir: experiment_name{train|test}_method_dataset / progdir: program(testmethod, parameter)/ sample/files for this sample
    # Result after analysis:
    casp10list=readlist("/home/zywang/work/casp10tplFull/casp10off.list")
    res=[]
    for i in casp10list :
        print "Process %s" % i
        protein=Protein(i, "/home/zywang/work/casp10tplFull/other")
        protein.native_pdb="/home/zywang/work/casp10pdb/%s.pdb" % i
        test_epmi=TestProteinSamplerCasp10("compare-epmi-epad",
                    ProteinSampler(),protein,
                    Condor("lfzhao","login.osgconnect.net"),
                    workdir="/home/zywang/work/epmi/",
                    exprdir="test_sample_casp10",
                    progdir=["cnfsampling.epmi","cnfsampling.epad"]
                    )

        # test_epmi.run()
        res.append(test_epmi.analysis())
    #AnalysisList(res)
                   
if __name__ == '__main__':
    #main()
    #check_bin_prob("/home/zywang/work/epmi/test_rank_casp5-8/rank.epad/T0137.epad.prob","/home/zywang/work/epmi/test_rank_casp5-8/rank.epmi/epmi-model-regen-norm-par-390/T0137.epad.prob.reb")
    #test_evaluate_energy()
    test_evaluate_energy_for_all_decoys()
    #test_modify_result_file()
