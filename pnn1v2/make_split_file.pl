#!/usr/bin/perl

use List::Util qw(shuffle);
srand(1);
#b.69. b.69.5.1 1a12A -> b.69.5.1 d1a12a_ 3.0e-156  519.9 | 
#a.124. a.124.1.1 1ah7A -> a.124.1.1 d1olpa1 1.8e-82  276.5 | 
#12asA
#16vpA
#with length balance
my %length=getlen();

#@inlist=qw(EPAD_5cross_validation_list_0 EPAD_5cross_validation_list_1 EPAD_5cross_validation_list_
@inlist=map{"EPAD_5cross_validation_list_$_"} (0..4) ; 
my @alllist;
for(my $i=0;$i<5;$i++){
    my @onelist=`cat $inlist[$i]|cut -d' ' -f3`;
    map{chomp($_)}@onelist;
    @alllist[$i]=\@onelist;

}
print join(",",@inlist);

@trainid=`cat trainlist`;
for(my $i=0;$i<@trainid;$i++){
    chomp($trainid[$i]);
    $trainmap{$trainid[$i]}=$i;
}

@trainid=`cat trainlist.hineff`;
for(my $i=0;$i<@trainid;$i++){
    chomp($trainid[$i]);
    $trainmap{$trainid[$i]}=$i;
}


$nproc=80;

for(my $foldi=0;$foldi<5;$foldi++){
    my @valid_list=@{$alllist[$foldi]};
    my @train_list;
    for(my $j=0;$j<5;$j++){
	next if($j==$foldi);
	push @train_list,@{$alllist[$j]};
    }
    # randomize
    @valid_list=map{$trainmap{$_}} shuffle(@valid_list);
    @train_list=map{$trainmap{$_}} shuffle(@train_list);
    my $nnfold0=int(scalar(@train_list)/$nproc);
    my $remain0=scalar(@train_list) % $nproc;
    my $nnfold1=int(scalar(@valid_list)/$nproc);
    my $remain1=scalar(@valid_list) % $nproc;
    open FH,">split_file80_$foldi";
    my $aa=0; my $cc=0;
    for(my $i=0;$i<$nproc;$i++){
	#my $aa=$i*$nnfold0;
	my $bb=$aa+$nnfold0-1;
	#$bb=scalar(@train_list)-1 if($bb>=scalar(@train_list));
	$bb= $bb+1 if($i<$remain0);
	#my $cc=$i*$nnfold1;
	my $dd=$cc+$nnfold1-1;
	$dd = $dd+1 if($i<$remain1);
	#$dd=scalar(@valid_list)-1 if($dd>=scalar(@valid_list));
	
	print FH join(" ",@train_list[$aa..$bb]);
	print FH " ;";
	print FH join(" ",@valid_list[$cc..$dd]);
	print FH "\n";
	$aa=$bb+1;$cc=$dd+1;
	    
    }
    close FH;
}


sub getlen{
    my %length;
open FH,"train.list.2";
while(<FH>)
{
    my $l=<FH>;
    my @p=split/\s+/,$l;
    $length{$p[2]}=$p[0];
}
close FH;
return \%length
}
