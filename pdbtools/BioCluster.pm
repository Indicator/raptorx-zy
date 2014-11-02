
#!/usr/bin/perl -w
package BioCluster;
use File::Basename;
$HOME='/home/zywang/work/pdbtools/';
require "$HOME/BioAlign.pm";
#!!!! CAREFUL OF HEADER, HEADER_BEAGLE
#depricated, since too slow in replacing.
my $py=<<END;
from modeller import *              # Load standard Modeller classes
from modeller.automodel import *    # Load the automodel class
import sys
import os
import re
import random
log.verbose()
random.seed(os.urandom(1024))
rs=random.randint(0,1024975)
print rs
env = environ(rand_seed=rs)  # create a new MODELLER environment to build this model in
#env=environ()
#generate by biocluster.pm
env.io.atom_files_directory = ['.', '_PDBDIR']
fpir = open('_PIRFILE', 'r')
listKnown=[]
for line in fpir:
    pp=line.rsplit(':');
    if 'structure' in pp[0]:
        listKnown.append(pp[1])
    if 'sequence' in pp[0]:
        target=pp[1]
fpir.close
a = automodel(env,
	  alnfile  = '_PIRFILE',     # alignment filename
	  knowns   = listKnown,              # codes of the templates
	  deviation= 4.0,
	  sequence = target,
	  csrfile  = '_RSRFILE',              # code of the target
	  inifile  = '_INIFILE',
	  )

a.starting_model= _STARTNUMBER                 # index of the first model
a.ending_model  = _ENDNUMBER    
a.make()           
END

#usage sprintf($pyss,_PDBDIR,_PIRFILE,_PIRFILE, _RSRFILE ,_INIFILE,
# _STARTNUMBER, _ENDNUMBER);
my $pyss=<<SSEND;
from modeller import *              # Load standard Modeller classes
from modeller.automodel import *    # Load the automodel class
import sys
import os
import re
import random
log.verbose()
random.seed(os.urandom(1024))
rs=random.randint(0,1024975)
print rs
env = environ(rand_seed=rs)  # create a new MODELLER environment to build this model in
#env=environ()
#generate by biocluster.pm
env.io.atom_files_directory = ['.', '%s']
fpir = open('%s', 'r')
listKnown=[]
for line in fpir:
    pp=line.rsplit(':');
    if 'structure' in pp[0]:
        listKnown.append(pp[1])
    if 'sequence' in pp[0]:
        target=pp[1]
fpir.close
a = automodel(env,
	  alnfile  = '%s',     # alignment filename
	  knowns   = listKnown,              # codes of the templates
	  deviation= 4.0,
	  sequence = target,
	  csrfile  = '%s',              # code of the target
	  inifile  = '%s',
	  )

a.starting_model= %d                 # index of the first model
a.ending_model  = %d    
a.make()           
SSEND

sub iMod{
	
$N1=100; #number of initial decoys, and total dceoys in each iteration
$N11=30;
$N2=5; #number of cluster 
$N3=5; #number of iteration

	#handle arguments
	
	$outdir=$par{-out};
	$cmd="mkdir -p $outdir";
	`$cmd`;
	#die $cmd;
	my $rsrfile="";
	$rsrfile=$par{-predrsr} if(defined $par{-predrsr});
	my $pirf=$par{-pir};
	my $pdbpath=$par{-pdbdir};
	
	$pirf=CheckPirInitial($pirf,$outdir);
	my @cmdlist=qw();
	
	#initial 100 decoys
	`rm $outdir/iter.0/*`;
	for(my $i=0;$i<$N1;$i++){
		my $modpy=GetModPy($pdbpath,$pirf,$i,1,$rsrfile,"","$outdir/iter.0");
		my $cmd="cd $outdir/iter.0; python $modpy";
		push @cmdlist,$cmd;
	}
#	die;
	BatchWait($outdir,@cmdlist);
	my @decoyList=`ls $outdir/iter.0/*.pdb`; for $ff(@decoyList){chomp($ff)};
	
	for(my $iter=1;$iter<=$N3;$iter++){
		# $outdir/iter.$iter;
		my @fileList=GetCluster("$outdir",\@decoyList); #Filter in this step
		
		#die;
		`rm $outdir/iter.$iter/*`;
		#@fileList=@fileList];
		#warn join(" ",@fileList);
		#build modeller with initials in parallel
		@cmdlist=qw();
		
		 #make sure the sequence has :1::len in the description.
		my $nStart=1;
		@newDecoyList=qw();
		for $f(@fileList){ # loop over all clusters.
			for(my $i=0;$i<$N11;$i++){
				warn "pdbpath $pdbpath pirf $pirf nstart $nStart rsrfile $rsrfile f $f outdir $outdir iter $iter" if $_n56++ < 20;
				my $modpy=GetModPy($pdbpath,$pirf,$nStart,1,$rsrfile,"$f","$outdir/iter.$iter");
				$nStart++;
				my $cmd="cd $outdir/iter.$iter; python $modpy &> modeller.$nStart.log";
				push @cmdlist, $cmd;
			}
		}
		#die;
		BatchWait($outdir,@cmdlist);	
		@newDecoyList=`ls $outdir/iter.$iter/*.pdb`;
		for $di(@newDecoyList){chomp($di)};
		#update @decoyList
		push @decoyList,@newDecoyList ;
		#!!! add only nearly cluster centers decoys.
	}
	my @fileList=GetCluster("$outdir",\@decoyList); #Filter in this step
	print "[result] $fileList[0]\n";	
}
sub CheckPirInitial{
my ($pirfile,$outdir)=@_;
my ($pirfilename,$path)=fileparse($pirfile);
my @pirrst=ParsePIR($pirfile);
my $trgtId=$pirrst[6];
open FP,"<$pirfile";
my $newpir="";
while(<FP>){
	my $l=$_;
	#chomp($l);
	if($l=~/sequence/){
	#sequence:T0566:1::3:::::
	my @p=split/:/,$l,-1;
	$p[2]=1;
	$p[4]=length($pirrst[4]{$trgtId});
	$newpir=$newpir.join(":",@p);
	}else{
	$newpir=$newpir.$l;
	}
}
close FP;

open FP,">$outdir/$pirfilename" or die "$outdir/$pirfilename cannot open for writing";
print FP $newpir;
close FP;
return "$outdir/$pirfilename";
}
sub Maxcluster{
    my $outputdir=shift;
    my @flist=@_;
    open FHL,">$outputdir/maxcluster.list";
    print FHL join("\n",@flist),"\n";
    close FHL;
    my $cmd="cd $outputdir; maxcluster -rmsd -l $outputdir/maxcluster.list > $outputdir/maxcluster.log";
    warn $cmd;
    `$cmd`;
    open FHlog,"<$outputdir/maxcluster.log";
    while(<FHlog>){
	last if(/Cluster  Centroid  Size/);
    }
#    <FHlog>;
    my @clusterSize;
    my @clusterCentroid;
    while(<FHlog>){
	    last if(/=====/);
	    my @p=split/\s+/;
	    push @clusterSize,$p[5];
	    push @clusterCentroid,$p[7];
    }
    close FHlog;
    #find the maximal-size cluster centroid.
    my $maxfile=0;
    my $maxsize=0;
    for(my $ci=0;$ci<@clusterSize;$ci++){
	if($maxsize<$clusterSize[$ci]){
	    $maxsize=$clusterSize[$ci];
	    $maxfile=$clusterCentroid[$ci];
	}
    }
    return $maxfile;
}
sub GetCluster{
	#spicker
	my $outdir=$_[0];
	my @list=@{$_[1]};
	my ($filename,$path)=fileparse($list[0]);
	my $olddir=$path;
	%fileMapback;
	for(my $i=0;$i<@list;$i++){
		my $fi=$list[$i];
		#my ($fnew,$path)=fileparse($fi);
		#$fnew=~s/\.B9999//;
		my $fnew="S$i";
		`cp $fi $outdir/$fnew`;
		$fileMapback{$fnew}=$fi;
		#$fileMapback{$fnew.".tra1"}=$fi;
		$list[$i]=$fnew;
	}
	my $listfile="$outdir/cluster.decoy.list";
	open FH,">$listfile";
	print FH join("\n",@list);
	close FH;
	#find outputs
	my ($listfilename1,$listdir)=fileparse($list[0]);
	my $cmd;
	$cmd="cd $outdir ; run_spicker.sh $listfile ; spicker";
	warn $cmd;
	`$cmd`;
	open FH,"<$outdir/rst.dat";
	while(<FH>){
		last if/B------------------------------------/;
	}
	my @ls=qw(); #find the cluster centroid pdb
	while(<FH>){
		chomp;
		last if(length()==0);
		s/^\s+//;
		my @p=split/\s+/;
		$p[8]=~s/\.tra1//;
		warn $p[8];
		push @ls,$fileMapback{$p[8]};
		
	}
	close FH;
	open FH,">$outdir/mapfile";
	for $k(keys %fileMapback){
		print FH "$k ",$fileMapback{$k},"\n";
	}
	close FH;
	#die join(" ",@ls);
	return @ls;
}
sub GetModPy{
	

my ($pdbdir,$pirf,$i,$ndecoy,$rsrfile,$inifile,$outdir)=@_;
warn "generate $i modpy.$i.sh";
my @tempId=qw();
if(defined $_[7]){
	@tempId=@{$_[7]};
	#warn "using remote modeller ",join(" ",@tempId);
}
`mkdir -p $outdir`;
my $py0;
if(defined $tempId[0]){
	for $f(@tempId){`cp $pdbdir/$f.pdb $outdir` if(! (-e "$outdir/$f.pdb"));}
	
	`cp $pirf $outdir/`;
	if($inifile ne ""){
		($fn,$path)=fileparse($inifile);
		`cp $inifile $outdir/ ` if(! (-e "$outdir/$fn"));
		$inifile=$fn;
	}
	if($rsrfile ne ""){
		($fn,$path)=fileparse($rsrfile) ;
		`cp $rsrfile $outdir/`;# if( !(-e "$outdir/$fn"));
		$rsrfile=$fn;
	}
	($fn,$path)=fileparse($pirf);
	$pirf=$fn;
	my $iend=$i+$ndecoy-1;
	$py0=sprintf($pyss,$pdbdir,$pirf,$pirf,$rsrfile,$inifile,$i,$i+$ndecoy-1);
	if($inifile eq ""){
		$py0=~s/ inifile /#inifile/;
	    }
	if($rsrfile eq ""){
		$py0=~s/ csrfile /#csrfile/;
	    }

}else{
    $py0=$py;
	if($inifile eq ""){
	$py0=~s/ inifile /#inifile/;
	}
	if($rsrfile eq ""){
	$py0=~s/ csrfile /#csrfile/;
	}
	my $iend=$i+$ndecoy-1;
	$py0=~s/_PDBDIR/$pdbdir/;
	$py0=~s/_PIRFILE/$pirf/g;
	$py0=~s/_RSRFILE/$rsrfile/;
	$py0=~s/_INIFILE/$inifile/;
	$py0=~s/_STARTNUMBER/$i/;
	$py0=~s/_ENDNUMBER/$iend/;
}
my $pyfile="$outdir/modpy.$i.py";
open FH,">$pyfile";
print FH $py0;
close FH;
return $pyfile;
}

sub BatchWait{
#remote 
#prepare file local, scp files, ssh submit until done , scp files back
my $outdir=shift;
$HEADER_BEAGLE=<<VEND;
#!/bin/bash
#PBS -A CI-SEE000043
#PBS -N batchjob
#PBS -j oe
#PBS -S /bin/bash
#PBS -l mppwidth=24
#PBS -l mppnppn=24
#PBS -l walltime=0:00:30:00
#PBS -q development
#PBS -V

cd $PBS_O_WORKDIR
export HOME=$PBS_O_WORKDIR

VEND


$HEADER=<<END;
#!/bin/bash
#\$ -S /bin/bash
#\$ -cwd
#\$ -l short
#\$ -R y
#\$ -r y
#\$ -N .bat
#\$ -V
END

	my $lastjobid=0;
	$nLine=0;
	$c=`qstat |grep zywang|wc -l`;
	for $_(@_){
	    while($c >110)
	    {
		sleep(1);
		$c=`qstat |grep zywang|wc -l`;
	    }

	    my $qsubfile="$outdir/$nLine.qsub";
	    my $cmd=$_;
	    open FH,">$outdir/$nLine.qsubsh";
	    print FH "$cmd\n";
	    close FH;

	    print $qsubfile;
	    open FH,">$qsubfile" or die "$qsubfile open failed ";
	    print FH "$HEADER_BEAGLE\n";
	    
	    print FH "aprun sh $outdir/$nLine.qsubsh\n";
	    close FH;
	    
	    print $nLine++,": ",$cmd,"\n";
	    $ret=`qsub $qsubfile`;
	    $h++;
	    $count++;
	    print $ret."\n";
	    if($count==100)
	    {
		$count=0;
		print "--------\n";
		$c=`qstat |grep zywang|wc -l`;
		
	    }
	}

	$lastjobid=`qstat |grep zywang|tail -n1`;
	$lastjobid=~s/^\s+//;
	my @p=split/\s+/,$lastjobid;
	$lastjobid=$p[0];
	while(length(`qstat|grep $lastjobid`)>0)
	{
		warn "wait for job $lastjobid";
		sleep(3);
	}

}


sub BatchWaitRemote{
#remote 
#prepare file local, scp files, ssh submit until done , scp files back
my $outdir=shift;
my ($zymoddir,$path)=fileparse($outdir);
$HEADER_BEAGLE=<<VEND;
#!/bin/bash
#PBS -A CI-SEE000043
#PBS -N batchjob
#PBS -j oe
#PBS -S /bin/bash
#PBS -l mppwidth=24
#PBS -l mppnppn=24
#PBS -l walltime=0:00:30:00
#PBS -q development
#PBS -V

cd \$PBS_O_WORKDIR
export HOME=\$PBS_O_WORKDIR

VEND


$HEADER_GOUDA=<<END;
#!/bin/bash
#\$ -S /bin/bash
#\$ -cwd
#\$ -l short
#\$ -R y
#\$ -r y
#\$ -N .bat
#\$ -V
END

my $lastjobid=0;
$nLine=0;
#$c=`qstat |grep zywang|wc -l`;
open FHLIST,">$outdir/all.bat.sh";
for $_(@_){
    my $qsubfile="$outdir/$nLine.qsub";
    my $cmd=$_;
    open FH,">$outdir/$nLine.qsubsh";
    print FH "$cmd\n";
    close FH;
    print FHLIST "$nLine.qsubsh\n";
    $nLine++;
    
}
close FHLIST;

#$HOSTNAME="gouda.uchicago.edu";
$HOSTNAME="login.beagle.ci.uchicago.edu";
$remotedir="work/";
`scp -r $outdir $HOSTNAME:$remotedir`;

$cmd="ssh $HOSTNAME \"cd $remotedir/$zymoddir; perl ~/work/admodeller/rel/bin/batch.wait.beagle.pl all.bat.sh ;\"";
warn $cmd;
`$cmd`;
`scp $HOSTNAME:$remotedir/$zymoddir/*.pdb $outdir` ;

}

sub WeightMultiAli{
#build model for each member in an alignment list
    my @pirlist=@{$_[0]}; #alignment list
    my ($pClusterSize,$pInitClusterNumber ); # parameter used to 
    if(@_>1){
		
    }
    my @model;
    for(my $i=0;$i<@pirlist; $i++){
	my $pir=$pirlist[$i];
	#build model,put result in $model[$i]= ; 
    }
    #run pair-wise tmscore
    for(my $i=0;$i<@model; $i++){
        for(my $j=$i+1;$j<@model; $j++){
	    #compute tmscore
	}
    }
    #Tune_parameter ,choose the cluster size, # initial cluster , to maximize average tmscore to native .

}

sub WeightMultiAli_tune_parameter{

}


1;
