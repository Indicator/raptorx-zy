from epmi_cont import *

class EpmiContSample(EpmiCont):
    def config(self):
        # This config can be override to implement a new config.
        self.computer = ComputingHost()
        self.instdir = "/home/zywang/work/allbio.re1/"
        self.working_dir = "/home/zywang/work/epmi/data"
        self.model_output = self.instdir
        self.analysis_output = self.instdir
        self.get_tgtfile = lambda s: "{instdir}/epmi/test/{sample_id}.tgt".format(instdir=self.instdir,sample_id=s)
        self.get_fastafile = lambda s: "{instdir}/epmi/test/{sample_id}.fasta".format(instdir=self.instdir,sample_id=s)
        self.get_a3mfile = lambda s: "{instdir}/epmi/test/{sample_id}.a3m".format(instdir=self.instdir,sample_id=s)
        self.get_seqfile = lambda s: "{instdir}/epmi/test/{sample_id}.seq".format(instdir=self.instdir,sample_id=s)
        self.reformat = "{instdir}/epmi/bin/reformat.pl".format(instdir = self.instdir)
        self.get_pnn1inf_feature = "{instdir}/epmi/bin/get_pnn1inf_feature.pl".format(instdir = self.instdir)
        self.fasta2hdf5 = "{instdir}/feature_util/fasta2hdf5".format(instdir = self.instdir)
        self.add_pair_position_feature = "{instdir}/feature_util/add_pair_position_feature".format(instdir = self.instdir)

        ## [TESTING CONFIG] DO NOT REMOVE THIS LINE
        self.model='{instdir}/epmi/data/model-100-40-r0.1-withss-pre-120'.format(instdir=self.instdir)
        self.nnpfpredict='{instdir}/pnn1v2/Nnpfpredict'.format(instdir=self.instdir)
        self.testing_output_dir='{working_dir}/testing/'.format(working_dir=self.working_dir)
            
        ## [TRAINING CONFIG] DO NOT REMOVE THIS LINE
        self.model_prefix='{instdir}/epmi/data/model-test-config-'.format(instdir=self.instdir)
        self.nnpftrain='{instdir}/pnn1v2/Nnpftrain'.format(instdir=self.instdir)
        self.norm_par='{instdir}/epmi/data/subsampling_normpar.h5'.format(instdir=self.instdir)
        self.training_h5list = '{instdir}/epmi/test/test-training.h5list'.format(instdir=self.instdir)
        self.subsampling_rate = 1
        self.max_iter = 100
        self.training_computer = Beagle()


# This config is used to test a full chain.        
class EpmiContConfigTest(EpmiCont):
    def config(self):
        # This config can be override to implement a new config.
        # We assume data is ready on the computers.
        # genfeature, testing is on cruncher. training is on beagle.
        self.computer = LocalCruncher(ncpu=2)
        self.instdir = "/home/zywang/work/allbio.re1/"
        prefix = "/home/zywang/work/"
        self.working_dir = prefix + "/data"
        self.model_output = prefix + "/allbio-epmi-chain/model"
        self.analysis_output = prefix + "/allbio-epmi-chain/result"
        data_prefix = "/home/zywang/work/data/"
        self.get_tgtfile = lambda s: data_prefix + "/pdb25tgt/{sample_id}.tgt".format(instdir=self.instdir,sample_id=s)
        # see pdb25moremi  for a2m.
        self.get_fastafile = lambda s: data_prefix + "/pdb25fasta/{sample_id}.fasta".format(sample_id=s)
        self.get_a3mfile = lambda s: data_prefix + "/pdb25fasta/{sample_id}.a3m".format(sample_id=s)
        self.get_seqfile = lambda s: data_prefix + "/pdb25seq/{sample_id}.seq".format(sample_id=s)
        self.get_h5file = lambda s: data_prefix + "/pdb25h5/{sample_id}.h5".format(sample_id=s)
        self.reformat = "{instdir}/epmi/bin/reformat.pl".format(instdir = self.instdir)
        self.get_pnn1inf_feature = "{instdir}/epmi/bin/get_pnn1inf_feature.pl".format(instdir = self.instdir)
       
        self.fasta2hdf5 = "{instdir}/feature_util/fasta2hdf5".format(instdir = self.instdir)
        self.add_pair_position_feature = "{instdir}/feature_util/build/add_pair_feature_to_bioh5".format(instdir = self.instdir)
        self.remote_training_data_dir = "login.beagle.ci.uchicago.edu:work1/data/"
        self.dopematrix = "{instdir}/epmi/data/dope-back.par_from_FengZhao".format(instdir=self.instdir)
        self.sample_list_weight = "{instdir}/epmi/data/sample_list_weight".format(instdir=self.instdir)
        # TODO
        self.post_genfeature_cmd = "scp {sample_list_weight} {remote_training_data_dir}".format(sample_list_weight = self.sample_list_weight, remote_training_data_dir = self.remote_training_data_dir);
        self.max_length_for_training = 300
        ## [TESTING CONFIG] DO NOT REMOVE THIS LINE
        self.model='{instdir}/epmi/data/model-100-40-r0.1-withss-pre-120'.format(instdir=self.instdir)
        self.nnpfpredict='{instdir}/pnn1v2/Nnpfpredict'.format(instdir=self.instdir)
        self.testing_output_dir='{working_dir}/testing/'.format(working_dir=self.working_dir)

        ## [TRAINING CONFIG] DO NOT REMOVE THIS LINE
        # Fix the path on beagle.
        # Compute the training list from generate feature. Do the balance.
        
        self.training_instdir="/lustre/beagle2/zywang/work/allbio.re1/"
        self.training_data_dir="/lustre/beagle2/zywang/work/allbio.re1/data/"
        self.training_list_weight="{instdir}/training_list_weight.txt".format(instdir=self.instdir)
        self.remote_training_list_weight="{training_instdir}/train_list_weight.txt".format(training_instdir= self.training_instdir)
        self.prepare_training_computer = \
             "mkdir -p {training_instdir} && " + \
             "{training_instdir}/epmi/bin/bala.pl {remote_training_list_weight} > {training_instdir}/train_list_balance.txt".format(training_instdir = self.training_instdir, remote_training_list_weight=self.remote_training_list_weight)

        self.model_prefix='{training_instdir}/epmi/data/model-test-config-'.format(training_instdir=self.training_instdir)
        self.nnpftrain='{training_instdir}/pnn1v2/build/Nnpftrain'.format(training_instdir=self.training_instdir)
        self.nnpftrain_nompi='{instdir}/pnn1v2/build/Nnpftrain.nompi'.format(instdir=self.instdir)
        
        self.norm_par='{training_instdir}/epmi/data/subsampling_normpar.h5'.format(training_instdir=self.training_instdir)
        self.training_h5list = '{training_instdir}/epmi/data/train_list_balance.txt'.format(training_instdir=self.training_instdir)
        self.subsampling_rate = 1
        self.max_iter = 10
        self.training_computer = ComputingHost.getComputer("BeagleDevelopment")
# Done. TODO: check subsample_normal.h5 and pair_window_feature in h5files.        
# Make a list of h5 file with pair_window_feature, try the training againg.
def main(**kwargs):
    chain = EpmiContConfigTest("/home/zywang/work/data/pdb25.list")
    #chain = EpmiContConfigTest("/home/zywang/work/data/pdb25.test.short.list")
    #chain.gen_sample_list_weight(chain.sample_list_file, chain.sample_list_weight)
    #chain.genfeature()
    #chain.training(dryrun=True)
if __name__ == '__main__':
    main(**( dict(zip(sys.argv[1::2], sys.argv[2::2]))))

# if training is working, then try more data, check the feature and model generated

# Feature checking: manually, and feature length
# normalization factor?
# Tune analysis part.
# copy generated pnn1 to pnn1 folder.
# make h5 dir right.


# Make sure each time the experiment is run in a separate folder.
