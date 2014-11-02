#This package define the structure of RNA and useful methods to 
# read/write  and do some statistics on the RNA pdb files.
package BioRNA;

use Math::Trig;
use List::Util qw[min max];


use base 'Exporter';
 
  # When the module is invoked, export, by default, the function "hello" into 
  # the namespace of the using code.
my $debug=0 ;
our @EXPORT = qw(ParseRNAPDB GetTorsions);

@boneatoms=qw(P O5' C5' C4' O4' C3' C1' N9 N1 C6 C8 O3' OP1 OP2 C2' O2'); #');
my %h; # %h denotes whether an atom belongs to backbone and side chain.
foreach $x(@boneatoms)
{
    $h{$x}=1;
}
@resatoms=qw{N1 O2 N2 C2 N3 C4 O4 N4 C5 C6 C7 O6 N6 N7};
foreach $x(@resatoms)
{
    $h{$x}=1;
}

my %featmap;
$featmap{'A'}="1 0 0 0";
$featmap{'G'}="0 1 0 0";
$featmap{'C'}="0 0 1 0";
$featmap{'U'}="0 0 0 1";


#this sub return a 20-tuple vector representing two neighbor nucleotides.
sub get_cords
{
    my @rst;
    %atom=%{$_[0]};
    push @rst, $atom{x};
    push @rst, $atom{y};
    push @rst, $atom{z};
#    print join(" ",@rst);
    return @rst;
}

sub two_nt_feat
{
    $_[0]=~s/^\s+//;
    $_[1]=~s/^\s+//;
    $_[0]=~s/\s+$//;
    $_[1]=~s/\s+$//;
    $_[2]=~s/^\s+//;
    $_[2]=~s/\s+$//;
    @rslt=qw();
    %ntno=qw(A 0 C 1 U 2 G 3);
    if(!(defined $ntno{$_[1]})){
	   print $_[1].";\n";
       }
    $n=$ntno{$_[0]}*4+$ntno{$_[1]};
    $n1=$ntno{$_[1]}*4+$ntno{$_[2]};
    $n2=$ntno{$_[0]}*4+$ntno{$_[2]};

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

sub dist
{
    @x=@{$_[0]};
    @y=@{$_[1]};
    $r=0;
    for($k=0;$k<@y;$k++)
    {
	$d=min(abs($x[$k]-$y[$k]),3.1415926*2-abs($x[$k]-$y[$k]));
	$r+=$d*$d;
    }
    $d=abs($x[$k]-$y[$k]);
    $r+=$d*$d;
    return sqrt($r);
}

#len of a bond
sub distbond
{
    @x=@{$_[0]};
    @y=@{$_[1]};
    $r=0;
    for($k=0;$k<@x;$k++)
    {
	$d=abs($x[$k]-$y[$k]);
	$r+=$d*$d;
    }
    return sqrt($r);
}

sub plangle
{
    %x=%{$_[0]};
    %y=%{$_[1]};
    %z=%{$_[2]};
    @aa=get_cords(\%x);
    @bb=get_cords(\%y);
    @cc=get_cords(\%z);

    $r=0;
    for($k=0;$k<@aa;$k++)
    {
	$r=$r+($aa[$k]-$bb[$k])*($bb[$k]-$cc[$k]);
    }
    $n=0;
    for($k=0;$k<@aa;$k++)
    {
	$n=$n+($bb[$k]-$cc[$k])**2;
    }
    $m=0;
    for($k=0;$k<@aa;$k++)
    {
	$m=$m+($aa[$k]-$bb[$k])**2;
    }
    return acos($r/sqrt($n*$m));
}


#parse a PDB ATOM line
sub parseline($)
{
    if(substr($_,0,4) ne "ATOM" ) 
    {
	$result{isatom}=0;
    }
    else{
    $atom=substr($_,12,4); #Extrat the atom  
    $atom =~ s/^\s+//;
    $atom =~ s/\s+$//;
    $result{atom}=$atom;
    $result{anum}=substr($_,6,5);
    $result{res}=substr($_,17,3);
    $result{res}=~s/\s+//;
    $result{res}=~s/\s+//;
    if(length($result{res})!=1){
	$result{isatom}=0;
	return %result;
    }
    $result{resnum}=substr($_,22,26-23+1);
    $result{resnum}=~s/\s+//;
    $result{resnum}=~s/\s+//;
    $result{chain}=substr($_,21,1);
    $result{x}=substr($_,30,38-31+1);
    $result{y}=substr($_,38,46-39+1);
    $result{z}=substr($_,46,54-47+1);
    $result{bf}=substr($_,60,66-61+1);
    $result{isatom}=1;
    }
    return %result;
}

#open FIN,"<$ARGV[1]"; #read the clash list
#my %clashes;
#while(<FIN>)
#{
#    chomp;
#    $clashes{$_}=1;
#}
#my $BFACT=60;

#Main 
sub ReadLabelMap{
    $debug=0;
    my $labelfile="/home-nfs/zywang/db/rna/00parameter/labelmap100x5";
#initialize of reading labels from labelmap, 
    open FLBL, "<$labelfile";
    my @labels=qw();
    while(<FLBL>)
    {
	chomp;
	my @center=qw();
	@center=split(/\s+/,$_);
	push @labels,\@center;
    }
    close FLBL;
}

sub ParseRnaview{
    #return pairs of atoms by the residue number in PDB file other than real order number of a residue.
#init the true SS (tagged by rnaview, stored in .out file)
    #!!!!!MUST be consistent with feature file
    my %ss;
    my @ssnr;
    if(-e "$_[0].out")
    {
	open FSS,"<$_[0].out";
	while(<FSS>){
	    chomp;
	    if(/BEGIN_base/){
		last;
	    }
	}
	while(<FSS>)
	{
	    chomp;
	    $_=~s/^\s+//;
	    if(/END_base/){
		last;
	    }
	    if(/G-C|C-G|A-U|U-A|G-U|U-G/ && !/S\//)
	    {
		@t=split(/\s+/,$_);
		#check chain
		next if( ($_[1] ne "") && ( ($t[1] ne "$_[1]:") || ($t[5] ne "$_[1]:") ) );
		#$t[0]=~s/\s+//;
		if(abs($t[2]-$t[4])>2){
		    $ss{$t[2]}=$t[4];
		    push @ssnr, ($t[2],$t[4]);
		    $ss{$t[4]}=$t[2];
		}
	    }
	}
    }
    else 
    {
	print STDERR "no rnaview file found.\n";
    }
    my @res;
    push @res,\@ssnr;
    push @res,\%ss;
    return @res;
}

sub GetRNAStem{
    my %natss=%{$_[0]};
#    print keys(%natss);exit;
    my @sskeys=sort{$a <=> $b}(keys(%natss));
#    print join(" ",@sskeys);exit;
    my @res=qw();
    for(my $i=0;$i<@sskeys;)
    {
	#find a trans stem
	my $len=$i;
	while( $len+1<@sskeys && ($sskeys[$len]==$sskeys[$len+1]-1) && ($natss{$sskeys[$len]} == $natss{$sskeys[$len+1]}+1 ) )
	{
	    $len++;
	}
	if($len>$i+2){
	    push @res, $sskeys[$i];
	    push @res, $sskeys[$len];
	}
	$i=$len+1;
    }
    if(0){
    for(my $i=0;$i<@sskeys;)
    {
	#find a cis stem
	$len=$i;
	while( $len+1<@sskeys && ($sskeys[$len]==$sskeys[$len+1]-1) && ($natss{$sskeys[$len]} == $natss{$sskeys[$len+1]}-1 ) )
	{
	    $len++;
	}
	if($len>$i+2){
	    push @res, $i;
	    push @res, $i+$len-1;
	}
	$i=$len+1;
    }
}
    return @res;
}

sub ParseContrafold{
    my @ssseq=split//,$_[0];
    my %ss;
    my @stack;
    my @ssnr;
    for(my $i=0;$i<scalar(@ssseq);$i++)
    {
	if($ssseq[$i] eq "("){
	    push @stack,$i;
      	}
	if($ssseq[$i] eq ")"){
	    my $j=pop @stack;
	    push @ssnr,$j;
 	    push @ssnr,$i;
	    $ss{$i}=$j;
	    $ss{$j}=$i;
     	}
    }

    my @res;
    push @res,\@ssnr;
    push @res,\%ss;
    return @res;
}

#The chi torsion is on bond C1' N9


sub ParseRNAPDB{
    open FIN,"<$_[0]" or die $!,"$_[0]";
    my $chain=$_[1];
    my @dihedrals;
    my @allatoms;
#We assume every line begins with ATOM
    my @onechain=qw();
#read pdb file
    my $model=0;
    while(<FIN>)
    {
	#check atom type
	chomp;
	if(/^END/){last;}
	if(/^MODEL/){$model=$model+1;if($model==2){last;}}
	if(/^ATOM/){
	    my %ln=parseline($_);
	    if($ln{isatom} && ($chain eq "" || $ln{chain} eq $chain)){
		push @allatoms, \%ln;
	    }
	}
    }
    close FIN;
#    print scalar(@allatoms)."\n";
#process allatoms to onechain
#    @boneatoms=qw(P O5' C5' C4' O4' C3' C1' N9 N1 C6 C8 O3' O2'); #')
    my %nt=qw();
    my %resnummap=qw();
    for($i=0;$i<scalar(@allatoms);$i++)
    {
	my $fullnt=0;
	my %ln=%{$allatoms[$i]};
	if(defined $h{$ln{atom}}){
	    $nt{$ln{atom}}=\%ln;
	}
	if($i==@allatoms-1){
	    my %newnt=%nt;
	    push @onechain,\%newnt;
	    %nt=qw();
	    $resnummap{$ln{resnum}}=scalar(@onechain)-1;
	}
	else{    
	    my %lnnext=%{$allatoms[$i+1]};
	    if($lnnext{resnum}!=$ln{resnum}){
		my %newnt=%nt;
		if((defined $nt{P}) && (defined $nt{"C4'"} ) ){ #check completeness of a residue
		    push @onechain,\%newnt;
		    $resnummap{$ln{resnum}}=scalar(@onechain)-1;
		}
		else{
		    if(defined $nt{"C4'"} && scalar(@onechain)==0 ){
			push @onechain,\%newnt;# chain
			$resnummap{$ln{resnum}}=0;
		    }
		    else{
			print STDERR "drop an incomplete nt at ".scalar(@onechain)."\n";
			
		    }
		}
		%nt=qw();
	    }
	}
    }
    my @res;
    push @res,\@onechain;    #all nucleotides
    push @res,\%resnummap;   #pdb nt num -> real nt index
    return @res;
}

sub CollectPartStructure
{
    my @resnums=@{$_[0]};
    my @allnt=@{$_[1]};
    my @res;
    for($i=0;$i<@resnums;$i++)
    {
	push @res, $allnt[$resnums[$i]];
    }
    return @res;
}

sub SavePDB
{
    my @allnt=@{$_[0]};
    open fhOUT,">$_[1]";
    my $chain;
    if(defined $_[2]){
	$chain=$_[2];
    }
    $iAtm=1;
    for(my $iNt=0;$iNt<@allnt;$iNt++){
	%nt=%{$allnt[$iNt]};
	for $Atm (keys %nt){
	    %oneAtom=%{$nt{$Atm}};
	    $line=sprintf("ATOM  %5d %4s %3s %1s%4d    %8.3f%8.3f%8.3f%6.2f%6.2f      A1   N \n",$iAtm, $Atm, $oneAtom{res},$chain, $iNt, $oneAtom{x}, $oneAtom{y}, $oneAtom{z},0.0,0.0);
	    $iAtm++;
	    print fhOUT $line;
	}
    }
    close fhOUT;
}


#deal onechain, calc all torsion on p-C4 and C4-p and chi torsion
my @allfeat;
my @alllab;
my @allresidue;
my @allss;

my @allnat;
my @alltors;

my @allchis;
my @allbba; # two bond lengths and one planar angle
my @allpmj;

sub GetChis{
    for($t=0;$t<@onechain;$t++)
    {
#push native structure
	%nt=%{$onechain[$t]};
	%C4=%{$nt{"C4'"}};
	if($t==@onechain-1){
#	%P=%{$nt{"O5'"}}; #'}}
	    %P=%{$nt{"P"}};
	    $c1=$P{x}." ".$P{y}." ".$P{z};
	}
	else{
	    if($t==0){
		$c1=$C4{x}." ".$C4{y}." ".$C4{z};
	    }
	    else{
		%P=%{$nt{"P"}};
		$c1=$P{x}." ".$P{y}." ".$P{z}."\n".$C4{x}." ".$C4{y}." ".$C4{z};
	    }
	}
	push @allresidue,$C4{res};
	push @allnat,$c1;
	#chi using O4' C1' N9 C8
	%P=%{$nt{"C4'"}};
	%O4=%{$nt{"O4'"}};
	%C1=%{$nt{"C1'"}};
	my $b1;
	my $b2;
	my $ang;
	if($P{res} eq 'A' || $P{res} eq 'G')
	{
	    %N9=%{$nt{"N9"}};
	    %C8=%{$nt{"C8"}};
	    $chi="dihe ".$O4{x}." ".$O4{y}." ".$O4{z}." ".$C1{x}." ".$C1{y}." ".$C1{z}." ".$N9{x}." ".$N9{y}." ".$N9{z}." ".$C8{x}." ".$C8{y}." ".$C8{z};
	    @v1=get_cords(\%C1);
	    @v2=get_cords(\%N9);
	    $b1=distbond(\@v1,\@v2);
	    @v1=get_cords(\%C8);
	    @v2=get_cords(\%N9);
	    $b2=distbond(\@v1,\@v2);
	    $angcmd=join(" ",get_cords(\%C1),get_cords(\%N9),get_cords(\%C8));
	    $ang=`plangle $angcmd\n`;
	}
	else
	{
	    %N1=%{$nt{"N1"}};
	    %C6=%{$nt{"C6"}};
	    $chi="dihe ".$O4{x}." ".$O4{y}." ".$O4{z}." ".$C1{x}." ".$C1{y}." ".$C1{z}." ".$N1{x}." ".$N1{y}." ".$N1{z}." ".$C6{x}." ".$C6{y}." ".$C6{z};
	    @v1=get_cords(\%C1);
	    @v2=get_cords(\%N1);
	    $b1=distbond(\@v1,\@v2);
	    @v1=get_cords(\%C6);
	    @v2=get_cords(\%N1);
	    $b2=distbond(\@v1,\@v2);
	    $angcmd=join(" ",get_cords(\%C1),get_cords(\%N1),get_cords(\%C6));
	    $ang=`plangle $angcmd\n`;
	}
#    push @allchis,"$P{res} ".substr(`$chi\n`,0);
	push @allchis, substr(`$chi\n`,0,6);
	push @allbba,"$P{res} $ang $b1 $b2";
	push @allpmj,$ang;
    }
}

#collect backbone fragments 
my @bbfrags;
my @alldelta;
my @allalpha;
my @allbondpc4;
my @allbondc4p;
my @allanglepc4p;
my @allanglec4pc4;
my @allradius;

sub _BioRNA_GetAllBackboneFragments{
    my @onechain=@_;
    for($t=1;$t<@onechain-1;$t++)
    {
#collect atoms. leftC4', leftC3',left O3', P, O5', C5', C4', C3', O3', rightP, OP1, OP2, O4',C1',c2'
	my %nt=%{$onechain[$t]};
	my %lnt=%{$onechain[$t-1]};
	my %rnt=%{$onechain[$t+1]};
	my %lc4=%{$lnt{"C4'"}};
	%lc3=%{$lnt{"C3'"}};
	%lo3=%{$lnt{"O3'"}};
	%P=%{$nt{"P"}};
	%O5=%{$nt{"O5'"}};
	%C5=%{$nt{"C5'"}};
	%C4=%{$nt{"C4'"}};
	%C3=%{$nt{"C3'"}};
	%O3=%{$nt{"O3'"}};
	%rp=%{$rnt{"P"}};
	%OP1=%{$nt{"OP1"}};
	%OP2=%{$nt{"OP2"}};
	%O4=%{$nt{"O4'"}};
	%C1=%{$nt{"C1'"}};
	%C2=%{$nt{"C2'"}};
	%O2=%{$nt{"O2'"}};
	@x=get_cords(\%lc4);
	@y=get_cords(\%P);
	push @allbondpc4, distbond(\@x,\@y);
	@x=get_cords(\%P);
	@y=get_cords(\%C4);
	push @allbondc4p, distbond(\@x,\@y);
	$angcmd=join(" ",get_cords(\%lc4),get_cords(\%P),get_cords(\%C4));
	$ang=`plangle $angcmd\n`;
	push @allanglec4pc4,$ang;
	$angcmd=join(" ",get_cords(\%P),get_cords(\%C4),get_cords(\%rp));
	$ang=`plangle $angcmd\n`;
	push @allanglepc4p,$ang;
	$delta="dihe ".$C5{x}." ".$C5{y}." ".$C5{z}." ".$C4{x}." ".$C4{y}." ".$C4{z}." ".$C3{x}." ".$C3{y}." ".$C3{z}." ".$O3{x}." ".$O3{y}." ".$O3{z};
	$alpha="dihe ".$lo3{x}." ".$lo3{y}." ".$lo3{z}." ".$P{x}." ".$P{y}." ".$P{z}." ".$O5{x}." ".$O5{y}." ".$O5{z}." ".$C5{x}." ".$C5{y}." ".$C5{z};
	push @alldelta,substr(`$delta\n`,0,6);
	push @allalpha,substr(`$alpha\n`,0,6);
	my %N91;
	if($C1{res} eq "A" || $C1{res} eq "G")
	{
	    %N91=%{$nt{"N9"}};
	}
	else
	{
	    %N91=%{$nt{"N1"}};
	}
	my @onefrag;
	push @onefrag, $C4{res};
	push @onefrag, get_cords(\%lc4);
	push @onefrag, get_cords(\%lc3);
	push @onefrag, get_cords(\%lo3);
	push @onefrag, get_cords(\%P);
	push @onefrag, get_cords(\%O5);
	push @onefrag, get_cords(\%C5);
	push @onefrag, get_cords(\%C4);
	push @onefrag, get_cords(\%C3);
	push @onefrag, get_cords(\%O3);
	push @onefrag, get_cords(\%rp);
	push @onefrag, get_cords(\%OP1);
	push @onefrag, get_cords(\%OP2);
	push @onefrag, get_cords(\%O4);
	push @onefrag, get_cords(\%C1);
	push @onefrag, get_cords(\%C2);
	push @onefrag, get_cords(\%O2);
	push @onefrag, get_cords(\%N91);
	push @bbfrags, join(" ",@onefrag);
#comput all radius centered at C1'
	@x=get_cords(\%P);
	@y=get_cords(\%rp);
	my $d1=distbond(\@x,\@y);
	if($C1{res} eq "A" || $C1{res} eq "G")
	{
	    %N91=%{$nt{"N1"}};
	    %sc2=%{$nt{"N7"}};
	}
	else
	{
	    %N91=%{$nt{"N3"}};
	    %sc2=%{$nt{"C5"}};
	}
	@y=get_cords(\%N91);
	my $d2=distbond(\@x,\@y);
	@y=get_cords(\%sc2);
	my $d3=distbond(\@x,\@y);
	push @allradius,"$C1{res} $d1 $d2 $d3";
    }
}

sub GetLabel{
    my @rst;
    my @onechain=@{$_[0]};
    my $labelfile=$_[1];
    _BioRNA_GetAllBackboneFragments(@onechain);
    open FHlabel,"<$labelfile";

    my @labels=<FHlabel>;

    for(my $i=0;$i<scalar(@labels);$i++)
    {
	chomp($labels[$i]);
	my @labelvec=split/\s+/,$labels[$i];
	$labels[$i]=\@labelvec;
    }
    close FHlabel;

#    _BioRNA_GetAllBackboneFragments(@_);
    my @allfeat;
    my @alllab;
    my $labelerr=0; #compute all error in label rounding.
    my @alltors;
    for($t=1;$t<@onechain-1;$t++)
    {
	my %ntleft=%{$onechain[$t-1]};
	my %ntright=%{$onechain[$t+1]};
	my %nt=%{$onechain[$t]};
	my %ltP;
	if($t==1){
	    %ltP=%{$ntleft{"O5'"}}; #'}}
	}
	else{
	    %ltP=%{$ntleft{"P"}};
	}
	my %ltC4=%{$ntleft{"C4'"}};

	my %rtP=%{$ntright{"P"}};#if(!defined($ntright{P})){print scalar(@onechain)."/$t hash undefined.";};
#    %rtC4=%{$ntright{"C4'"}};
	my %C4=%{$nt{"C4'"}};
	my %P=%{$nt{"P"}};
	my %C1=%{$nt{"C1'"}};
	my %O4=%{$nt{"O4'"}};
	#calc torsions leftC4'-leftP (if $i>=2)and leftP-C4'
	if($debug==1)
	{
	    print "-----------\n";
	    print join(" ",values %C4)."\n";
	    print join(" ",keys %ntleft)."\n";
	}
#    $c1="dihe ".$ltP{x}." ".$ltP{y}." ".$ltP{z}." ".$C4{x}." ".$C4{y}." ".$C4{z}." ".$P{x}." ".$P{y}." ".$P{z}." ".$rtC4{x}." ".$rtC4{y}." ".$rtC4{z};
#    $c2="dihe ".$C4{x}." ".$C4{y}." ".$C4{z}." ".$P{x}." ".$P{y}." ".$P{z}." ".$rtC4{x}." ".$rtC4{y}." ".$rtC4{z}." ".$rtP{x}." ".$rtP{y}." ".$rtP{z};
	my $c1="dihe ".$ltP{x}." ".$ltP{y}." ".$ltP{z}." ".$ltC4{x}." ".$ltC4{y}." ".$ltC4{z}." ".$P{x}." ".$P{y}." ".$P{z}." ".$C4{x}." ".$C4{y}." ".$C4{z};
	my $c2="dihe ".$ltC4{x}." ".$ltC4{y}." ".$ltC4{z}." ".$P{x}." ".$P{y}." ".$P{z}." ".$C4{x}." ".$C4{y}." ".$C4{z}." ".$rtP{x}." ".$rtP{y}." ".$rtP{z};
	#compute the planar angle
#    $c3="plangle ".$ltP{x}." ".$ltP{y}." ".$ltP{z}." ".$C4{x}." ".$C4{y}." ".$C4{z}." ".$P{x}." ".$P{y}." ".$P{z};
#    $c4="plangle ".$C4{x}." ".$C4{y}." ".$C4{z}." ".$P{x}." ".$P{y}." ".$P{z}." ".$rtC4{x}." ".$rtC4{y}." ".$rtC4{z};
	#compute the bonde of C4'-P
	my @bondx1=($C4{x},$C4{y},$C4{z});
	my @bondx2=($P{x},$P{y},$P{z});
	my $bond36=distbond(\@bondx1,\@bondx2);
	#   print "$c1\n$c2\n$chi\n";
	my @tors=qw();
	push @tors,substr(`$c1\n`,0,6);
	push @tors,substr(`$c2\n`,0,6);
#    print "$c1\n$c2\n".$tors[@tors-1]." ".$tors[@tors-2]." ".$tors[@tors-3]."\n";
#    next;
#    push @tors,`$c3\n`;
	#   push @tors,`$c4\n`;
	push @tors,$allanglec4pc4[$t-1]; #allanglec4pc4 are pushed also from 1.
	push @tors,$allanglepc4p[$t-1]; #allanglec4pc4 are pushed also from 1.
	push @tors,$allalpha[$t-1]; #alpha
#    push @tors,1;
#    push @tors,$bond36;
	#push @alltors,@tors[0..1,3..5];
	push @alltors,\@tors;
	$C4{res}=~s/\s+//m;
	$C4{res}=~s/\s+//m;
	die $C4{res} if(!(defined $featmap{$C4{res}}));
	die $! if(!(defined $ltP{res}));
	$C4{resnum}=~s/^\s+//;
	$C4{resnum}=~s/\s+$//;
#    $feature=two_nt_feat($C4{res},$ltP{res});

	my $min=10000;
	my $lab=0;
	for(my $b=0;$b<@labels;$b++)
	{
#	    print STDERR join(";",@tors,$labels[$b]),"\n";
	    my $dij=distbond(\@tors,$labels[$b]);
	    if($dij<$min)
	    {
		$min=$dij;
		$lab=$b;
	    }
	}
	
	$labelerr+=$min;
	push @alllab,  $lab;
	#co-plane checking !!!!!!!
    }
 #   push @rst,\@alltors;
#    exit;
    return @alllab;
}

sub GetSeq{
    my @onechain=@_;
    my @rnaseq;
    for($t=1;$t<@onechain-1;$t++)
    {
	my %nt=%{$onechain[$t]};
	my %C4=%{$nt{"C4'"}};
	$C4{res}=~s/\s+//m;
	push @rnaseq, $C4{res};
    }
    return @rnaseq;
}
sub GetFullSeq{
    my @onechain=@_;
    my @rnaseq;
    for($t=0;$t<@onechain;$t++)
    {
	my %nt=%{$onechain[$t]};
	my %C4=%{$nt{"C4'"}};
	$C4{res}=~s/\s+//m;
	push @rnaseq, $C4{res};
    }
    return @rnaseq;
}

sub GetLabelTorvecs{
    #input chain,labelfile
    my @rst;
    my @onechain=@{$_[0]};
    my $labelfile=$_[1];
    _BioRNA_GetAllBackboneFragments(@onechain);
    open FHlabel,"<$labelfile";

    my @labels=<FHlabel>;

    for(my $i=0;$i<scalar(@labels);$i++)
    {
	chomp($labels[$i]);
	my @labelvec=split/\s+/,$labels[$i];
	$labels[$i]=\@labelvec;
    }
    close FHlabel;
#    reset FHlabel;
#    _BioRNA_GetAllBackboneFragments(@_);
    my @allfeat;
    my @alllab;
    my $labelerr=0; #compute all error in label rounding.
    my @alltors;
    for($t=1;$t<@onechain-1;$t++)
    {
	my %ntleft=%{$onechain[$t-1]};
	my %ntright=%{$onechain[$t+1]};
	my %nt=%{$onechain[$t]};
	my %ltP;
	if($t==1){
	    %ltP=%{$ntleft{"O5'"}}; #'}}
	}
	else{
	    %ltP=%{$ntleft{"P"}};
	}
	my %ltC4=%{$ntleft{"C4'"}};

	my %rtP=%{$ntright{"P"}};#if(!defined($ntright{P})){print scalar(@onechain)."/$t hash undefined.";};
#    %rtC4=%{$ntright{"C4'"}};
	my %C4=%{$nt{"C4'"}};
	my %P=%{$nt{"P"}};
	my %C1=%{$nt{"C1'"}};
	my %O4=%{$nt{"O4'"}};
	#calc torsions leftC4'-leftP (if $i>=2)and leftP-C4'
	if($debug==1)
	{
	    print "-----------\n";
	    print join(" ",values %C4)."\n";
	    print join(" ",keys %ntleft)."\n";
	}
#    $c1="dihe ".$ltP{x}." ".$ltP{y}." ".$ltP{z}." ".$C4{x}." ".$C4{y}." ".$C4{z}." ".$P{x}." ".$P{y}." ".$P{z}." ".$rtC4{x}." ".$rtC4{y}." ".$rtC4{z};
#    $c2="dihe ".$C4{x}." ".$C4{y}." ".$C4{z}." ".$P{x}." ".$P{y}." ".$P{z}." ".$rtC4{x}." ".$rtC4{y}." ".$rtC4{z}." ".$rtP{x}." ".$rtP{y}." ".$rtP{z};
	my $c1="dihe ".$ltP{x}." ".$ltP{y}." ".$ltP{z}." ".$ltC4{x}." ".$ltC4{y}." ".$ltC4{z}." ".$P{x}." ".$P{y}." ".$P{z}." ".$C4{x}." ".$C4{y}." ".$C4{z};
	my $c2="dihe ".$ltC4{x}." ".$ltC4{y}." ".$ltC4{z}." ".$P{x}." ".$P{y}." ".$P{z}." ".$C4{x}." ".$C4{y}." ".$C4{z}." ".$rtP{x}." ".$rtP{y}." ".$rtP{z};
	#compute the planar angle
#    $c3="plangle ".$ltP{x}." ".$ltP{y}." ".$ltP{z}." ".$C4{x}." ".$C4{y}." ".$C4{z}." ".$P{x}." ".$P{y}." ".$P{z};
#    $c4="plangle ".$C4{x}." ".$C4{y}." ".$C4{z}." ".$P{x}." ".$P{y}." ".$P{z}." ".$rtC4{x}." ".$rtC4{y}." ".$rtC4{z};
	#compute the bonde of C4'-P
	my @bondx1=($C4{x},$C4{y},$C4{z});
	my @bondx2=($P{x},$P{y},$P{z});
	my $bond36=distbond(\@bondx1,\@bondx2);
	#   print "$c1\n$c2\n$chi\n";
	my @tors=qw();
	push @tors,substr(`$c1\n`,0,6);
	push @tors,substr(`$c2\n`,0,6);
#    print "$c1\n$c2\n".$tors[@tors-1]." ".$tors[@tors-2]." ".$tors[@tors-3]."\n";
#    next;
#    push @tors,`$c3\n`;
	#   push @tors,`$c4\n`;
	push @tors,$allanglec4pc4[$t-1]; #allanglec4pc4 are pushed also from 1.
	push @tors,$allanglepc4p[$t-1]; #allanglec4pc4 are pushed also from 1.
	push @tors,$allalpha[$t-1]; #alpha
#    push @tors,1;
#    push @tors,$bond36;
	#push @alltors,@tors[0..1,3..5];
	push @alltors,\@tors;
	$C4{res}=~s/\s+//m;
	$C4{res}=~s/\s+//m;
	die $C4{res} if(!(defined $featmap{$C4{res}}));
	die $! if(!(defined $ltP{res}));
	$C4{resnum}=~s/^\s+//;
	$C4{resnum}=~s/\s+$//;
#    $feature=two_nt_feat($C4{res},$ltP{res});

	my $min=10000;
	my $lab=0;
	for(my $b=0;$b<@labels;$b++)
	{
#	    print STDERR join(";",@tors,$labels[$b]),"\n";
	    my $dij=distbond(\@tors,$labels[$b]);
	    if($dij<$min)
	    {
		$min=$dij;
		$lab=$b;
	    }
	}
	
	$labelerr+=$min;
	push @alllab,  $lab;
	#co-plane checking !!!!!!!
    }
    push @rst,\@alllab;
    push @rst,\@alltors;
#    exit;
    
    return @rst;
}

sub GetAllTorsions{
    #input chain,labelfile
    my @rst;
    my @onechain=@{$_[0]};
    _BioRNA_GetAllBackboneFragments(@onechain);
    my @allfeat;
    my @alllab;
    my $labelerr=0; #compute all error in label rounding.
    my @alltors;
    for($t=1;$t<@onechain-1;$t++)
    {
	my @tors=qw();
	my %ntleft=%{$onechain[$t-1]};
	my %ntright=%{$onechain[$t+1]};
	my %nt=%{$onechain[$t]};
	my %ltP;
	#O3'-C3'-C4'-C5'-O5'-P-O3'
	if($t==1){
	    %ltP=%{$ntleft{"O5'"}}; #'}}
	}
	else{
	    %ltP=%{$ntleft{"P"}};
	}
	my %ltC4=%{$ntleft{"C4'"}};
	my %rtP=%{$ntright{"P"}};#if(!defined($ntright{P})){print scalar(@onechain)."/$t hash undefined.";};
	my %rtO5=%{$ntright{"O5'"}};#if(!defined($ntright{P})){print scalar(@onechain)."/$t hash undefined.";};
#    %rtC4=%{$ntright{"C4'"}};
	my %ltO3=%{$ntleft{"O3'"}};
	my %O3=%{$nt{"O3'"}};
	my %C3=%{$nt{"C3'"}};
	my %C4=%{$nt{"C4'"}};
	my %C5=%{$nt{"C5'"}};
	my %O5=%{$nt{"O5'"}};
	my %P=%{$nt{"P"}};

	my %C1=%{$nt{"C1'"}};#for chi
	my %O4=%{$nt{"O4'"}};#for chi

	my $c1="dihe ".$ltO3{x}." ".$ltO3{y}." ".$ltO3{z}." ".$P{x}." ".$P{y}." ".$P{z}." ".$O5{x}." ".$O5{y}." ".$O5{z}." ".$C5{x}." ".$C5{y}." ".$C5{z};
	my $c2="dihe "." ".$P{x}." ".$P{y}." ".$P{z}." ".$O5{x}." ".$O5{y}." ".$O5{z}." ".$C5{x}." ".$C5{y}." ".$C5{z}." ".$C4{x}." ".$C4{y}." ".$C4{z};
	my $c3="dihe "." ".$O5{x}." ".$O5{y}." ".$O5{z}." ".$C5{x}." ".$C5{y}." ".$C5{z}." ".$C4{x}." ".$C4{y}." ".$C4{z}." ".$C3{x}." ".$C3{y}." ".$C3{z};
	my $c4="dihe "." ".$C5{x}." ".$C5{y}." ".$C5{z}." ".$C4{x}." ".$C4{y}." ".$C4{z}." ".$C3{x}." ".$C3{y}." ".$C3{z}." ".$O3{x}." ".$O3{y}." ".$O3{z};
	my $c5="dihe "." ".$C4{x}." ".$C4{y}." ".$C4{z}." ".$C3{x}." ".$C3{y}." ".$C3{z}." ".$O3{x}." ".$O3{y}." ".$O3{z}." ".$rtP{x}." ".$rtP{y}." ".$rtP{z};
	my $c6="dihe "." ".$C3{x}." ".$C3{y}." ".$C3{z}." ".$O3{x}." ".$O3{y}." ".$O3{z}." ".$rtP{x}." ".$rtP{y}." ".$rtP{z}." ".$rtO5{x}." ".$rtO5{y}." ".$rtO5{z};

	#compute the planar angle
	#compute the bonde of C4'-P
	push @tors,substr(`$c1\n`,0,6);
	push @tors,substr(`$c2\n`,0,6);
	push @tors,substr(`$c3\n`,0,6);
	push @tors,substr(`$c4\n`,0,6);
	push @tors,substr(`$c5\n`,0,6);
	push @tors,substr(`$c6\n`,0,6);
	#co-plane checking !!!!!!!
	push @rst,\@tors;
    }
    return @rst;
}

#print "hydrogen bond lengths:\n";
sub GetHydrogenBonds{
    if(0){
	for($i=0;$i<@ssnr;$i=$i+2)
	{
	    %nt =%{$onechain[$ssnr[$i]]};
	    %nt1=%{$onechain[$ssnr[$i+1]]};
	    %c=%{$nt{"C4'"}};
	    %c1=%{$nt1{"C4'"}};
	    print $c{res}." ". $c1{res}.": ";
	    if($c{res} eq 'A' && $c1{res} eq 'U' ) #A-U
	    {
		%an1=%{$nt{"N1"}};
		%an6=%{$nt{"N6"}};
		%un3=%{$nt1{"N3"}};
		%uo4=%{$nt1{"O4"}};
		
		@bondx1=($an1{x},$an1{y},$an1{z});
		@bondx2=($un3{x},$un3{y},$un3{z});
		$bh=distbond(\@bondx1,\@bondx2);
		print "$bh ";
		@bondx1=($an6{x},$an6{y},$an6{z});
		@bondx2=($uo4{x},$uo4{y},$uo4{z});
		$bh=distbond(\@bondx1,\@bondx2);
		print "$bh";
	    }
	    if($c{res} eq 'U' && $c1{res} eq 'A' ) #A-U
	    {
		%an1=%{$nt1{"N1"}};
		%an6=%{$nt1{"N6"}};
		%un3=%{$nt{"N3"}};
		%uo4=%{$nt{"O4"}};
		@bondx1=($an1{x},$an1{y},$an1{z});
		@bondx2=($un3{x},$un3{y},$un3{z});
		$bh=distbond(\@bondx1,\@bondx2);
		print "$bh ";
		@bondx1=($an6{x},$an6{y},$an6{z});
		@bondx2=($uo4{x},$uo4{y},$uo4{z});
		$bh=distbond(\@bondx1,\@bondx2);
		print "$bh";
	    }
	    
	    
	    if($c{res} eq 'C' && $c1{res} eq 'G' ) #A-U
	    {
		%co2=%{$nt{"O2"}};
		%cn3=%{$nt{"N3"}};
		%cn4=%{$nt{"N4"}};
		%gn2=%{$nt1{"N2"}};
		%gn1=%{$nt1{"N1"}};
		%go6=%{$nt1{"O6"}};
		@bondx1=($co2{x},$co2{y},$co2{z});
		@bondx2=($gn2{x},$gn2{y},$gn2{z});
		$bh=distbond(\@bondx1,\@bondx2);
		print "$bh ";
		@bondx1=($cn3{x},$cn3{y},$cn3{z});
		@bondx2=($gn1{x},$gn1{y},$gn1{z});
		$bh=distbond(\@bondx1,\@bondx2);
		print "$bh ";
		@bondx1=($cn4{x},$cn4{y},$cn4{z});
		@bondx2=($go6{x},$go6{y},$go6{z});
		$bh=distbond(\@bondx1,\@bondx2);
		print "$bh";
	    }

	    if($c{res} eq 'G' && $c1{res} eq 'C' ) #A-U
	    {
		%co2=%{$nt1{"O2"}};
		%cn3=%{$nt1{"N3"}};
		%cn4=%{$nt1{"N4"}};
		%gn2=%{$nt{"N2"}};
		%gn1=%{$nt{"N1"}};
		%go6=%{$nt{"O6"}};
		@bondx1=($co2{x},$co2{y},$co2{z});
		@bondx2=($gn2{x},$gn2{y},$gn2{z});
		$bh=distbond(\@bondx1,\@bondx2);
		print "$bh ";
		@bondx1=($cn3{x},$cn3{y},$cn3{z});
		@bondx2=($gn1{x},$gn1{y},$gn1{z});
		$bh=distbond(\@bondx1,\@bondx2);
		print "$bh ";
		@bondx1=($cn4{x},$cn4{y},$cn4{z});
		@bondx2=($go6{x},$go6{y},$go6{z});
		$bh=distbond(\@bondx1,\@bondx2);
		print "$bh";
	    }
	    print "\n";
	}
    }
}




1;
