#!/usr/bin/perl -w
#================ TreeFolder ==========
#This perl script takes a RNA sequence as input, computes features for TreeFold rna structure sampling, and starts sampling.
#Author Zhiyong Wang, zywang@ttic.edu
#Please cite:
#Zhiyong Wang and Jinbo Xu, A conditional random fields method for RNA sequence-structure relationship modeling and
# conformation sampling. Bioinformatics, (2011) 27(13): i102-i110

#Revision Apr 16, 2013

use Math::Trig;
use List::Util qw[min max];

#----PLEASE CHANGE $HOME TO THE INSTALLED FOLDER------
$HOME="/home-nfs/zywang/00workshop/proj.rna/release/";

require "$HOME/bin/BioRNA.pm";
$CONTRAFOLD_EXE="$HOME/src/contrafold/src/contrafold";
$outputdir="./";
$BINDIR="$HOME/bin/";

if(@ARGV ==0){
    print "Usage: run_treefolder.pl -jobid [RnaId] -fasta [Fasta file containing RNA sequence]\n";
    exit(0);
}

%par=@ARGV;
if(!defined $par{-jobid}){
    $jobid=`hostname`;chomp($jobid);$jobid=~s/\W//g; $jobid=$jobid.int(rand(1e10));
}else{
    $jobid=$par{-jobid};
}

my $seqfile=$jobid.".seq";
my $seq=get_fasta($par{-fasta});
open FHseq,">$seqfile";print FHseq "$seq"; close FHseq;
my @ssnr=get_pred_ss($seqfile,$jobid);
my $ssfile="$jobid.ss";
#die $seq;
#write features
my $featfile=$jobid.".f54";
get_all_feature($seq,\@ssnr,$jobid);

# run sampling using $jobid.ss

$cmd="$HOME/src/crfsample.joint CONFDIR $HOME/conf CONF crfs.conf TEST $featfile CHAINPRE $jobid EWEI1 10  EWEI2 0 ESCALE 1  MAX_ITER 300 PT 5 CLASHCASE 0 OUTDIR $outputdir SSFILE $ssfile SEQFILE $seqfile SAMP_ITER 100 &> $jobid.log";
print STDERR $cmd,"\n";
`$cmd`;
# delete files


sub get_all_feature{
    my ($seq,$ssnr,$jobid)=@_;
    my @allnt=split//,$seq;
    my %ss;
    for(my $i=0;$i<scalar(@{$ssnr});$i=$i+2){
	$ss{$ssnr->[$i]}=$ssnr->[$i+1];
	$ss{$ssnr->[$i+1]}=$ssnr->[$i];
    }
    my @alllab;
    for(my $i=1;$i<@allnt-1;$i++){
	my $feature=two_nt_feat($allnt[$i],$allnt[$i-1],$allnt[$i+1]);
	if(defined $ss{$i}){
	    $feature=$feature." 1 0";
	}else{
	    $feature=$feature." 0 1";
	}
	push @allfeat,$feature;
	push @alllab,0;
    }
    open FOUT,">$jobid.f54";
    print FOUT "1\n";
    print FOUT scalar(@allfeat),"\n";
    print FOUT join("\n",@allfeat),"\n";
    print FOUT join("\n",@alllab),"\n";
    close FOUT;
    
}

sub get_fasta{
    open FSEQ,"<$_[0]" or die "File read error in reading $_[0]";
    my @seqlines=<FSEQ>;
    my $seq="";
    for(my $i=0;$i<scalar(@seqlines);$i++)
    {
	if($seqlines[$i]=~/^>/){}
	else{
	    chomp($seqlines[$i]);
	    $seqlines[$i]=~s/\s+//g;
	    $seq=$seq.$seqlines[$i];
	}
    }
    $seq=uc $seq;
    $seq=~m/[ACGU]*/g;
    die "The sequence contains unknown nucleotides other than ACGU \n" if ($seq ne $&);
    close FSEQ;
    return $seq;
}

#this sub return a 20-tuple vector representing two neighbor nucleotides.
sub two_nt_feat
{
    my %ntno=qw(A 0 C 1 U 2 G 3);
    my $n=$ntno{$_[0]}*4+$ntno{$_[1]}; # This number of the first pair nt.
    my $n1=$ntno{$_[1]}*4+$ntno{$_[2]};
    my $n2=$ntno{$_[0]}*4+$ntno{$_[2]};

    for($i=0;$i<52;$i++)
    {
	$rslt[$i]=0;
    }
    $rslt[$n+4]=1;
    $rslt[$n1+4+16]=1;
    $rslt[$n2+4+32]=1;
    $rslt[$ntno{$_[0]}]=1;
    return join(" ",@rslt);
}

sub get_pred_ss{
    my ($rnaseqfile,$jobid)=@_;
    `$CONTRAFOLD_EXE predict $rnaseqfile > $jobid.pss`;
    #parse the predicted secondary structure
    my $sspara=`tail -n1 $jobid.pss`;
    chomp($sspara);
    my @ssres=BioRNA::ParseContrafold($sspara);
    my @ssnr=@{$ssres[0]};
    open FOUT,">$jobid.ss";
    print FOUT scalar(@ssnr)/2;
    print FOUT "\n";
    print FOUT join(" ",@ssnr);
    print FOUT "\n";
    close FOUT;
    return @ssnr;
}

