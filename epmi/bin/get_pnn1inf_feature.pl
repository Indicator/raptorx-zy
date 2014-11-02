#!/usr/bin/perl

use List::Util qw[min max sum];
my $seqlen;
%par=@ARGV;

if(!(defined $par{-lib})){
    $par{-lib}="/lustre/beagle/zywang/work/pdbtools";
}

require "$par{-lib}/BioAlign.pm";
require "$par{-lib}/BioProtein.pm";

my %par=@ARGV;

my $tgtfile;
my $pdb=$par{-pdbid};
if(defined $par{-tgt}){
    $tgtfile=$par{-tgt};
}else{
    $tgtfile="/home/zywang/work/sdcp/data0/pdb25tgt/$pdb.tgt";
}
my %tpl=ParseTpl($tgtfile);

# parse pdbid
$pdbid=$pdb; #$tpl{seqId}.$tpl{chainId};
my $seqlen=$tpl{len};

#parse feature
my $feat=getf1(\%tpl);

## end of parsing

my $outputfile=$par{-out};
open FOUT,">$outputfile";
print FOUT "1\n$seqlen 0 $pdbid#\n"; # len_contact is 0
for(my $i=0;$i<$seqlen;$i++){
    for(my $j=0;$j<@{$feat->[$i]};$j++){
	printf FOUT "%.5f ",$feat->[$i][$j];
    }
    print FOUT "\n";
}
close FOUT;


sub getf1{
    my $tpl=shift;
    #return pair pssm
    my @f;
    for(my $i=0;$i<$tpl->{len};$i++){
	$f[$i]=[qw()];
	my @q;
	push @q,@{$tpl->{ss3prob}[$i]}[2,0,1];
	push @q,$tpl->{neffPos}[$i];
	push @q,@{$tpl->{hhEmmission}[$i]};print scalar(@{$tpl->{hhEmmission}[$i]}),",";
	# first 20 cols of pssm / 8 
#	if($i<10){
#	    print "debug: $i ",join(" ",map{$_/8}@{$tpl->{psp}[$i]}[0..19]),"\n"; 
#	}
	push @q,map{$_/8}@{$tpl->{psp}[$i]}[0..19];
	$f[$i]=\@q;
	#print join(" ",@q),"\n";
    }
    return \@f;
}
