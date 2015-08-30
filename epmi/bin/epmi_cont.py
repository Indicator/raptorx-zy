import logging 
import sys
from ProteinUtil import *
from SimpleParallel import *

__author__ = 'zywang'

# A continous training, test, reporting system
# Input: a list of
# Output: a EPAD file for the given sequence.
# TODO: How it compare or compatible with Zipline? First make it roll out.

FORMAT = '%(message)s'
logging.basicConfig(format=FORMAT)
logger = logging.getLogger("EpmiCont")
class EpmiCont(Runnable):
    def __init__(self, sample_list_file):
        # TODO, add a dir creator and file names builder here.
        self.sample_list_file = sample_list_file
        self.config()
        self.check_config()
    def check_config(self):
        # The folowwing variables are required.
        logger.error("Checking Epmi config")
        #print self.__dict__['instdir']
        
    def config(self):
        # Implement this config in subclass.
        pass
    def gen_sample_list_weight(self, sample_list_file, sample_list_weight):
        assert(sample_list_file != "");
        sample_list = readlist(sample_list_file)
        sample_list_weight_buffer = "";
        for sample_id in sample_list:
            seqfile = self.get_seqfile(sample_id) # sequence file
            weight = len(readlist(self.get_seqfile(sample_id))[0])
            if weight< self.max_length_for_training:
                sample_list_weight_buffer =  sample_list_weight_buffer +\
                                             "%s %d\n" % (sample_id,weight)

        with open(sample_list_weight, "w") as output_file:
            output_file.write(sample_list_weight_buffer)
        
    def genfeature(self, sample_list_file = "", dryrun=False):
        # run part of run-epadmi-general.sh multiple times using SimpleParallel.
        if(sample_list_file == ""):
            sample_list_file = self.sample_list_file
        sample_list = readlist(sample_list_file)
        cmd_list=[]
        # TODO get_list_weight_file(sample_list, get

        self.gen_sample_list_weight(self.sample_list_file, self.sample_list_weight)
        for sample_id in sample_list:
            tgtfile = self.get_tgtfile(sample_id)
            fastafile =  self.get_fastafile(sample_id) # the multi sequence alignment
            seqfile = self.get_seqfile(sample_id) # sequence file

            cmd = "{reformat} -r -l 3000 -noss {a3mfile} {fastafile} && " + \
            "{fasta2hdf5} -act pairfreq -fasta {fastafile} -h5 {h5file} && "+\
            "{add_pair_position_feature} -dopematrix {dopematrix} -seq {seqfile} -fasta {fastafile} -h5 {h5file} && "+\
            "{get_pnn1inf_feature} -tgt {tgtfile} -out {sample_id}.pnn1 -pdbid {sample_id} -lib {instdir}/pdbtools && mkdir -p ./pnn1/ && cp {sample_id}.pnn1 ./pnn1/" +\
            "echo {h5file} > {sample_id}.h5list && {nnpftrain_nompi}  -h {sample_id}.h5list -m ./model  -s 13 -r 0.1 -nn 100,20 -sr 1 -op 0 -ft1 1 -dn 1580  -maxiter 1 -iter0 1  -regen only  -h5dir h5/ && "+\
            "scp {h5file} {remote_training_data_dir}\n"
            # /home/zywang/work/dpln/src/pnn1v2/build/Nnpftrain.nompi -h $pdb.h5list -m ./model  -s 13 -r 0.1 -nn 100,20 -sr 1 -op 0 -ft1 1 -dn 1580  -maxiter 1 -iter0 1  -regen only -save_di h5/$pdb.di-1.h5  -h5dir h5/
            # Try generating pair_window_feature, and remote training at the same time.
            cmd = cmd.format(reformat = self.reformat, fasta2hdf5 = self.fasta2hdf5,
                             get_pnn1inf_feature = self.get_pnn1inf_feature,
                             add_pair_position_feature = self.add_pair_position_feature,
                             dopematrix = self.dopematrix,
                             tgtfile = self.get_tgtfile(sample_id),
                             a3mfile = self.get_a3mfile(sample_id),
                             fastafile = self.get_fastafile(sample_id),
                             seqfile = self.get_seqfile(sample_id),
                             sample_id = sample_id, instdir = self.instdir,
                             h5file = self.get_h5file(sample_id),
                             remote_training_data_dir= self.remote_training_data_dir,
                             nnpftrain_nompi = self.nnpftrain_nompi)
            cmd_list.append(cmd)
        self.computer.runbatch_and_wait(cmd_list,dryrun=dryrun,ncpu=1)
        self.computer.sshrun(self.post_genfeature_cmd)
        #self.computer.runbatch_and_wait(["aaa"],dryrun=dryrun)
    def training(self, dryrun=False): # Assume epmi_cont is well configured.

        self.training_computer.sshrun(self.prepare_training_computer)
        #TODO cmd_copy_list = "scp {genfeature_list} {training_list}".format(genfeature_list=self.
        # call NNpf training with list
        # run on cruncher queue or beagle queue.
        cmd = "{nnpftrain} -h {training_h5list} -m {model_prefix}  -s 13 -r 0.1 -nn 100,80,60,40 -sr {subsampling_rate} -op 0 -dn 1575 -maxiter {max_iter} -iter0 0 -norm_par {norm_par}"
        cmd = cmd.format(nnpftrain=self.nnpftrain,
                   model_prefix=self.model_prefix,
                   subsampling_rate=self.subsampling_rate,
                   max_iter=self.max_iter,
                   norm_par=self.norm_par,
                   training_h5list=self.training_h5list)
        self.training_computer.qsub_and_wait(cmd, dryrun=dryrun)
        # Output sample file name format: model-test-config--9
        
        # Do we need a FP paradim and return model?
        # The training will return only after finish.
        
    def testing(self, sample_list_file = ""):
        # run part of run-epadmi-general.sh multiple times using SimpleParallel.
        if(sample_list_file == ""):
            sample_list_file = self.sample_list_file
        sample_list = readlist(sample_list_file)
        for sample_id in sample_list:
            cmd = 'echo {pdb}.h5 > {pdb}.h5list && ' + \
            '{nnpfpredict} -i {pdb}.pnn1 -h null -test_list {pdb}.h5list -loadmodel {model}  -s 13 -r 0 -nn 100,40 -sr 0.6 -ft1 1 -dn 1580'
            cmd=cmd.format(nnpfpredict=self.nnpfpredict, model=self.model, pdb=sample_id)
            print cmd
        #run on cruncher queue or beagle queue.
        print self.computer.run(cmd,dryrun=True)
        
        # run-epadmi-general.sh

    def start_cont():
        # Do we need an overview web to show all tasks?
        while True:
            self.genfeature(self.sample_list_file)
            self.training(self.sample_list_file, self.model_output)
            self.testing(self.sample_list_file,self.model_output)
            self.analysis(self.model_output, self.analysis_output)

    # Input: given model name, test list,
    # Output: a human readable/computer parsable report.
    
    # Run all analysis, return reports for each analysis.
    # Which program will check if the model can be used by prediction?
    # 
    def analysis(self, model, data_set):
        self.testing(model, sample_list_file)
        
        # Sampling command line: ./epmi/test_sample_casp10/run-freemodel-epmi.sh
        report = null
        # 
        return report
        # import test_rosetta and call the function.
        

def test(**kwargs):
    a = EpmiCont("/home/zywang/work/allbio.re1/epmi/test/test.list")
    #a.genfeature()
    #a.training()
    #a.testing()
def main(**kwargs):
    test(**kwargs)
    #a = EpmiCont(**kwargs)

if __name__ == '__main__':
    main(**( dict(zip(sys.argv[1::2], sys.argv[2::2]))))
