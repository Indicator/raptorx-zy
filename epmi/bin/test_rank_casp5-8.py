#!/home/zywang/Enthought/Canopy_64bit/User/bin/python

import glob
import itertools

from ProteinUtil import *
import test_rank_rosetta as Rr
import zydb


__author__ = 'Zhiyong Wang, zywang@ttic.edu'



def run_and_analysis(**kwargs):
    pass
def split_sample_list(sample_list,protein_prof,**kwargs):
    sub_sample_list=list()
    for s in sample_list:
        bb=True
        for cc in kwargs:
            if protein_prof[s.sample_id][cc]>kwargs[cc]:
                #bb= (bb and False)
                bb= (bb and False)
        if not bb:
            sub_sample_list.append(s)
    return sub_sample_list
def main(test_list_file="/home/zywang/work/epmi/test_rank_casp5-8/rank.epmi/test.list",**kwargs):
    # Folder structure of raw data
    # model is encoded in the parameter of a running program
    #
    # workdir: project_dir / exprdir: experiment_name{train|test}_method_dataset / progdir: program(testmethod, parameter)/ sample/files for this sample
    # Result after analysis:
    #
    res=[]
    #for i in pdbid_list :
    #    print "Process %s" % i
    #    protein=Sample(i, "/home/zywang/work/data/rosetta_tgt")

    test_list=test_list_file
    sample_list=[ Sample(s) for s in readlist(test_list) ]

    for s in sample_list:
        s.decoy_list=glob.glob("/home/zywang/work/data/casp5-8/%s/*.cut" % s.sample_id  )
                    #glob.glob("/home/zywang/work/data/casp5-8/pdbs/%s.pdb" % s.sample_id)
        s.fasta_file="/home/zywang/work/data/casp5-8/pdb_seq/%s.seq"  % s.sample_id
        s.native_pdb_file="/home/zywang/work/data/casp5-8/pdbs/%s.pdb" % s.sample_id
        s.decoy_list.append(s.native_pdb_file)

        # test_epmi.run()
        ## Run energy evaluation for epad
    #for (distcut, seqcut, rebalance_factor) in itertools.product([60],[6,12],[-1, 1,4,10] ):
    #for (distcut, seqcut, rebalance_factor) in itertools.product([9999],[6],[ 10] ):
    #for (distcut, seqcut, rebalance_factor) in itertools.product([9999],[6],[ 20] ):
    #for (distcut, seqcut, rebalance_factor) in itertools.product([9999],[12],[ 10] ):
    #for (distcut, seqcut, rebalance_factor) in itertools.product([9999],[6],[ 100] ):

    # define experiment, overload a book 
    for (distcut, seqcut, rebalance_factor,mix_rate, balance_method,pe_mix_rate) in \
            itertools.product([9999],[6],[1 ],[0.8],["by_length"],[0.02,0.05]):
        # main flow, keep the function ran as their order of definition.
        print "(distcut, seqcut, rebalance_factor,mix_rate, balance_method,pe_mix_rate)"
        print (distcut, seqcut, rebalance_factor,mix_rate, balance_method,pe_mix_rate)
        test_epmi=Rr.RankRosetta("compare-rank-epmi-epad",
            RunARank(evaluate_method=EvaluateEnergy),sample_list,
            ComputingHost(ncpu=32),
            #LocalCruncher(),
            workdir="/home/zywang/work/epmi/",
            exprdir="test_rank_casp5-8",
            progdir=["rank.epmi","rank.epad"],
            db=zydb.db,
            prof_file="/home/zywang/work/data/casp5-8/casp5-8.prof",
            pairwise_energy_mix_rate=pe_mix_rate
            )
        test_epmi.run_rebalance(rebalance_factor=rebalance_factor,mix_rate=mix_rate,parallel=True,ncpu=32,balance_method=balance_method)
        #test_epmi.run_epad()
        test_epmi.run_epmi(rebalance_factor,distcut,seqcut,debug=False)
        #test_epmi.run_split_list(rebalance_factor,distcut,seqcut,neff_cut=[0,20],length_cut=[100,150])
        #test_epmi.run_split_list(rebalance_factor,distcut,seqcut,neff_cut=[0,20],length_cut=[150,200])
        #test_epmi.run_split_list(rebalance_factor,distcut,seqcut,neff_cut=[0,20],length_cut=[200,300])
        #test_epmi.run_split_list(rebalance_factor,distcut,seqcut,neff_cut=[0,8] )
        #test_epmi.run_split_list(rebalance_factor,distcut,seqcut,neff_cut=[8,20])
        test_epmi.run_split_list(rebalance_factor,distcut,seqcut,neff_cut=[0,20])
        #exit(0)

if __name__ == '__main__':
    import sys

    a=sys.argv
    #print zip(sys.argv[1::2], sys.argv[2::2])
    #cProfile.run('main(**( dict(zip(sys.argv[1::2], sys.argv[2::2]))))')
    main(**( dict(zip(sys.argv[1::2], sys.argv[2::2]))))


