function compute_pnn1(){
tgtfile=$1
pdbid=$2
ln -s /home/zywang/work/sdcp/src/Pretag_To_EPAD/config ./
ln -s /home/zywang/work/sdcp/src/Pretag_To_EPAD/bin ./
/home/zywang/work/sdcp/src/Pretag_To_EPAD/TGT_To_Pretag -i $tgtfile -o `pwd`/$pdbid.pretag.ca.0 -s 1 -m 1 -H 1
( echo 1 ; cat $pdbid.pretag.ca.0 | awk '{if(NF==44){if($4>1.5){$4=$4-1}};print $0}' )  > $pdbid.pnn1

rm $pdbid.pretag.ca.0
}

function checkret(){
   if [[ $1 -ne 0 ]] ; then
       echo $2
       exit $1
   fi
}

function config_epmi(){
error_file_io="Writing or reading files error!"
error_buildfeature="Build feature failed!"
error_epad="";
error_getfeature="";
error_rrr="fasta2hdf5 error";
epadmi_path=/lustre/beagle/zywang/work/work1/epadmi/bin
epadmi_path=/home/zywang/work//epmi/bin
PATH=$PATH:/home/zywang/work/dpln/src/pnn1v2/:/home/zywang/work/dpln/src/bioh5/:/home/zywang/work/sdcp/bin/:/home/zywang/work/dpln/bin/:$epadmi_path

LD_LIBRARY_PATH=/soft/gsl/gnu/1.14/lib:$HOME/work/BALL-1.2/lib/Linux-x86_64-g++_4.1.2/:/opt/gcc/4.8.1/snos/lib64
LD_LIBRARY_PATH=/soft/gsl/gnu/1.14/lib:/home/zywang/work/sdcp/src/BALL-1.2/lib/Linux-x86_64-g++_4.1.2/:/opt/gcc/4.8.1/snos/lib64:/share/apps/gcc/4.7.3/lib64

}


function recompute_nnpffeature(){
    pdb=$1
# do we need to regenerate the pair_frequency? yes. previous one has some tiny problem to make it hard to invert.
    /home/zywang/work/dpln/src/feature_util/build/fasta2hdf5 -act pairfreq -seq $seqfile -fasta $fastafile -h5 $pdb.h5 
    checkret $? "fasta2hdf5 error on $pdb!"
# compute the di and save the pair_window_feature, use -save_di [h5 file ] to save direct information to /Data/direct_information
# need pnn1 file to regenerate data( filename derived from pdbid).
    # .pnn1 is no need for pdb25, since there is pnn1/ in the folder, and with -h, the program will read pnn1 from pnn1/ folder automatically.
    compute_pnn1 $tgtfile $pdb
    checkret $? "get_pnn1inf_feature.pl error!"
    mkdir -p pnn1
    cp $pdb.pnn1  pnn1
    echo "h5/$pdb.h5" > $pdb.h5list
    /home/zywang/work/dpln/src/pnn1v2/build/Nnpftrain.nompi -h $pdb.h5list -m ./model  -s 13 -r 0.1 -nn 100,20 -sr 1 -op 0 -dn 1580 -h5dir h5/ -maxiter 1 -iter0 1 -regen only -save_di h5/$pdb.di-1.h5 -i $pdb.pnn1

}



function config_test_rank_itasser(){
seqpath=$HOME/work/data/itasser_seq/
seqsuffix=.fasta
a3mpath=$HOME/work/data/itasser_tgt
tgtpath=$HOME/work/data/itasser_tgt
testlist=$HOME/work/data/itasser.list
}

function config_test_rank_casp5-8(){
seqpath=$HOME/work/data/casp5-8/pdb_seq/
seqsuffix=.seq
a3mpath=$HOME/work/data/casp5-8/tgt/
tgtpath=$HOME/work/data/casp5-8/tgt/
testlist=$HOME/work/data/casp5-8/casp5-8.list
}

function config_test_rank_rosetta(){
seqpath=$HOME/work/data/rosetta_fasta
seqsuffix=.fasta
a3mpath=$HOME/work/data/rosetta_tgt/
tgtpath=$HOME/work/data/rosetta_tgt/
testlist=$HOME/work/data/rosetta_first_pdbid4_52.list
}
function config_test_sample_casp10(){
a3mpath=$HOME/work/casp10a3mFull/
tgtpath=$HOME/work/casp10tplFull/
seqfile=$HOME/work/casp10tplFull/
testlist=$HOME/work/casp10tplFull/casp10off.list
}


function epmi_predict(){
# Run with given pdb id and model file
config_epmi

pdb=$1
shift
a3mfile=$a3mpath/$pdb.a3m
tgtfile=$tgtpath/$pdb.tgt
modelfile=($@)
#pdb=`basename $tgtfile | cut -d'.' -f1`
fastafile=`echo $a3mfile|replace '.a3m' '.fasta' '.a2m' '.fasta'`
seqfile=$seqpath/$pdb$seqsuffix
echo $pdb

if [ ! -e $fastafile ] ; then 
work/data/rosetta_fireformat.pl -r -l 3000 -noss $a3mfile $fastafile
fi


#generate feature file for pnn1inf
#get_pnn1inf_feature.pl -tgt $tgtfile -out $pdb.pnn1 -pdbid $pdb -lib /home/zywang/work/pdbtools
#compute_pnn1 $tgtfile $pdb
#if [ $? -ne 0 ] ;then echo $error_rrr ; exit -1 ;fi

recompute_nnpffeature $pdb

##run pnn1inf to produce epad.prob.
#echo $pdb.h5 > $pdb.h5list
for i in ${!modelfile[@]} ; do

    model=${modelfile[$i]}
    nnlayer=`head -n1 $model|grep -o '\-nn [0-9,]*'|replace '\-nn ' ''`
    nnparam_dn=`head -n1 $model|grep -o '\-dn [0-9,]*'|replace '\-dn ' ''`
    
    params="-i $pdb.pnn1 -h $pdb.h5list -loadmodel $model  -dn ${nnparam_dn} -nn ${nnlayer} -norm_par /home/zywang/work/epmi/model/subsampling_normpar.h5  -h5dir ./h5/  -predict 1 -s 13"
    echo /home/zywang/work/allbio.re1/pnn1v2/build/Nnpfpredict $params
    /home/zywang/work/allbio.re1/pnn1v2/build/Nnpfpredict $params
    if [ ${#modelfile[@]} -ge 2 ] ; then
	mv ${pdb}.epad.prob ${pdb}.epad.prob.model-$i
    fi
    rm core.*
done
}

function combine_epad_prob {
pdb=$1
python ${instdir}/epmi/bin/combine_epad_prob.py ${pdb}.epad.prob ${pdb}.epad.prob.model-0 ${pdb}.epad.prob.model-1

}

# 
if [[ ! -e ${instdir}/epmi/bin/combine_epad_prob.py ]] ; then
    echo "Not found ${instdir}/epmi/bin/combine_epad_prob.py"
    exit 1
fi

# Make sure $# > 0
if [[ $# -ge 2 ]] ; then 
    config_test_rank_itasser
    #config_test_rank_casp5-8
    #config_test_rank_rosetta
    epmi_predict $@
fi  
