package BioProtein;
BEGIN{
if(defined $ENV{BIOPERL_DIR}){
    $bioperl_dir= $ENV{BIOPERL_DIR};
}else{
    $bioperl_dir="/home/zywang/program/BioPerl-1.6.1/";
}
if(defined $ENV{PDBTOOLS_DIR}){
    $pdbtools_dir= $ENV{PDBTOOLS_DIR};
}else{
    $pdbtools_dir="/home/zywang/work/pdbtools/";
}

}
use lib "$pdbtools_dir";

use List::Util qw(first max maxstr min shuffle sum);
use POSIX;
use Math::Trig qw(acos);

#my $HOME="
use Math::MatrixReal ;
#This package based on BioRNA, but deal with proteins PDB
#Wishlist: get cordinates bfactors SS of residues/atoms

#initialize: loading table of amino acid information
$DEBUG=0;
$aaproperties=<<END;
Alanine Ala A nonpolar neutral 1.8
Arginine Arg R polar positive 4.5
Asparagine Asn N polar neutral 3.5
AsparticAcid Asp D polar negative 3.5
Cysteine Cys C nonpolar neutral 2.5
GlutamicAcid Glu E polar negative 3.5
Glutamine Gln Q polar neutral 3.5
Glycine Gly G nonpolar neutral 0.4
Histidine His H polar neutral 3.2
Isoleucine Ile I nonpolar neutral 4.5
Leucine Leu L nonpolar neutral 3.8
Lysine Lys K polar positive 3.9
Methionine Met M nonpolar neutral 1.9
Methionine Mse M nonpolar neutral 1.9
Phenylalanine Phe F nonpolar neutral 2.8
Proline Pro P nonpolar neutral 1.6
Serine Ser S polar neutral 0.8
Threonine Thr T polar neutral 0.7
Tryptophan Trp W nonpolar neutral 0.9
Tyrosine Tyr Y polar neutral 1.3
Valine Val V nonpolar neutral 4.2
END

    %AA3toAA1=qw{ALA A ARG R ASN N ASP D CYS C GLU E GLN Q GLY G HIS H ILE I LEU L LYS K MET M MSE M PHE F PRO P SER S THR T TRP W TYR Y VAL V };
#open FH,"/home/zywang/work/pdbtools/aa.properties.csv" or die "$!";

@aaproplines=split/\n/,$aaproperties;
%aamap=qw();
for $laa(@aaproplines)
{
    chomp($laa);
    my @aa=split/\s+/,$laa;
    push @aaprop, \@aa;
    $aamap{uc $aa[1]}=$aa[2];
}
#close FH;

#----------subroutines
sub SSendError{
    #suppose the alignment is good. 
    #for each matched pair, the 
    
}
sub BetaShiftError{
    #Interaction error
    #In one correct interaction, compute the shift from the correct beta alignment
}
sub BetaContactError{
    #for each of beta contact, the value is 1 if the given contact partner is the native partner
    #return the average value of all beta contacts.
}
sub SUContactError{
    #compare the difference between two SU contact matrices, R1 and R2.
}
sub PSSaccu{
    my @res=qw(0 0 0);
    my @s=@{$_[0]};
    my @t=@{$_[1]};
    my $n=0;
    for(my $i=0;$i<@s;$i++)
    {
	if($s[$i]==$t[$i]){
	    $res[$s[$i]]++;
	    $n++;
	}
    }
    return ($n/scalar(@s),$res[0]/@s,$res[1]/@s,$res[2]/@s);
}
sub Sov
{
    #input $_[0] ,$_[1] are two sequence of SS units
    #my @p=@_;
    #my $s0=$_[2];
    #my $s1=$_[3];
    
    my @ss0=@{$_[0]}; #first sequence usually as native. with states of {0,1,2}
    my @ss1=@{$_[1]};
    my @ss0rst=GetSSindex(@ss0);
    my @ss0index=@{$ss0rst[0]};
    my @ss1rst=GetSSindex(@ss1);
    my @ss1index=@{$ss1rst[0]};
    #warn join(" ",@ss0index);
    #warn "head ",join(" ",@{$ss0rst[1]});
    #warn "tail ",join(" ",@{$ss0rst[2]});
    #warn join(" ",@ss1index);
    my @sov=qw(0)x3;
    my @nsov=qw(0)x3;
    for(my $s=0;$s<=2;$s++){
	#compute SOV-$s
	for(my $i=0;$i<=$ss0index[-1];$i++){
	    next if($s!= $ss0[$ss0rst[1][$i]]);
	
	    $nsov[$s]=$nsov[$s]+$ss0rst[3][$i];
	    for(my $j=0;$j<=$ss1index[-1];$j++){
		next if($s!= $ss1[$ss1rst[1][$j]]);
	
		my $flagOverlap=(!( ($ss0rst[2][$i]<$ss1rst[1][$j])||($ss1rst[2][$j]<$ss0rst[1][$i]) ));
		if($flagOverlap){
		    my $maxov;
		    my $minov;
		    $minov=min($ss0rst[2][$i],$ss1rst[2][$j])-max($ss0rst[1][$i],$ss1rst[1][$j])+1;
		    die "$ss0rst[2][$i] $ss1rst[2][$j] $ss0rst[1][$i] $ss1rst[1][$j]" if($minov<0);
		    $maxov=max($ss0rst[2][$i],$ss1rst[2][$j])-min($ss0rst[1][$i],$ss1rst[1][$j])+1;		  
		    
		    my $lens1=$ss0rst[3][$i];
		    my $lens2=$ss1rst[3][$j];
		    
		    my $delta=min($maxov-$minov,$minov,int(0.5*$lens1),int(0.5*$lens2));
		    die if($delta<0);
		    $sov[$s]=$sov[$s]+($minov+$delta)/$maxov*$lens1;
		    
		}
		
	    }
	    #if($flag){$nsov[$s]++};
	}
	#$sov[$s]=$sov[$s]/$nsov[$s];
    }
    
    return sum(@sov)/scalar(@ss0);
    # by default to compute average of 
    #print STDERR join("",@{$_[0]}),"\n";
    #print STDERR join("",@{$_[1]}),"\n";
    warn "NOT same length for computing two SS sequence!!!!!" if(scalar(@{$_[0]})!=scalar(@{$_[1]}));
    if(@{$_[0]}>1){
	$p[0]=join("",@{$_[0]});
    }
    if(@{$_[1]}>1){
	$p[1]=join("",@{$_[1]});
    }
    @_=@p;
    print STDERR "$p[0]\n";
    
    for(my $i=0;$i<length($p[0]);$i++){
	    if(substr($p[0],$i,1) eq substr($p[1],$i,1)){
		print STDERR "." ;
	    }else{
		print STDERR " " ;
	    }
    }
    print STDERR "\n";
    print STDERR "$p[1]\n";
    my $begin1=0;
    my $begin2=0;
    my $end2=0;
    my $sov=0;
    for(my $i=0;$i<length($_[0])-1;$i++)
    {
	my $end1=$i;
	if(substr($_[0],$i+1,1) eq substr($_[0],$i,1))
	{
	    next;
	}
	#calculate the sov
	my $delta;
	while($end2<$end1)
	{
	    while(substr($_[1],$end2+1,1) eq substr($_[1],$end2,1))
	    {
		$end2++;
	    }
	    
	    my $delta=0;
	    my $minov=0;
	    $maxov=max($end2,$end1)-min($begin1,$begin2);
	    if(substr($_[0],$begin1,1) eq substr($_[1],$begin2,1))
	    {
		#This is correct in the assumption that s1 and s2 have non-zero overlap.
		$minov=min($end2,$end1)-max($begin1,$begin2);
		$delta=min(int(($end2-$begin2)/2),int(($end1-$begin1)/2),$minov,$maxov-$minov);
	    }
	    else
	    {
		$minov=0;
	    }
	    $sov=$sov + ($minov+$delta)/$maxov*($end1-$begin1+1);
	    $begin2=$end2+1;
	    $end2=$begin2;
	    $begin1=$i+1;
	} 
    }	
    $sov=$sov/length($_[0]);
    return  $sov;
}

sub ParseProteinPDB{
    open FIN,"<$_[0]" or die "no pdb file $_[0] $!";
    my @dihedrals;
    my @allatoms;
    my @onechain=qw();
    my %atomByRes;
    my %atomByRelRes;
    my @caNums;#from ca's res num to atomnums
    my @seq;
    my @pdbres;#pdbres[the absolute residue number ]=pdb residue nubmer;
    my $resnum0=-1.11;
    my @mpAtmRsd=qw();
    my @caPdbnum=qw();
    my $absRes=0;
    my %lastAtom;
    my @caByAbsRes=qw();
    my @oByAbsRes=qw();
    my @nByAbsRes=qw();
    my @cbByAbsRes=qw();
#read pdb file
    while(<FIN>){
	chomp;
	if(/^END/){last;}
	if(/^TER/){last;}#only parse the first model 
	my %ln=parseline($_);
	if($ln{isatom} && $ln{element} ne "H"){
	    $ln{chain}=~s/\s+//;
	    if((defined $_[1]) && ($ln{chain} ne "") && ($ln{chain} ne $_[1])){
		print STDERR "not this chain\n";
		next; #check if the chain is the given chain
	    }
	    if(!isdigit(substr($ln{resnum},length($ln{resnum})-1,1) )  ){ 	
		#deal with replicated residue number ,such as 123A
		next;
	    }
	    push @allatoms, \%ln;
#build all atom/residue number list
#renumbering residues
	    my $res=$ln{resnum};
	    
	    if( (defined $lastAtom{resnum}) && ($ln{resnum}!=$lastAtom{resnum} )) {
		#$absRes=$absRes+$ln{resnum}-$lastAtom{resnum} ; # deal with residue index gap
		$absRes=$absRes+1;
		#it may cause the problem that some caByAbsRes is undefined.
	    }
	    if($resnum0==-1.11){
		$resnum0=$res; #first residue number;
	    }
	    my $atomname=$ln{atom};
	    $atomByRes{"$res$atomname"}=@allatoms-1;# get atom hash from pdb residue number and atom name, $allatoms[$atomByRes{"1CA"}];
	    my $relRes=$res-$resnum0;
	    $atomByRelRes{"$relRes$atomname"}=@allatoms-1;# get atom hash from absolute residue number [0,..] and atom name, $allatoms[$atomByRelRes{"1CA"}];
	    if($ln{atom} eq 'CA')
	    {
#	push @caNums,$atom{anum};
		$caNums[$relRes]=@allatoms-1;
		$caByAbsRes[$absRes]=@allatoms-1;#$ln{anum}+0; if we use allatoms to pullout atom, we need positions in allatoms
		push @caPdbnum,$ln{anum}+0;
	    }
	    if($ln{atom} eq 'N')
	    {
		$nByAbsRes[$absRes]=@allatoms-1;#$ln{anum}+0; if we use allatoms to pullout atom, we need positions in allatoms
	    }
	    if($ln{atom} eq 'O')
	    {
		$oByAbsRes[$absRes]=@allatoms-1;#$ln{anum}+0; if we use allatoms to pullout atom, we need positions in allatoms
	    }
	     if($ln{atom} eq 'CB')
	    {
		$cbByAbsRes[$absRes]=@allatoms-1;#$ln{anum}+0; if we use allatoms to pullout atom, we need positions in allatoms
	    }
	   
	    $mpAtmRsd[$ln{anum}]=$res;
			
	    #To get the CA atom by absolute residue number, use $allatoms[$caNums[0]];
	    %lastAtom=%ln;
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
	if(defined $h{$ln{atom}}){#Use $nt{"CA"} to access atom CA.
	    $nt{$ln{atom}}=\%ln;
	}

	if($i==@allatoms-1){#handle last nt.
	    my %newnt=%nt;
	    push @seq,$ln{res};
	    push @pdbres,$ln{resnum};
	    push @onechain,\%newnt;#end current residue
	    %nt=qw();
	    $resnummap{$ln{resnum}}=scalar(@onechain)-1;
	}
	else{    
	    my %lnnext=%{$allatoms[$i+1]};
	    if($lnnext{resnum}!=$ln{resnum}){#check if a current residue ends
		my %newnt=%nt;
		push @seq,$ln{res};
		push @pdbres,$ln{resnum};
		if((defined $nt{P}) && (defined $nt{"C4'"} ) ){ #check completeness of a residue
		    push @onechain,\%newnt;
		    $resnummap{$ln{resnum}}=scalar(@onechain)-1; #res num in pdb --> relative index in onechain.
		}
		else{
		    if(defined $nt{"CA"} && scalar(@onechain)==0 ){
			push @onechain,\%newnt;
			$resnummap{$ln{resnum}}=0;
		    }
		    else{
#			print STDERR "drop an incomplete residue at ".scalar(@onechain)."\n";
		    }
		}
		%nt=qw();
	    }
	}
    }
    my @res;
    push @res, \@onechain;#0,
    push @res, \@allatoms;#1
    push @res, \%atomByRes;#2
    push @res, \%atomByRelRes;#3
    push @res, \@caNums;#4, old, problematic, do not use.
    push @res, \@seq;#5
    push @res, \@pdbres;#6
    push @res, \@mpAtmRsd; #7 $mpAtmRsd[pdb atom number]=[pdb residue number]
    push @res, \@caPdbnum; #8 $mpAtmRsd[pdb atom number]=[pdb residue number]
    push @res, \@caByAbsRes; # 9 $caByAbsRes[]=ca atom number;absres is starting from 0, equal to dssp residue position.
#    print STDERR "\n ",scalar(@res)," returned\n";
    push @res, \@nByAbsRes; #10
    push @res, \@oByAbsRes; #11
    push @res, \@cbByAbsRes; #12
    
    return @res;
}


#parse a PDB ATOM line
sub parseline($)
{
    #my    $atom=substr($_,12,4); #Extrat the atom  
    #$atom =~ s/^\s+//;
    #$atom =~ s/\s+$//;
    if( (substr($_,0,4) ne "ATOM") && (substr($_,0,4) ne "HETA") &&  (index(substr($_,12,4),'OXT')==-1) ) 
    {
	$result{isatom}=0;
    }
    else{
    $atom=substr($_,12,4); #Extrat the atom  
    $atom =~ s/^\s+//;
    $atom =~ s/\s+$//;
    $result{atom}=$atom; #atom name
    $result{anum}=substr($_,6,5);#atom number in pdb
    $result{res}=substr($_,17,3);#residue name
    $result{res}=~s/\s+//;
    $result{res}=~s/\s+//;
    $result{resnum}=substr($_,22,26-23+1);
    $result{resnum}=~s/\s+//;
    $result{resnum}=~s/\s+//;#residue pdb number
    $result{chain}=substr($_,21,1);#chain name
    $result{x}=substr($_,30,38-31+1);
    $result{y}=substr($_,38,46-39+1);
    $result{z}=substr($_,46,54-47+1);
    $result{bf}=substr($_,60,66-61+1) if(length($_)>59);
    $result{occu}=substr($_,54,60-55+1) if(length($_)>59);
    $result{element}=substr($_,76,2) if(length($_)>=78);
    $result{element}=~s/\s+//g;
    $result{charge}=substr($_,78,2) if(length($_)>=80);
    $result{isatom}=1;
    }
    return %result;
}

sub GetSeq
{
    #input: @res from ParseProteinPDB;
    #output: @seq contain sequence of amino acids
    my @seq=@{$_[5]};
#    print STDERR join(",",@seq);
    @seq=map{$aamap{uc $_} } @seq ;
    return @seq;
}

sub GetBfactors
{
    #input: the array returned by ParseProteinPDB
    #output: @res, $res[i]=bfactor at residue i.
}

sub GetSS8
{
    #input: @res ,dssp file name
    #output: @res,
}

sub GetSSend
{
}

sub GetContactNumber
{
    #Input dssp output, parseProtein pdb output
    #Output: contact number at residue i
}




sub GetMapAtomRes
{
#return all ca atoms numbers 
my @caNums;
my @mpNumName;
open fhPDB,"<$_[0]";
while(<fhPDB>)
{
    chomp;
    if(!/^ATOM/){
	next;
    }
    my %atom=BioProtein::parseline($_);
    $atom{anum}=~s/\s+//g;
    if($atom{atom} eq 'CA')
    {
#	push @caNums,$atom{anum};
	$caNums[$atom{anum}]=$atom{resnum};
    }
    $mpNumName[$atom{anum}]=$atom{resnum};#.$atom{atom};
}
close fhPDB;
#return @mpNumName;
return @caNums;
}

sub AtomDist
{
    my %a1=%{$_[0]};
    my %a2=%{$_[1]};
    print STDERR $a1{x}." ".$a1{y}." ".$a1{z}." ".$a2{x}." ".$a2{y}." ".$a2{z}."\n" if($DEBUG);
    my $res=($a1{x}-$a2{x})**2;
    $res=$res+($a1{y}-$a2{y})**2;
    $res=$res+($a1{z}-$a2{z})**2;
    $res=sqrt($res);
    return $res;
}

sub VecDist
{
#    print @_+0;
    my @a1=@{$_[0]};
    my @a2=@{$_[1]};
#    print ":",@a2+0,": ";
    my $res=0;
    for(my $i=0;$i<@a1;$i++)
    {
	next if(  $a1[$i]<0 || $a2[$i]<0);
	$res=$res+( $a1[$i] - $a2[$i] )**2;
    }
    $res=sqrt($res);
 #   print $res,", ";
    return $res;
}

sub getPDBid
{
#input filename of a pdb file
#output: pdbid , with suffix,dir  removed
    my $f=$_[0];
    my @p=qw();
    if($f=~/\//){
	@p=split/\//,$f;
	$f=$p[@p-1];
    }
    @p=split(/\./,$f);
    if(scalar(@p)>1)
    {
	
	$f=join(".",@p[0..scalar(@p)-2]);
    }
    return $f;
}

sub ReadFasta
{
    open FSEQ,"<$_[0]" or die $!;
    my @seqlines=<FSEQ>;
    my $seq="";
    for($i=0;$i<scalar(@seqlines);$i++)
{
    if($seqlines[$i]=~/^>/){}
    else{
        chomp($seqlines[$i]);
        $seqlines[$i]=~s/\s+//g;
        $seq=$seq.$seqlines[$i];
    }
}
$seq=uc $seq;
$seq=~m/[ARNDCQEGHILKMFPSTWYVX]*/g;
die "The sequence contains unknown amino acids other than ARNDCQEGHILKMFPSTWYVX \n" if ($seq ne $&);
close FSEQ;
return $seq;
}

sub ReadRSR
{
    my @res;
    open FH,"<$_[0]";
    while(<FH>)
    {
	chomp;
	next if(!/^R/);
	my @p=split/\s+/;
	push @res,\@p;
    }
    close FH;
    return @res;
}

sub RemovePhysicalRestraints
{
    my @res;
    my @rsrs=@_;
    for(my $i=0;$i<@rsrs;$i++)
    {
	my @p=@{$rsrs[$i]};
	if(($p[1]==3 || $p[1]==10)){
		#only consider gaussian and spline
	}else{
		
	    next;
	} 
	
	if(@p==12 && $p[11]>0.07 && $p[4]==9){
	    push @res,\@p;
	}
	
	if($p[1]==10 && $p[3]==1 && ($p[4]==26||$p[4]==9) && $p[5]==2 && $p[7]==1){
	    #the spline part should be kept.	#R   10  16   1  26   2  22   1
	    push @res,\@p;
	}
    }
    return @res;
}

sub GetNonPhysicalRestraint
{
	my @rsrs=@_;

    my @res;
    my @caRsr;
    my @noRsr;
    my @miscRsr;
    my @tailRsr;
    my @phyRsr;
    for(my $i=0;$i<@rsrs;$i++)
    {
	if( $rsrs[$i][1]==3 && $rsrs[$i][4]==9 && $rsrs[$i][11]>0.07){
	    push @caRsr,$rsrs[$i];
	}
	elsif( $rsrs[$i][1]==10 && $rsrs[$i][4]==9){
	    push @caRsr,$rsrs[$i];
	}elsif( $rsrs[$i][1]==3 && $rsrs[$i][4]==10 && $rsrs[$i][11]>0.07){
	    push @noRsr,$rsrs[$i];
	}
	elsif( $rsrs[$i][1]==10 && $rsrs[$i][4]==10){
	    push @noRsr,$rsrs[$i];
	}elsif( ($rsrs[$i][1]==3|| $rsrs[$i][1]==10) && $rsrs[$i][4]==23){
	    push @tailRsr,$rsrs[$i];
	}elsif( ($rsrs[$i][1]==3|| $rsrs[$i][1]==10) && $rsrs[$i][4]==26){
	    push @tailRsr,$rsrs[$i];
	}elsif( ($rsrs[$i][1]==3|| $rsrs[$i][1]==7 || ( $rsrs[$i][1]==9 &&  $rsrs[$i][4]==25 )) ){
	    push @phyRsr,$rsrs[$i];
	}else{
	    push @miscRsr,$rsrs[$i];
	}
	
    }
    for(my $i=0;$i<@miscRsr;$i++){
	
    }
    return (\@caRsr,\@noRsr,\@phyRsr,\@tailRsr,\@miscRsr);
}

sub GetPhysicalRestraints
{
    my @res;
    my @rsrs=@_;
    for(my $i=0;$i<@rsrs;$i++)
    {
	my @p=@{$rsrs[$i]};
	next if($p[1]!=3); #only physical restraints have form !=3
	if(@p==12 && $p[11]>0.1){
	}
	else{
	    push @res,\@p;
	}
    }
    return @res;
}


sub FilterCA{
    my @pdbres=@{$_[1]};
    my %caNums=map{$_ => 1} @{$pdbres[8]};
#    print join(" ",@{$pdbres[8]}),"\n";

    my @rsrset=@{$_[0]};
    my @res;
    for(my $i=0;$i<@rsrset;$i++){
	my @items=@{$rsrset[$i]};
#	    print  $items[8]," ",$items[9],"\n" ;
	if( (defined $caNums{$items[8]}) && (defined $caNums{$items[9]}) )
	{
	    if( (1==$caNums{$items[8]}) && (1==$caNums{$items[9]}) )
	    {
		push @res,\@items;
	    }
	}
    }
    return @res;
}

sub FilterNonCA{
    my @pdbres=@{$_[1]};
    my %caNums=map{$_ => 1} @{$pdbres[8]};
#    print join(" ",@{$pdbres[8]}),"\n";

    my @rsrset=@{$_[0]};
    my @res;
    for(my $i=0;$i<@rsrset;$i++){
	my @items=@{$rsrset[$i]};
#	    print  $items[8]," ",$items[9],"\n" ;

	if( (defined $caNums{$items[8]}) && (defined $caNums{$items[9]}) ){
	    if( (1==$caNums{$items[8]}) && (1==$caNums{$items[9]}) ){
	    }
	}
	else{
	    push @res,\@items;
	}
    }
    return @res;
}




#=============Some math subroutines==========
sub meanvar{
    my $mm;
    my @data=@_;
    $mm=sum(@data);
    $mm=$mm/scalar(@data);
    $var=0;
    for(my $i=0;$i<@data;$i++){
	$var=$var+($data[$i]-$mm)**2;
    }
    $var=$var/scalar(@data);
    return($mm,$var);
}
sub KLdiv
{ #stupid implementation ,do not use again.
	#No examination of if the two input arrays are probability
#    print STDERR $_[0],"\n",$_[1],"\n";
    my @p1=split/\s+/,$_[0];
    my @p2=split/\s+/,$_[1];
    my $res=0;
    my $n1=0;
    my $n2=0;
    map{$_=exp($_)} @p1;
    map{$_=exp($_)} @p2;
    map{$n1=$n1+$_} @p1;
    map{$n2=$n2+$_} @p2;
    for(my $i=0;$i<@p1;$i++)
    {
	$res=$res+log($p1[$i]/$n1/$p2[$i])*$p1[$i]/$n1;
    }
    return $res;
}

sub KLdivNorm
{
#Normalize the vector first;
#    print STDERR $_[0],"\n",$_[1],"\n";
    my @p1=@{$_[0]};
    my @p2=@{$_[1]};
    print STDERR "@p1 has different lenght with @p2\n" if(scalar(@p1)!=scalar(@p2));
    my $res=0;
    my $n1=0;
    my $n2=0;
    $eps=1e-10;
    my $sum1=sum(@p1)+scalar(@p1)*$eps;
    my $sum2=sum(@p2)+scalar(@p2)*$eps;
    print STDERR "@p1 or @p2 is 0\n" if($sum1==0 || $sum2==0);

    @p1=map{($_+$eps)/$sum1}@p1;
    @p2=map{($_+$eps)/$sum2}@p2;
    
    for(my $i=0;$i<@p1;$i++)
    {
	$res=$res+log($p1[$i]/$p2[$i])*$p1[$i];
    }
    return $res;
}


sub PredictSStemp{ # predict ss3 of target from template ss 
    #input is ss in number of template, arTarTemp, len of target
    my @tempSS=@{$_[0]};
    my @arTarTemp=@{$_[1]};
    my $len=$_[2];
    my @res; 
    for(my $i=0;$i<$len;$i++){
	if($arTarTemp[$i]!=-1){
	    $res[$i]=$tempSS3[$arTarTemp[$i]];
	}
	else{
	    $res[$i]=2; #other with unalinged is marked as loop
	}
    }
    return @res;
} 
sub GetSSindex{
    #this sub will assign a number for each consecutive SS segment. The numbers are returned, which can be used to tell if two residue are in the same ss segment.
    #It works on either ss3 or ss8.
    my @ss=@_;
    my @res;
    my $ssi=0;
    my @sshead;
    my @ssend;
    my @sslen;
    $sshead[0]=0;
    for(my $i=0;$i<@ss;$i++){
	if($i>0 && $ss[$i] ne $ss[$i-1]){
	    $ssi++;
	    $sshead[$ssi]=$i;
	    $ssend[$ssi-1]=$i-1;
	    $sslen[$ssi-1]=$ssend[$ssi-1]-$sshead[$ssi-1]+1;
	}
	$res[$i]=$ssi;
    }
    $ssend[$ssi]=scalar(@ss);
    $sslen[$ssi]=$ssend[$ssi]-$sshead[$ssi]+1;
    return (\@res,\@sshead,\@ssend,\@sslen);
}

sub RigidInitial{
    #read a pdb with definition of @rstpdb,@rigidParts, return a valid initial structure keeps rigid parts unchanged.
    my @pdbrst=@{$_[0]}; #read amino acid from it.
    #!!!! see the test.ini.0.pdb , a residue number error.
    my @caByAbsRes=@{$pdbrst[9]};
    my @aaByAbsRes;
    for(my $i=0;$i<@caByAbsRes;$i++){
	$aaByAbsRes[$i]=$pdbrst[1][$caByAbsRes[$i]]{res};
    }
    my @rigidFileList=@{$_[1]};
    
    #my @rigid=@{$_[1]};
    my @ss=@{$_[2]};# pred 3-class ss
    my $iniFilename=$_[3];
    my $dType=$_[4];
    my $allfix=$_[5];
    @ssinfo=GetSSindex(@ss);
    
    #$rigidFileList[0]=($head,$tail,$filename);
    #set some values.
    my $tgtlen=scalar(@ss);
    warn "len ",$tgtlen;
    warn "ss ",join("",@ss);
    $pRigid=0;
    my @rigidIndex=qw(-2)x scalar(@ss);
    my @rigidType=qw(0)x scalar(@ss);
    for(my $i=0;$i<@ss;){
	if(scalar(@rigidFileList)>0 && $pRigid < scalar(@rigidFileList) && $i==$rigidFileList[$pRigid][0]-1){
	    my @pdbrst=ParseProteinPDB($rigidFileList[$pRigid][2]); #ddd
	    $rigidParts[$i]=\@pdbrst;
	    $rigidType[$i]=1;
	    warn "size of rigid part $i ,$pRigid, ",scalar(@{$rigidParts[$i]})," in pdb " ,$rigidFileList[$pRigid][2];
	    
	    $rigidIndex[$i]=1;
	    $i=$i+$rigidFileList[$pRigid][1]-$rigidFileList[$pRigid][0]+1;
	    $pRigid++;
	}else{
	    if(0 && $ss[$i] eq 'H'){ # helix
		#$rigidIndex[$i]=$ssindex[$i];
		$ssidx=$ssinfo[0][$i];
		$helixLen=$ssinfo[3][$ssidx];###
		$rigidIndex[$i]=1;
		$rigidParts[$i]=GetHelix($helixLen);
		$i=$i+$helixLen;
	    }#elsif($ss[$i] eq 'C'){
		# $ssidx=$ssinfo[0][$i];
		# $loopLen=$ssinfo[3][$ssidx];###
		# $rigidIndex[$i]=1;
		# $rigidParts[$i]=GetLoopSimple($loopLen);
		# $i=$i+$loopLen;
	    # }
	    else{
		$rigidIndex[$i]=-1;
		$i++;
	    }	    
	}
    }
    warn join("",@rigidIndex);
    @currPos=qw(0 0 0);
    @direct=qw(1 0 0);
 
    #rigid body can be predicted SS segments. 
    #build ca
    #1.sequential every SS
    @direct=qw(-1 -1 0); #along x-axis
    $cCaCa=3.8;
    warn "len ",$tgtlen;
    for(my $i=0;$i<$tgtlen;){ # $i indicate the res number we are moving along the sequence
	#if the next is loop. move next ca position
	warn "res $i $rigidIndex[$i]";
	if($rigidIndex[$i]<0){ #no rigid
	    my @p=@currPos;
	    $startResNum=1 if scalar(@allatom)==0;
	    $startResNum=$allatom[-1]{resnum}+1 if scalar(@allatom)!=0;
	    $startAtomNum=scalar(@allatom)+1;
	    my @atomlist;
	    push @atomlist,\@p;
	    my @resnameList;
	    push @resnameList,$aaByAbsRes[$startResNum-1];
#	    warn "resnameList ",join(" ",@resnameList);
	    push @allatom,MakeCaAtom($startResNum,$startAtomNum,\@atomlist,\@resnameList);
	    
	    for(my $j=0;$j<3;$j++){
		$currPos[$j]=$currPos[$j]+$direct[$j] * $cCaCa; #
	    }
	    warn "single ",$startResNum," $aaByAbsRes[$startResNum];";
	    $i++;
	}else{
	    my @rigid=@{$rigidParts[$i]};
	    if($rigidType[$i]==0){ 
		warn "helix part at $i ",scalar(@rigid);
		#if the coming one is a rigid part
		#we have two choice,
		#1. make the first and last point to the current direction (keep unchanged)
		#2. make the first and second point to the current direction
		#    and the last-1 and the last for new current direction, 
		#
		#3. make the first to center point to the current direction
		#    and the center to the last for new current direction, 
		#4. make the first to center point to the current direction
		#    and the center to the last for new current direction, 
		
		($rst,$newDirect) =RigidTransfer(\@rigid,\@currPos,\@direct,'first'); #not conflict-free gauranteed.
		@rigidTrans=@{$rst};
		$startResNum=1 if scalar(@allatom)==0;
		$startResNum=$allatom[-1]{resnum}+1 if scalar(@allatom)!=0;
		$startAtomNum=scalar(@allatom)+1;
		my @atomlist;
		push @atomlist,@rigidTrans;
		my @resnameList;
		push @resnameList,@aaByAbsRes[$startResNum-1..scalar(@aaByAbsRes)-1];
		push @allatom,MakeCaAtom($startResNum,$startAtomNum,\@atomlist,\@resnameList);
		#compute next currPos,	
		@currPos=@{$rigidTrans[-1]};

		$i=$i+scalar(@rigidTrans);
	    }else{
		#trans protein with full atoms.
		warn "pdb part at $i ",scalar(@rigid);
		
		if($allfix eq 'allfix'){
		    #update newDirect;
		}else{
		    ($rst,$newDirect) =ProteinTransfer(\@rigid,\@currPos,\@direct,$dType); #not conflict-free gauranteed.
				#compute next direction
		}
		if($dType eq 'first'){
		    @direct=@{$newDirect};
		}
		$startResNum=1 if scalar(@allatom)==0;
		$startResNum=$allatom[-1]{resnum}+1 if scalar(@allatom)!=0;
		$startAtomNum=scalar(@allatom)+1;
#		die;
		my  @cabyabsres=@{$rigid[9]};warn "cabyabsres ",scalar(@cabyabsres),":",join(" ",@cabyabsres);
		my $lastca=$cabyabsres[-1];warn "lastca $lastca"; 		
		@currPos=( $rigid[1][$lastca]{x},$rigid[1][$lastca]{y},$rigid[1][$lastca]{z});
		for(my $j=0;$j<3;$j++){
		    $currPos[$j]=$currPos[$j]+$direct[$j] * $cCaCa; #
		}

		warn "new direct ",join(" ",@direct);
		AtomShiftResNum($startResNum,$startAtomNum,\@rigid);
		push @allatom,@{$rigid[1]}; # push all atoms in the allca
		 warn "after pdb ", $allatom[-1]{res};
		#die "after pdb ", $allatom[-1]{resnum}+1;
		$i=$i+scalar(@cabyabsres);
		warn "ca added ",scalar(@cabyabsres);
	    }	
	}
	#RigidTrans(firstAtomCordinate,begin,end,@allatoms), return all the atoms, 
	#set the current atom the last of the rigid, 
	#go to next non-rigid residue.
	#push @allca;
    }
    #save the ca atoms.
    #@allatom=@{$pdbrst[1]};
    #@caByAbsRes=@{$pdbrst[9]};
    warn "allca ",scalar(@allatom);
    open FHINI,">$iniFilename";
    for(my $i=0;$i<@allatom;$i++){
	my  $line=PrintAtom($allatom[$i]);
	print FHINI $line,"\n";

#	$notAtom=(!(defined $allca[$i]{x}));
#	if($notAtom){
#	my  $line=PrintCA($i,$allatom[$caByAbsRes[$i]]{res}, $allatom[$caByAbsRes[$i]]{chain}, $allca[$i][0], $allca[$i][1], $allca[$i][2], $allatom[$caByAbsRes[$i]]{occu}, $allatom[$caByAbsRes[$i]]{bf}, $allatom[$caByAbsRes[$i]]{element},$allatom[$caByAbsRes[$i]]{charge});
#	print FHINI $line,"\n";
#	}else{
		#print atoms.
#	}
    }
    close FHINI;
    #WriteCa();
    #2. turn loop towarding the next mass center of the SS on template relative previous SS. (may be conflict).
}
sub AtomShiftResNum{
    my $startResNum=$_[0];
    my $startAtomNum=$_[1];
    my @rigid=@{$_[2]}; #pdb parse result
    my $r0=$rigid[1][0]{resnum};
    my $a0=$rigid[1][0]{anum};
    
    for(my $i=0;$i<@{$rigid[1]};$i++){
	$rigid[1][$i]{resnum}=$rigid[1][$i]{resnum}-$r0+$startResNum;
	$rigid[1][$i]{anum}=$rigid[1][$i]{anum}-$a0+$startAtomNum;
    }
    return @rigid;
}
sub MakeCaAtom{
    my $res0=$_[0];
    my $atom0=$_[1];
    my @atoms=@{$_[2]};
    my @resnames=@{$_[3]};
    warn "makecaatom resnames of $res0 $atom0  ",scalar(@atoms)," atoms ",join(" ",@resnames);
    my @rst;
    for(my $i=0;$i<@atoms;$i++){
	my %result;
	   $result{atom}="CA"; #atom name
    $result{anum}=$atom0+$i;#atom number in pdb
    $result{res}=$resnames[$i];#residue name
    $result{resnum}=$res0+$i; 
    $result{chain}="";#substr($_,21,1);#chain name
    $result{x}=$atoms[$i][0];
    $result{y}=$atoms[$i][1];
    $result{z}=$atoms[$i][2];
    $result{bf}=1;
    $result{occu}=1;
    $result{element}="C";
    $result{charge}="";
    push @rst,\%result;
    
    }
    return @rst;
}

sub PrintAtom{ # old , do not use
   #my ($i,$allatom[$caByAbsRes[$i]]{res}, $allatom[$caByAbsRes[$i]]{chain}, $allca[$i][0], $allca[$i][1], $allca[$i][2], $allatom[$caByAbsRes[$i]]{occu}, $allatom[$caByAbsRes[$i]]{bf}, $allatom[$caByAbsRes[$i]]{element},$allatom[$caByAbsRes[$i]]{charge})=@_;
    my %atom=%{$_[0]};
    #	$allatom[$caByAbsRes[$i]]{x}=$allca[$i][0];
	# 1 -  6        Record name   "ATOM  "
	my $line="ATOM  ";
	# 7 - 11        Integer       serial       Atom  serial number.
	$line=$line.sprintf("%5d ",$atom{anum});
	# 13 - 16        Atom          name         Atom name.
	#$line=$line." CA ";
	$line=$line." ".sprintf("%-3s",$atom{atom});
	# 17             Character     altLoc       Alternate location indicator.
	$line=$line." ";
	# 18 - 20        Residue name  resName      Residue name.
	$line=$line.sprintf("%3s ",$atom{res});
	# 22             Character     chainID      Chain identifier.
	$line=$line.sprintf("%1s",$atom{chain});
	# 23 - 26        Integer       resSeq       Residue sequence number.
	$line=$line.sprintf("%4d",$atom{resnum});
	# 27             AChar         iCode        Code for insertion of residues.
	$line=$line." "x4;
	# 31 - 38        Real(8.3)     x            Orthogonal coordinates for X in Angstroms.
#    if(length($atom{x})<=8 && length($atom{y})<=8 && length($atom{z})<=8){
    $line=$line.sprintf("%8.3f",$atom{x}).sprintf("%8.3f",$atom{y}).sprintf("%8.3f",$atom{z});
#}else{
#   $line=$line.sprintf("%8.2f",$atom{x}).sprintf("%8.2f",$atom{y}).sprintf("%8.2f",$atom{z});
#}
	# 39 - 46        Real(8.3)     y            Orthogonal coordinates for Y in Angstroms.
	# 47 - 54        Real(8.3)     z
	#55 - 60        Real(6.2)     occupancy    Occupancy.
	$line=$line.sprintf("%6.2f",$atom{occu});
	#61 - 66        Real(6.2)     tempFactor   Temperature  factor.
	$line=$line.sprintf("%6.2f",$atom{bf});
	$line=$line." "x(76-67+1);
	#77 - 78        LString(2)    element      Element symbol, right-justified.
	$line=$line.sprintf("%2s",$atom{element});
	#79 - 80        LString(2)    charge     
	$line=$line.sprintf("%2s",$atom{charge});
	return $line;
}

sub PrintCA{ # old , do not use
   #my ($i,$allatom[$caByAbsRes[$i]]{res}, $allatom[$caByAbsRes[$i]]{chain}, $allca[$i][0], $allca[$i][1], $allca[$i][2], $allatom[$caByAbsRes[$i]]{occu}, $allatom[$caByAbsRes[$i]]{bf}, $allatom[$caByAbsRes[$i]]{element},$allatom[$caByAbsRes[$i]]{charge})=@_;
    my ($i,$res, $chain, $x, $y, $z, $occu, $bf, $element,$charge)=@_;   
    #	$allatom[$caByAbsRes[$i]]{x}=$allca[$i][0];
	# 1 -  6        Record name   "ATOM  "
	my $line="ATOM  ";
	# 7 - 11        Integer       serial       Atom  serial number.
	$line=$line.sprintf("%5d ",$i+1);
	# 13 - 16        Atom          name         Atom name.
	$line=$line." CA ";
	# 17             Character     altLoc       Alternate location indicator.
	$line=$line." ";
	# 18 - 20        Residue name  resName      Residue name.
	$line=$line.sprintf("%3s ",$res);
	# 22             Character     chainID      Chain identifier.
	$line=$line.sprintf("%1s",$chain);
	# 23 - 26        Integer       resSeq       Residue sequence number.
	$line=$line.sprintf("%4d",$i+1);
	# 27             AChar         iCode        Code for insertion of residues.
	$line=$line." "x4;
	# 31 - 38        Real(8.3)     x            Orthogonal coordinates for X in Angstroms.
	$line=$line.sprintf("%8.3f",$x).sprintf("%8.3f",$y).sprintf("%8.3f",$z);
	# 39 - 46        Real(8.3)     y            Orthogonal coordinates for Y in Angstroms.
	# 47 - 54        Real(8.3)     z
	#55 - 60        Real(6.2)     occupancy    Occupancy.
	$line=$line.sprintf("%6.2f",$occu);
	#61 - 66        Real(6.2)     tempFactor   Temperature  factor.
	$line=$line.sprintf("%6.2f",$bf);
	$line=$line." "x(76-67+1);
	#77 - 78        LString(2)    element      Element symbol, right-justified.
	$line=$line.sprintf("%2s",$element);
	#79 - 80        LString(2)    charge     
	$line=$line.sprintf("%2s",$charge);
	return $line;
}
sub GetCAcord{
    my @pdbrst=ParseProteinPDB($_[0]);
    my @rst;
    my @allatom=@{$pdbrst[1]};
    my @caByAbsRes=@{$pdbrst[9]};
    for(my $i=0;$i<@caByAbsRes;$i++){
	my @cord=($allatom[$caByAbsRes[$i]]{x},$allatom[$caByAbsRes[$i]]{y},$allatom[$caByAbsRes[$i]]{z});
	push @rst,\@cord;
	warn join(" ",@cord),"\n";
    }
    warn "size of CA cord",scalar(@rst);
    return \@rst;
}
sub GetHelix{
    #get an helix with $_[0] residues.
    $len=$_[0];
    @helix60=([qw(-19.280 24.647 -40.792)],[qw(-15.929 26.517 -39.762)],[qw(-17.229 27.567 -36.813)],[qw(-18.609 24.342 -35.721)],[qw(-15.346 22.637 -36.204)],[qw(-13.283 24.902 -34.274)],[qw(-15.812 24.962 -31.332)],[qw(-15.860 21.330 -31.133)],[qw(-12.492 20.831 -30.956)],[qw(-11.687 23.367 -28.424)],[qw(-14.385 22.053 -26.096)],[qw(-13.115 18.763 -26.104)],[qw(-9.677 19.219 -25.633)],[qw(-10.754 21.476 -22.424)],[qw(-11.521 20.417 -20.939)],[qw(-9.275 16.680 -21.249)],[qw(-9.623 16.127 -19.808)],[qw(-9.914 19.214 -16.598)],[qw(-6.565 18.641 -16.660)],[qw(-6.735 14.854 -15.981)],[qw(-8.792 15.323 -13.198)],[qw(-6.375 18.189 -11.687)],[qw(-3.479 15.506 -12.119)],[qw(-5.229 13.134 -10.119)],[qw(-6.143 15.444 -7.408)],[qw(-2.101 16.492 -7.309)],[qw(-1.291 13.158 -6.718)],[qw(-3.822 12.544 -3.967)],[qw(-2.849 15.538 -2.129)],[qw(0.979 14.489 -2.309)],[qw(-0.066 11.005 -0.868)],[qw(-1.798 12.864 2.038)],[qw(0.979 14.916 2.815)],[qw(3.525 11.899 2.788)],[qw(1.355 10.135 5.241)],[qw(1.019 12.765 7.599)],[qw(4.940 13.493 7.439)],[qw(5.670 10.122 8.314)],[qw(3.375 9.618 11.090)],[qw(5.125 13.350 12.511)],[qw(7.950 11.994 12.648)],[qw(7.307 8.636 14.201)],[qw(5.412 10.619 17.114)],[qw(8.242 12.611 17.819)],[qw(10.826 10.046 17.810)],[qw(8.772 7.818 20.080)],[qw(8.430 10.699 22.666)],[qw(11.932 11.243 22.854)],[qw(13.125 7.916 22.996)],[qw(10.341 7.234 26.018)],[qw(11.751 9.482 27.913)],[qw(15.500 8.474 27.451)],[qw(14.456 4.896 28.072)],[qw(12.868 6.297 31.608)],[qw(15.964 7.312 32.608)],[qw(18.062 4.692 31.774)],[qw(15.114 2.173 33.431)],[qw(15.818 3.868 36.545)],[qw(19.240 3.020 36.576)],[qw(19.847 0.395 35.572)]);
    my @p=@helix60[0..$len-1];
    return \@p;
}
sub GetLoopSimple{
    $len=$_[0];
    my @p;
    return \@p;	
}


sub ProteinTransfer{
    my @pdbrst=@{$_[0]};#Math::MatrixReal->new_from_cols($_[0]);
    my @allCord;
    for(my $i=0;$i<scalar(@{$pdbrst[1]});$i++){ #dddd
	my @p=($pdbrst[1][$i]{x},$pdbrst[1][$i]{y},$pdbrst[1][$i]{z});
	push @allCord,\@p;
    }  
    
    my $rigid=Math::MatrixReal->new_from_cols([@allCord]);
#    print join(" ",@{$_[0][0]});
#    print $rigid->column(1);
    my $currPos=Math::MatrixReal->new_from_cols([$_[1]]);
    #print $currPos,"\n";
    my $tarDirect=Math::MatrixReal->new_from_cols([$_[2]]);
    my $dType=$_[3];
    my ($rst,$newDirect)=RigidTransfer(\@allCord,$currPos,$tarDirect,$dType);
    my @allCordNew=@{$rst};
    warn "size of rigidtransfer result allCordNew ",scalar(@allCordNew);
    for(my $i=0;$i<scalar(@{$pdbrst[1]});$i++){ #dddd
	my @p=@{$allCordNew[$i]};
	($pdbrst[1][$i]{x},$pdbrst[1][$i]{y},$pdbrst[1][$i]{z})=@p;
    }
    return (\@pdbrst,$newDirect);
	
}
sub RigidTransfer{
    $ncol=scalar(@{$_[0]});
    warn "ncol $ncol";
    #print join(" ",@{$_[0]});
   # @a=([qw(1 2 3)],[qw(4 5 6)]);
  #  my $rigid=Math::MatrixReal->new_from_cols(\@a);
 #   print $rigid;
#	die;
    my $rigid=Math::MatrixReal->new_from_cols($_[0]);
    print join(" ",@{$_[0][0]});
    print STDERR $rigid->column(1),"\n";
    my $currPos=Math::MatrixReal->new_from_cols([$_[1]]);
    print STDERR $currPos,"\n";
    my $tarDirect=Math::MatrixReal->new_from_cols([$_[2]]);
    print STDERR $tarDirect,"\n";
    my $directType=$_[3];
    my @rst;
    
    #set the first as original
 #   print STDERR $rigid->column(4032) if $ncol==4032 ;
#    $ones=Math::MatrixReal->new_from_rows([\@arOne]);
    my $ones=Math::MatrixReal->new(1,$ncol);
    for(my $ci=0;$ci<$ncol;$ci++){
	$ones->[0][0][$ci]=1.0;
    }
    print $ones;
#    $ones->one();
    warn "ok ones";
    $rigid_0=$rigid->column(1) * $ones;
    warn "ok rigid_0";
    $rigid=$rigid - $rigid_0;
    print STDERR "finish moving to first point";
    my $axis;
    if((!defined $directType) || ($directType eq 'line')){ 
	$axis=$rigid->column($ncol);	
    }elsif($directType eq 'first'){
	$axis=$rigid->column(2)-$rigid->column(1);
    }elsif($directType eq 'center'){
	    $axis=$rigid->column(1);
	for(my $ci=2;$ci<=$ncol;$ci++){
	    $axis=$axis+$rigid->column($ci);	
	}
	$axis=$axis/$ncol;
    }	
    print STDERR "axis of rigid\n",$axis;

    #compute the tranfer matrix
    $e1=$axis/$axis->length();
    $massCenter=$e1;
    print STDERR "e1 ",$e1;
    $e2=$tarDirect/$tarDirect->length();
    $alpha=-acos($e1->scalar_product($e2));
    $e3=$e1->vector_product($e2);
    $e3=$e3/$e3->length();
#    print $e1->length(),"\n";
#    print $e2->length(),"\n";
#    print ~$e3*$e2;
    $e2=$e3->vector_product($e1);
    print STDERR "e2 ",$e2;
    $base=Math::MatrixReal->new_from_cols([$e1,$e2,$e3]);
#    print "e3 ",$e3;
#    print (~$e3*($tarDirect-$axis));
#check base;
#    print $e1->length();

#    print $base*(~$base);
#    die;
    $rigid=(~$base)*$rigid;
    $rotate=Math::MatrixReal->new_from_cols([[cos($alpha),-sin($alpha),0],[sin($alpha),cos($alpha),0],[0,0,1]]);
    warn "rotate";

#    print $rotate,"\n";
#    print ((~$rotate)*$rotate);
#    print "before ",$rigid->column($ncol);
    $rigid=$rotate*$rigid;
#    print "after ",$rigid->column($ncol);
    $rigid=$base*$rigid;
#    print $tarDirect;
#    print "\n";
#    print $rigid->column($ncol);
    
    $rigid=$rigid+$currPos * $ones;
    #convert matrix to array
    my $nextDirect;
   	$nextDirect=$rigid->column($ncol)-$rigid->column($ncol-1);
	$nextDirest=$nextDirect/$nextDirect->length();
	$rigid=(~$rigid);
	$nextDirect=(~$nextDirect);

    if($directType eq 'first'){
	    warn "$ncol col ";
	return ($rigid->[0],$nextDirect->[0][0]);
    }else{
	return ($rigid->[0]);
    }
}

1;


