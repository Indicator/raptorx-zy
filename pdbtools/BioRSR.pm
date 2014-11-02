#!/usr/bin/perl -w
$HOME="~/work/admodeller/";

use File::Basename;

$DEBUG=1;
sub GetSingleTempRsr{
    my @pirlist=@{$_[0]};
    my @resIndexOfCa=@{$_[1]};
    my $trgtId=$_[2];		
    my @resIndexOfN=@{$_[3]};
    my @resIndexOfO=@{$_[4]};
    my @resIndexOfCb=@{$_[5]};
    my @rst;
    my @rstNO;
     
    for(my $ti=0;$ti<@pirlist;$ti++){
        my ($rsrf,$pdbfile);
#todo
        my ($name,$path,$suffix) = fileparse($pirlist[$ti]);
        my $rsrf="$path/$trgtId.rsr";
	if(-e "$rsrf.$ti"){
	    $rsrf="$rsrf.$ti";
	}else{
	    ($rsrf,$pdbfile)=RunModellerRSR($pirlist[$ti],$trgtId);
	    $cmd="mv $rsrf $rsrf.$ti";
            `$cmd`;
            $rsrf="$rsrf.$ti";
	}
	warn "reading $rsrf";
	my @rsrSet=BioProtein::ReadRSR($rsrf); # should be a multitemp rsr
        my @rstNon=BioProtein::GetNonPhysicalRestraint(@rsrSet);
        @modrsr=@{$rstNon[0]};
        @modrsrNO=@{$rstNon[1]};
	#my @modrsr=BioProtein::RemovePhysicalRestraints(@rsrSet); #[todo], 
    
	print STDERR "number of rsr in $ti rsr ".scalar(@modrsr),"\n";
	for(my $j=0;$j<@modrsr;$j++){

	    my $a1=$modrsr[$j][8];
	    my $a2=$modrsr[$j][9];
	    my ($res1,$res2);
	    if($modrsr[$j][4]==9){
                $res1=$resIndexOfCa[$a1-1]; #from mod generated pdb
                $res2=$resIndexOfCa[$a2-1];
                $pairType="caca";
	    }elsif($modrsr[$j][4]==10){
		$res1=$resIndexOfN[$a1-1]; #from mod generated pdb
		$res2=$resIndexOfO[$a2-1];
		$res3=$resIndexOfO[$a1-1]; #from mod generated pdb
		$res4=$resIndexOfN[$a2-1];
		if(defined $res1 && defined $res2){
		    $pairType="no";
		}elsif(defined $res3 && defined $res4){
		    $res1=$res3;
		    $res2=$res4;
		    $pairType="on";
		}
	    }elsif($modrsr[$j][4]==26){
		$res1=$resIndexOfCb[$a1-1]; #from mod generated pdb
		$res2=$resIndexOfCb[$a2-1];
		if(defined $res1 && defined $res2){
		    $pairType="cbcb";
		}else{
		    next;
		}
	    }
	    $rst[$ti]=qw() if(!defined $rst[$ti]);
	    $rst[$ti]{$pairType}=[qw()] if(!defined $rst[$ti]{$pairType});
	    $rst[$ti]{$pairType}[$res1]=[qw()] if(!defined $rst[$ti]{$pairType}[$res1]);
	    my @p;
	    push @p,$modrsr[$j][10];
	    push @p,$modrsr[$j][11];
	    $rst[$ti]{$pairType}[$res1][$res2]=\@p;

	}
    }
    #warn "test modsingletemprsr in BioRSR",join(" ",@{$rst[9][11][2]});
    return \@rst;
}

sub RunModeller{
    my $trgtId=$_[1];
    my $pirf=$_[0];
    print join(" ",@_),"\n";
    my $rsrfile;
    my $pdbfile;
    warn "run modeller on $pirf $trgtId";
    my ($name,$path,$suffix) = fileparse($pirf);
    $rsrfile="$path/$trgtId.rsr"; #[problem]
    $pdbfile="$path/$trgtId.B99990001.pdb";
    #return ($rsrfile,$pdbfile) if( (-e $rsrfile) && (-e $pdbfile));
    if(@_==2){
        my ($name,$path,$suffix) = fileparse($pirf);
        my $cmd="cd $path; python $HOME/bin/test.0.py $pirf";
        warn $cmd;
        `$cmd`;
        $rsrfile="$path/$trgtId.rsr"; #[problem]
        $pdbfile="$path/$trgtId.B99990001.pdb";
        die "$pdbfile not exist" if(!-e $pdbfile);
        chomp($rsrfile);
    }elsif(@_==3){
        $rsrfile=$_[2];
        my ($name,$path,$suffix) = fileparse($rsrfile) ;
        my $cmd="mkdir -p $path ; cd $path; python $HOME/bin/test.0.py $pirf";
        warn $cmd;
        `$cmd`;
    }
    die "$rsrfile not exist" if(!-e $rsrfile);
    
    return ($rsrfile,$pdbfile);
}
sub RunModellerRSR{ # only generate rsr file and an initial file, no file model . Do not use the cordinates in the initial file.
# The initial file can only be used for atom indexing.
    my $trgtId=$_[1];
    my $pirf=$_[0];

    my $py=<<END;
from modeller import *              # Load standard Modeller classes
from modeller.automodel import *    # Load the automodel class
import sys
import os
import re
env=environ()
env.io.atom_files_directory = ['.', '/home/zywang/casp/pdb/','/home/zywang/3/zy.1k.top20/pdb']
fpir = open('$pirf', 'r')
listKnown=[]
for line in fpir:
    pp=line.rsplit(':');
    if 'structure' in pp[0]:
        listKnown.append(pp[1])
    if 'sequence' in pp[0]:
        target=pp[1]
fpir.close
a = automodel(env,
          alnfile  = '$pirf',     # alignment filename
          knowns   = listKnown,              # codes of the templates
          sequence = target,
          )
a.max_molpdf = 1
a.make() 
END


    if(@_==2){
        my ($name,$path,$suffix) = fileparse($pirf);
	open FH,">$path/build.$trgtId.py";
	print FH $py;
	close FH;
        my $cmd="cd $path; python build.$trgtId.py";
        warn $cmd;
        `$cmd`;
        $rsrfile="$path/$trgtId.rsr"; #[problem]
        $pdbfile="$path/$trgtId.ini";
        die "$pdbfile not exist" if(!-e $pdbfile);
        chomp($rsrfile);
    }

return ($rsrfile,$pdbfile);
}

#### the end  #####
1;
