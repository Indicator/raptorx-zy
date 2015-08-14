#!/usr/bin/perl
use List::Util qw(min max sum);
if(@ARGV==0){
    print "bala.pl [input list] [output file] \n \
Each line in the input list file has a pdbid and a weight for this id.";
    exit(0);
}
$inputfile=$ARGV[0];
$outputfile=$ARGV[1];
print join(",",@ARGV),"\n";

my @name;
$ncpu=200;




my @weight;
open FIN,"<$inputfile";
while(<FIN>){
    my @p=split/\s+/;
    push @name,$p[0];
    # push @weight,$p[-1]**2;
    push @weight,$p[-1]**2 /4;
}
close FIN;
# @w1 not used 
my @w1;
for(my $i=0;$i<@name/2;$i++){
    $w1[$i]=$weight[$i]+$weight[@name/2+$i];
}
print "max ",max(@w1),"\n"; #,join(",",@w1),"\n";

#   ------ sort and balance all the jobs according to the weights.
# req.1 : No job can be divided.

$total=sum(@weight);
$bal=$total/$ncpu*1.5; 
if(1 || $bal<max(@weight)){
    print "using max \n";
    $bal=max(@weight)*1 ;
}

my @slot;
#my @slotid;
# a greedy method to balance
@ind=0..(scalar(@name)-1);
@ind=sort{$weight[$a]<=>$weight[$b]}@ind;
@weight=@weight[@ind];
@name=@name[@ind];

for(my $i=@weight-1; $i>=0;$i--){
    # @slot is [$total_weight, $pdb1, $pdb2 ... ]
    if(@slot==0){
	push @slot,[$weight[$i],$i];
    }else{
	my $j=0;
	# try every slot.
	for(;$j<@slot;$j++){
	    if($slot[$j][0]+$weight[$i]<$bal){
		$slot[$j][0]=$slot[$j][0]+$weight[$i];
		push @{$slot[$j]},$i;
		last;
	    }
	}
	# push last one or not
	# if(0){
	# Add a slot if no slot fit.
	if( $j==@slot  ){
	    push @slot,[$weight[$i],$i];
	}
	# }
	# sort all slots, so we can do with the lowest slot to start.
	@slot= sort {$b->[0]<=> $a->[0]} @slot;
    }
}

# output 

print  scalar(@slot)," ",$slot[0][0]," ",$slot[int(scalar(@slot)*0.9)][0]," ",$slot[-1][0],"\n";
open FH,">$outputfile";
for(my $i=0;$i<@slot;$i++){
    #print FH $slot[$i][0]," ";
    print FH join(" ",map{"h5/".$_.".h5"}@name[@{$slot[$i]}[1..(@{$slot[$i]}-1)]]),"\n";
    #print FH "# ",join(" ",@weight[@{$slot[$i]}[1..(@{$slot[$i]}-1)]]),"\n";
}
close FH;
