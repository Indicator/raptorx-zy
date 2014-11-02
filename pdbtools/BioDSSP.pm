#!/usr/bin/perl -w
$DEBUG=1;
sub test_parsedssp{
    #load a dssp test file 
    my $dssptestfile=shift if(@_>0);
    my @dsspline;
    open FH,"<$dssptestfile";
    @dsspline=<FH>;
    close FH;
    #parse
    my %res=ParseDssp(@dsspline);
    #show the pairs and the original lines
    print "original file========\n";
    print join("",@dsspline);
    print "parsed content======== the indices start from 0\n";
    for(my $i=0;$i<@{$res{absResPairList}};$i++){
	    print join(" ",@{$res{absResPairList}->[$i]}),"\n";
    }
    
    #test if secondary structure is well parsed.
    print "parsed native secondary structure======== the indices start from 0\n";
    print join(" ",@{$res{nativess}});
    #test if ! and gap is well handled.
}
sub ParseDssp{
	#input a array of all line of dsspcmbi output
	#return:
	# hPairRes, beta pair, the bp1 and bp2 in dssp, may not acutally has a h-bond with the paired
	# 
	#die;
	my @dssp=@_;
	#warn "dssp lines ".scalar(@dssp);
    my %res;
    if(scalar(@_)==1){
	#open file to read dssp from the file defined in $_[0], otherwise, using the @_ as dssp file content.    
    }
    
    my $i=0;
    for($i=0;$i<@dssp;$i++){
	if($dssp[$i]=~/RESIDUE AA STRUCTURE/){
	    last;
	}
    }
    $i++;
    my $iline0=$i;
    my @hPairRes;
    #warn "total dssp ".scalar(@dssp)." $i";
    $absres=0;
    my @dsspResAbs;
    my @dResPair=qw();
    my @native_ss;
    # parsing content for each line
    
    for(;$i<@dssp;$i++){
	next if(substr($dssp[$i],13,1) eq "!");
	my $dres=substr($dssp[$i],0,5);$dres=~s/\s+//g; 
	
	$dsspResAbs[$dres]=$absres;
	$absres++;
	my $res=substr($dssp[$i],5,5); $res=~s/\s+//g; #pdb residue number, approx. seqres number
	
	my $iline=$i-$iline0;
	#get paired residue
	my $bpDres1=substr($dssp[$i],25,4);
	my $bpDres2=substr($dssp[$i],29,4);
	$dResPair[$dres]=[qw()] if(!defined $dResPair[$dres]);
	if($dres<$bpDres1){
	    $dResPair[$dres][$bpDres1]=1;
	}else{
	    $dResPair[$bpDres1][$dres]=1;
	}
	if($dres<$bpDres2){
	    $dResPair[$dres][$bpDres2]=1;
	}else{
	    $dResPair[$bpDres2][$dres]=1; 
	}
	#get secondary structure types
	my $ss=substr($dssp[$i],16,1); $res=~s/\s+//g; #pdb residue number, approx. seqres number
	$ss="L" if($ss eq " ");
	push @native_ss,$ss;
    }	
    
    # convert if a parallel or anti-par pairing 
    
    my @absResPair;
    my @absResPairList;
    for(my $j=1;$j<@dsspResAbs;$j++){
	for(my $k=1;$k<@dsspResAbs;$k++){
	    if(defined $dResPair[$j][$k] && $dResPair[$j][$k]==1){
		my $r1=$dsspResAbs[$j];
		my $r2=$dsspResAbs[$k];
		$absResPair[$r1]=[qw()] if(!defined $absResPair[$r1]);
		#tell if it is parallel or anti-par
		my $b1=(defined $dResPair[$j+1][$k+1]);
		my $b2=(defined $dResPair[$j-1][$k-1] && $j>0 && $k>0);
		my $b3=(defined $dResPair[$j-1][$k+1] && $j>0);
		my $b4=(defined $dResPair[$j+1][$k-1] && $k>0);

		if($b1 || $b2){ #parallel
		    $absResPair[$r1][$r2]=1 ;#$dResPair[$j][$k]; 
		    push @absResPairList,[$r1,$r2];
		}elsif($b3 || $b4){ #anti-parallel
		    $absResPair[$r1][$r2]=2; #$dResPair[$j][$k]; 
		    push @absResPairList,[$r1,$r2]; #die "$r1 $r2 $j $k";
		}else{
		    $absResPair[$r1][$r2]=3; # not par nor anti-par , it may on the edge of parallel/anti-parallel segments.
		}
	    }
	}
    }
    
    $res{absResPair}=\@absResPair; # in a matrix array
    $res{absResPairList} = \@absResPairList; # in a list of all pairs
    $res{nativess} = \@native_ss; 
    return %res;
}
sub getdssp {
#return @seq, @label, @marks
    open FDSSP,"<$_[0]" or die $!;
    while(<FDSSP>)
    {
	last if(/RESIDUE AA STRUCTURE/);
    }
    my @allaa=qw();
    my @alllab=qw();
    my @allbe=qw();
    my $offset=-1;
    my @mark=qw();
    
#    push @mark,0;
    my $markat=0;
    $lastaa="!";
    while(<FDSSP>)
    {
	chomp;
#	next if(/GAP/);
	last if(/END/);
	my $l=substr($_,16,1);
	if($l eq ' '){$l='C';}
	my $aa=substr($_,13,1);
	my $pos=substr($_,5,5);
	if($aa ne '!')
	{
	    if($aa eq lc($aa))
	    {
		$aa='C'; #s-s bond
	    }
#	    push @label,$labelmap{$l};
	    push @alllab, $l;
	    push @allaa, $aa;
	    $markat++;
	}
	if($lastaa eq '!' && $aa ne '!' )
	{
	    push @mark,$markat-1;
	}
	if($lastaa ne '!' && $aa eq '!' )
	{
	    push @mark,$markat-1;
	}
	$lastaa=$aa;
	last if(eof(FDSSP));
    }
    if($lastaa ne '!' )
    {
	push @mark,$markat-1;
    }
    close FDSSP;
    return (\@allaa, \@alllab ,  \@mark);
}

sub getdssp_chain {
#return @seq, @label, @marks
    open FDSSP,"<$_[0]" or die $!;
    $chain=$_[1];
    while(<FDSSP>)
    {
	last if(/RESIDUE AA STRUCTURE/);
    }
    my @allaa=qw();
    my @alllab=qw();
    my @allbe=qw();
    my $offset=-1;
    my @mark=qw();
    
#    push @mark,0;
    my $markat=0;
    $lastaa="!";
    while(<FDSSP>)
    {
	chomp;
#  237 1011 B
	next if(substr($_,11,1) ne $chain);
#	next if(/GAP/);
	last if(/END/);
	my $l=substr($_,16,1);
	if($l eq ' '){$l='C';}
	my $aa=substr($_,13,1);
	my $pos=substr($_,5,5);
	if($aa ne '!')
	{
	    if($aa eq lc($aa))
	    {
		$aa='C'; #s-s bond
	    }
#	    push @label,$labelmap{$l};
	    push @alllab, $l;
	    push @allaa, $aa;
	    $markat++;
	}
	if($lastaa eq '!' && $aa ne '!' )
	{
	    push @mark,$markat-1;
	}
	if($lastaa ne '!' && $aa eq '!' )
	{
	    push @mark,$markat-1;
	}
	$lastaa=$aa;
	last if(eof(FDSSP));
    }
    if($lastaa ne '!' )
    {
	push @mark,$markat-1;
    }
    close FDSSP;
    return (\@allaa, \@alllab ,  \@mark);
}

sub getdssp_short {
#return @seq, @label, @marks from simplified dssp file like ~/db/dssp
    open FDSSP,"<$_[0]" or die $!;
    while(<FDSSP>)
    {
	last if(/RS NUM SS/);
    }
    my @allaa=qw();
    my @alllab=qw();
    my @allbe=qw();
    my $offset=-1;
    my @mark=qw();
    
#    push @mark,0;
    my $markat=0;
    $lastaa="!";
    while(<FDSSP>)
    {
	chomp;
	next if(/GAP/);
	last if(/END/);
	my $l=substr($_,14,1);
	if($l eq 'L'){$l='C';}
	my $aa=substr($_,6,1);
	my $pos=substr($_,7,5);
	if($aa ne '!')
	{
	    if($aa eq lc($aa))
	    {
		$aa='C'; #s-s bond
	    }
#	    push @label,$labelmap{$l};
	    push @alllab, $l;
	    push @allaa, $aa;
	    $markat++;
	}
	if($lastaa eq '!' && $aa ne '!' )
	{
	    push @mark,$markat-1;
	}
	if($lastaa ne '!' && $aa eq '!' )
	{
	    push @mark,$markat-1;
	}
	$lastaa=$aa;
	last if(eof(FDSSP));
    }
    if($lastaa ne '!' )
    {
	push @mark,$markat-1;
    }
    close FDSSP;
    return (\@allaa, \@alllab ,  \@mark);
}



sub get_psipred {
#return @seq, @label, @marks
    open FSS2,"<$_[0]" or die $!;
    <FSS2>;
    <FSS2>;
    my @allaa=qw();
    my @alllab=qw();
    my @allprob=qw();
    while(<FSS2>)
    {
	chomp;
	s/^\s+//;
	@p=split/\s+/;
	die 'Woops! $_' if(scalar(@p)!=6);
	push @allaa,$p[1];
	push @alllab,$p[2];
	push @allprob,@p[3..5];
    }
    close FSS2;
    return (\@allaa, \@alllab ,  \@allprob);
}
sub PSStype{
    #take SS N3 array output num of alpha num of beta
    my @res=qw(0 0 0);
    for(my $i=0;$i<@_;$i++){
	$res[$_[$i]]++;
    }
    return @res;
}

sub PSSProbNum{
	my @p=@{$_[0]};
	my $pwr=$_[1];
	my @res;
	for(my $i=0;$i<@p;$i++){
	    my $maxJ=0;
	    my $maxP=0;
	    for(my $j=0;$j<3;$j++){
		if($p[$i][$j]>$maxP){
		    $maxJ=$j;
		    $maxP=$p[$i][$j];
		}
	    }
	    $res[$i]=$maxJ;
	    if(defined $pwr){
		if($maxJ==0 && $maxP>$pwr*$p[$i][2] ){
		    
		}
		else{
		    $res[$i]=2;
		}
	    }
	}
    return @res;
}
sub PSSConvertL8N8{
    my %map8=qw(h 0 g 1 i 2 e 3 b 4 t 5 s 6 c 7 l 7); 
    if(scalar(@_)==1)
    {
	my @rst;
	#deal with a string
	for($i=0;$i<length($_[0]);$i++)
	{
	    push @rst, $map8{lc substr($_[0],$i,1)};
	}
	return join("",@rst);
    }
    else
    {
	#deal with an array of chars.
	my @rst;
	#deal with a string
	for($i=0;$i<scalar(@_);$i++)
	{
	    push @rst, $map8{lc $_[$i]};
	}
	return @rst;
    }

};
sub PSSConvertL3N3{
    my %map3=qw(h 0 e 1 c 2 l 2 0 0 1 1 2 2);
    if(scalar(@_)==1)
    {
	my @rst;
	#deal with a string
	for($i=0;$i<length($_[0]);$i++)
	{
	    push @rst, $map3{lc substr($_[0],$i,1)};
	}
	return join("",@rst);
    }
    else
    {
	#deal with an array of chars.
	my @rst;
	#deal with a string
	for($i=0;$i<scalar(@_);$i++)
	{
	    push @rst, $map3{lc $_[$i]};
	}
	return @rst;
    }
};
sub PSSConvertL8L3{
    my %map83=qw(H H G H B E E E C C S C T C I C L C);
    if(scalar(@_)==1)
    {
	my @rst;
	#deal with a string
	for($i=0;$i<length($_[0]);$i++)
	{
	    push @rst, $map83{substr($_[0],$i,1)};
	}
	return join("",@rst);
    }
    else
    {
	#deal with an array of chars.
	my @rst;
	#deal with a string
	for($i=0;$i<scalar(@_);$i++)
	{
	    push @rst, $map83{$_[$i]};
	}
	return @rst;
    }
};
sub PSSConvertL8N3{
    my $i;
    my %map83=qw(0 0 1 0 3 1 4 1 7 2 6 2 5 2 2 2);
    my %map=qw(h 0 g 1 i 2 e 3 b 4 t 5 s 6 c 7 l 7);
    if(scalar(@_)==1)
    {
	my @rst;
	#deal with a string
	for($i=0;$i<length($_[0]);$i++)
	{
	    push @rst, $map83{$map{lc substr($_[0],$i,1)}};
	}
	return join("",@rst);
    }
    else
    {
	#deal with an array of chars.
	my @rst;
	#deal with a string
	for($i=0;$i<scalar(@_);$i++)
	{
	    push @rst, $map83{$map{lc $_[$i]}};
	}
	return @rst;
    }
};
sub PSSConvertN8L8{
	#letter will be converted to letters
#numbers will be converted to numbers
#all input should be upper case.
	   my $i;
    my %map=qw(0 h 1 g 2 i 3 e 4 b 5 t 6 s 7 c);
    if(scalar(@_)==1)
    {
	my @rst;
	#deal with a string
	for($i=0;$i<length($_[0]);$i++)
	{
	    push @rst, uc $map{substr($_[0],$i,1)};
	}
	return join("",@rst);
    }
    else
    {
	#deal with an array of chars.
	my @rst;
	#deal with a string
	for($i=0;$i<scalar(@_);$i++)
	{
	    push @rst, uc $map{$_[$i]};
	}
	return @rst;
    }
};
sub PSSConvertN3L3{
	
};

sub convert_label83 { #old, do notuse again
#letter will be converted to letters
#numbers will be converted to numbers
#all input should be upper case.
    my $i;
    my %map83=qw(H H G H B E E E C C S C T C I C L C);
    if(scalar(@_)==1)
    {
	my @rst;
	#deal with a string
	for($i=0;$i<length($_[0]);$i++)
	{
	    push @rst, $map83{substr($_[0],$i,1)};
	}
	return join("",@rst);
    }
    else
    {
	#deal with an array of chars.
	my @rst;
	#deal with a string
	for($i=0;$i<scalar(@_);$i++)
	{
	    push @rst, $map83{$_[$i]};
	}
	return @rst;
    }
}

sub convert_label_to_letter {
#letter will be converted to letters
#numbers will be converted to numbers
#all input should be upper case.
    my $i;
    my %map=qw(0 h 1 g 2 i 3 e 4 b 5 t 6 s 7 c);
    if(scalar(@_)==1)
    {
	my @rst;
	#deal with a string
	for($i=0;$i<length($_[0]);$i++)
	{
	    push @rst, uc $map{substr($_[0],$i,1)};
	}
	return join("",@rst);
    }
    else
    {
	#deal with an array of chars.
	my @rst;
	#deal with a string
	for($i=0;$i<scalar(@_);$i++)
	{
	    push @rst, uc $map{$_[$i]};
	}
	return @rst;
    }
}

sub ConvertLabelToNumber8 {
	die "obsolete function";
#letter will be converted to letters
#numbers will be converted to numbers
#all input should be upper case.
    my $i;
    my %map=qw(h 0 g 1 i 2 e 3 b 4 t 5 s 6 c 7 l 7); 
    if(scalar(@_)==1)
    {
	my @rst;
	#deal with a string
	for($i=0;$i<length($_[0]);$i++)
	{
	    push @rst, $map{lc substr($_[0],$i,1)};
	}
	return join("",@rst);
    }
    else
    {
	#deal with an array of chars.
	my @rst;
	#deal with a string
	for($i=0;$i<scalar(@_);$i++)
	{
	    push @rst, $map{lc $_[$i]};
	}
	return @rst;
    }
}
sub ConvertLabelToNumber3{ 
	#warn "obsoleted function";
    my %map3=qw(h 0 e 1 c 2 0 0 1 1 2 2);
    if(scalar(@_)==1)
    {
	my @rst;
	#deal with a string
	for($i=0;$i<length($_[0]);$i++)
	{
	    push @rst, $map3{lc substr($_[0],$i,1)};
	}
	return join("",@rst);
    }
    else
    {
	#deal with an array of chars.
	my @rst;
	#deal with a string
	for($i=0;$i<scalar(@_);$i++)
	{
	    push @rst, $map83{$map{lc $_[$i]}};
	}
	return @rst;
    }
}
sub ConvertLabelToNumber_3 {
	die "obsoleted function use L8N3";
#letter will be converted to letters
#numbers will be converted to numbers
#all input should be upper case.
    my $i;
    my %map83=qw(0 0 1 0 3 1 4 1 7 2 6 2 5 2 2 2);
    my %map=qw(h 0 g 1 i 2 e 3 b 4 t 5 s 6 c 7 l 7);
    if(scalar(@_)==1)
    {
	my @rst;
	#deal with a string
	for($i=0;$i<length($_[0]);$i++)
	{
	    push @rst, $map83{$map{lc substr($_[0],$i,1)}};
	}
	return join("",@rst);
    }
    else
    {
	#deal with an array of chars.
	my @rst;
	#deal with a string
	for($i=0;$i<scalar(@_);$i++)
	{
	    push @rst, $map83{$map{lc $_[$i]}};
	}
	return @rst;
    }
}


sub HammingDistanceSeqs{
    $s1=$_[0];
    $s2=$_[1];
    @sp1=split(//,$s1);
    @sp2=split(//,$s2);
#    $maxlen=scallar(@sp1);
#    $maxlen=@sp2 if(@sp2>$maxlen);
    my $corr;
    for(my $ii=0;$ii<@sp1;$ii++)
    {
	$corr++ if($sp1[$ii] eq $sp2[$ii]);
    }
    if(@sp1 != 0)
    {
	return $corr/@sp1;
    }
    else
    {
	return -1;
    }
}

sub HammingDistanceArrays{
    $s1=$_[0];
    $s2=$_[1];
    @sp1=@{$s1};
    @sp2=@{$s2};
#    $maxlen=scallar(@sp1);
#    $maxlen=@sp2 if(@sp2>$maxlen);
    my $corr;
    for(my $ii=0;$ii<@sp1;$ii++)
    {
	$corr++ if($sp1[$ii] eq $sp2[$ii]);
    }
    if(@sp1 != 0)
    {
	return $corr/@sp1;
    }
    else
    {
	return -1;
    }
}

sub ParsePSSM{
    my $i;
    my $globalNeff=0;
#    print STDERR ",$_[0],";
    open fhPSSM,"<$_[0]" or die $!;
    <fhPSSM>;<fhPSSM>;<fhPSSM>;
    my @allseq;
    my $allfeat="";
    my $len=0;
    my @allfeats=qw();
    my @allNeff;
    while(<fhPSSM>)#for($k=0;$k<$len;$k++)
    {
	my $f1=$_;
	chomp($f1);
	$f1=~s/^\s+//;
	my @parts=split(/\s+/,$f1);
#    die "Parse PSSM file error!\n" if(@parts!=44);
	last if(scalar(@parts)!=44);
	push @allseq, $parts[1];
	$len++;
	my $neff=$parts[42]." "; # Neff value; [should be information]
	my $neffpos=0;
	for($i=22;$i<42;$i++)
	{
	    if($parts[$i]!=0){
		$neffpos = $neffpos - $parts[$i]/100 * log($parts[$i]/100);
	    }
	}
	$neffpos=exp($neffpos);
	$globalNeff=$globalNeff+$neffpos;
#normalize psp
	for($ipssm=2;$ipssm<=21;$ipssm++){
#	    $parts[$ipssm]=sprintf("%.4f",($parts[$ipssm]+7)/14.0);
	}
	my $f2=join(" ",@parts[2..21]);
	$f2=sprintf("%.3f",$neffpos/10)." ".$f2;
	push @allNeff,$neffpos;
	push @allfeats,$f2;
    }
    $globalNeff=$globalNeff/scalar(@allfeats);
    close fhPSSM;
    print STDERR "\n$globalNeff\n";
    return (\@allseq,\@allfeats,$globalNeff,\@allNeff);
}

sub ParseSS8()
{
#return @seq, @label, @marks
    open FSS2,"<$_[0]" or die $!;
    <FSS2>;
    <FSS2>;
    <FSS2>;
    my @allaa=qw();
    my @alllab=qw();
    my @allprob=qw();
    while(<FSS2>)
    {
	chomp;
	s/^\s+//;
	@p=split/\s+/;
	die 'Woops! $_' if(scalar(@p)!=10);
	push @allaa,$p[0];
	push @alllab,$p[1];
	push @allprob,@p[2..9];
    }
    close FSS2;
    return (\@allaa, \@alllab ,  \@allprob);
}

sub GetSeqresDsspMap{ # use BioAlign to parse TPL file and get all information in a tpl file.
	#input: a tpl fild
	#return: @r, $r[$seqres position from 0]=$dssp position from 0;
    open FH,"<$_[0]" or die " no tpl file $_[0]\n";
    my $seqres;
    my $seqdssp;
	while(<FH>){
	    chomp;
	    if(/SEQRES/){
		my @p=split/\s+/;
		$seqres=$p[3];
		print STDERR $seqres."\n" if($DEBUG);
		last;
	    }
	}
    while(<FH>){
	    if(/DSSP/){
		my @p=split/\s+/;
		$seqdssp=$p[3];
		print STDERR $seqdssp."\n" if($DEBUG);
		last;
	    }

	}
    close FH;
    my $s=0;
    my $h=0;
    my @seqres_dssp=(-1) x length($seqres);
    for(my $i=0;$i<length($seqres);$i++){
	if(substr($seqdssp,$i,1) ne '-'){
	    $seqres_dssp[$i]=$h; #suppose seqres contains no '-'
	}
	    $h++ if (substr($seqdssp,$i,1) ne '-');
    }
    
    return @seqres_dssp;
}
#### the end  #####
1;
