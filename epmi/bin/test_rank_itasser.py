import glob
import itertools

from ProteinUtil import *
import test_rank_rosetta as Rr
import random

__author__ = 'zywang@ttic.edu'

def run_and_analysis(**kwargs):
    pass

def main(test_list_file="/home/zywang/work/data/itasser.list",**kwargs):
    # Folder structure of raw data
    # model is encoded in the parameter of a running program
    #
    # workdir: project_dir / exprdir: experiment_name{train|test}_method_dataset / progdir: program(testmethod, parameter)/ sample/files for this sample
    test_list=test_list_file
    def init_sample_list(run_subset_decoy=-1):
        sample_list=[ Sample(s) for s in readlist(test_list) ]
        for s in sample_list:
            s.decoy_list=glob.glob("/home/zywang/work/data/itasser_decoy_set/%s/%s-em*.pdb" % (s.sample_id,s.sample_id))
            if run_subset_decoy > 0:
                s.decoy_list=random.sample(s.decoy_list,run_subset_decoy)
            s.fasta_file="/home/zywang/work/data/itasser_seq/%s.fasta" % s.sample_id
            s.native_pdb_file="/home/zywang/work/data/itasser_decoy_set/%s/%s.pdb" % (s.sample_id,s.sample_id)
            s.decoy_list.append(s.native_pdb_file)
        return sample_list



    import zydb
    # Write down all the parameters of runarank to the document.
    db.pkg_config['epadlocal.workdir'] = '/home/zywang/work/allbio.re1/contrib/epad/EPAD'
    db.pkg_config['epadlocal.executable'] = '/home/zywang/work/allbio.re1/contrib/epad/EPAD/runEPAD_example.sh'

    for (distcut, seqcut, rebalance_factor,mix_rate, balance_method,subset_decoy,pe_mix_rate) in \
        itertools.product([9999],[6],[1],[0.8],['by_length'],[-1],[0]) :
        print "(distcut, seqcut, rebalance_factor,mix_rate, balance_method,subset_decoy,pe_mix_rate)"
        print (distcut, seqcut, rebalance_factor,mix_rate, balance_method,subset_decoy,pe_mix_rate)
        sample_list=init_sample_list(run_subset_decoy=subset_decoy)
        test_epmi=Rr.RankRosetta("compare-rank-epmi-epad",
            RunARank(evaluate_method=EvaluateOpus),sample_list,
            #LocalCruncher(),
            ComputingHost(ncpu=32),
            workdir="/home/zywang/work/epmi/",
            exprdir="test_rank_itasser",
            progdir=["rank.epmi","rank.epad"],
            db=zydb.db,
            prof_file="/home/zywang/work/data/itasser.prof",
            pairwise_energy_mix_rate=pe_mix_rate
            )
        test_epmi.run_rebalance(rebalance_factor=rebalance_factor,mix_rate=mix_rate,parallel=True,ncpu=32,balance_method=balance_method)
        test_epmi.run_epmi(rebalance_factor,distcut,seqcut)
        test_epmi.run_split_list(rebalance_factor,distcut,seqcut,neff_cut=[0,20],length_cut=[0,9999])

if __name__ == '__main__':
    #    main()
    import sys
    #import cProfile
    a=sys.argv
    #cProfile.run('main(**( dict(zip(sys.argv[1::2], sys.argv[2::2]))))')
    # s
    main(**( dict(zip(sys.argv[1::2], sys.argv[2::2]))))




