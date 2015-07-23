    README of OpenScienceGrid, ProteinFolder and Clustering

1. Run ProteinFolder only requires 1 command.

    cd {ProteinFolderInstallDir}
    ./bin/ProteinFolder -f ./DATA/proteinFolderCNFo2.conf -a REMC " \
                 "-A ./SEQ/EPAD/{EPadFILE}  -o {output_dir} {PDBID}

2. Run ProteinFolder on OpenScienceGrid (OSG) nodes.

    One need such a shell script to run a program on OSG.
        * {input_tar} is a tar file required by the program to run on remote node.
        * {output_tar} is a tar file copied back from a remote node.
        * {executable} is the program to run on a remote node.
        * {num_proc} is the number of nodes used to run a program in parallel.

    #!/bin/bash
    Universe = vanilla
    transfer_input_files = {input_tar}
    transfer_output_files = {output_tar}
    transfer_output_remaps = "{output_tar}={output_tar}.\$(Process)"
    Executable = {executable}
    Error = {executable}.error
    Output = {executable}.output
    Log = {executable}.log
    +ProjectName="ProtFolding"
    Queue {num_proc}

3. Clustering

    After ProteinFolder successfully finishes, there will be many tar files contains
    decoys produced by ProteinFolder. Use the following command to get the clustering
    results of the decoys.

    cd clustering/
    ls {decoy_files} > List/{pdbid}all.lst
    ./cluster_step1.sh {pdbid} GDT

    The result will be at g_{pdb_id}_cluster5.log.
