#!/bin/bash

function checkret {
   if [[ $1 -ne 0 ]] ; then 
       echo $2
       exit $1
   fi
}

function run_epmi {
instdir="/home/zywang/work/allbio/"
LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/soft/gsl/gnu/1.14/lib:/home/zywang/work/sdcp/src/BALL-1.2/lib/Linux-x86_64-g++_4.1.2/:/opt/gcc/4.8.1/snos/lib64:/share/apps/gcc/4.7.3/lib64:$instdir/contrib/BALL/lib:$instdir/contrib/hdf5/lib

a3mfile=$1
tgtfile=$2
seqfile=$3
#Please change it to your installation directory
fasta2hdf5="$instdir/feature_util/fasta2hdf5"
reformat="$instdir/epmi/bin/reformat.pl"
get_pnn1inf_feature="$instdir/epmi/bin/get_pnn1inf_feature.pl"
nnpfpredict="$instdir/pnn1v2/Nnpfpredict"
if [ $# < 3 ] ; then 
echo "run-epadmi-general.sh [a3mfile] [tgt file] [sequence file]"
exit -1
fi

pdb=`basename $tgtfile | cut -d'.' -f1`
fastafile=`echo $a3mfile|replace '.a3m' '.fasta' '.a2m' '.fasta'`

$reformat -r -l 3000 -noss $a3mfile $fastafile
checkret $? "reformat.pl error!"

$fasta2hdf5 -act pairfreq -fasta $fastafile -h5 $pdb.h5
checkret $? "fasta2hdf5 error!"

#generate feature file for pnn1inf
$get_pnn1inf_feature -tgt $tgtfile -out $pdb.pnn1 -pdbid $pdb -lib $instdir/pdbtools
checkret $? "get_pnn1inf_feature.pl error!"
#run pnn1inf to produce epad.prob.

echo $pdb.h5 > $pdb.h5list
model=$instdir/epmi/data/model-100-40-r0.1-withss-pre-120
params="-i $pdb.pnn1 -h $pdb.h5list -loadmodel $model  -s 13 -r 0 -nn 100,40 -sr 0.6 -ft1 1 -dn 1580 "
$nnpfpredict $params
checkret $? "Nnpfpredict error!"
}

run_epmi $@
