#!/usr/bin/perl -w
#Protein SS topology package;
use File::Temp qw/ tempfile tempdir /;
sub NMA_getAllMode{
    #from a incomplete pair atom distance matrix, compute the fast and slow mode vectors for each atoms.
    #compute the kirchhoff matrix
    $tgtLen=0;
    my @kirk=qw();
    for(my $i=0;$i<$tgtLen;$i++){
	$kirk[$i]=[qw()];
	for(my $j=0;$j<$tgtLen;$j++){
	    $kirk[$i][$j]=1 if($dist[$i][$j]<=7);
	    $kirk[$i][$j]=0 if($dist[$i][$j]>7);
	}
	$kirk[$i][$i]=0;
	$kirk[$i][$i]=-sum(@{$kirk[$i]});
    }
    ($fh, $filename) = tempfile();
    for(my $i=0;$i<$tgtLen;$i++){
	print fh join(" ",@{$kirk[$i]}),"\n";
    }
    close($fh);
    #compute the largest and smallest eigenvectors
    $cmd="NMA_mode.sh $filename";
    `$cmd`;
    #read the result of matlab
    my @allMode=qw();
    open FH,"<$filename";
    while(<FH>){
	    chomp;
	my @p=split/\s+/;
	push @allMode,\@p;
    }
    close FH;
	return @allMode;
}
sub CombineSS{
    #take input of two or more SS ,output one
    #method 1, 
    #@tgtPredSSTemp
}

sub GetSSindex{
    #this sub will assign a number for each consecutive SS segment. The numbers are returned, which can be used to tell if two residue are in the same ss segment.
    #It works on either ss3 or ss8.
    my @ss=@_;
    my @res;
    my $ssi=0;
    $sshead[0]=0;
    for(my $i=0;$i<@ss;$i++){
	if($i>0 && $ss[$i] ne $ss[$i-1]){
	    $ssi++;
	    $sshead[$ssi]=$i;
	    $ssend[$ssi-1]=$i-1;
	}
	$res[$i]=$ssi;
    }
    $ssend[$ssi]=scalar(@ss);
    return (\@res,\@sshead,\@ssend);
}

sub PredictSStemp{ # predict ss3 of target from template ss
    my @tempSS3=PSSConvertL8N3(@tempSS);
    my @res;
    for(my $i=0;$i<@tgtPredSS;$i++){
	if($arTarTemp[$i]!=-1){
	    $res[$i]=$tempSS3[$arTarTemp[$i]];
	}
	else{
	    $res[$i]=2;
	}
    }
    return @res;
}


#Do simple stats on SS and pair atoms distance
sub SSLocalDist{
    open FSS,">$outputdir/ss.inside.alpha.txt";
    for(my $i=0;$i<@tgtPredSS;$i++){
	for(my $j=$i+3;$j<@tgtPredSS;$j++){
	    if($tgtPredSSidx[$i]==$tgtPredSSidx[$j] && $tgtSSprob[$i][0]>0.9 && $tgtSSprob[$j][0]>0.9){
	    my $dist=$tgtDist[$i][$j];
	    print FSS $j-$i," ",$dist,"\n";
	    }
	}
    }
    close FSS;
    open FSS,">$outputdir/ss.inside.true.alpha.txt";
    for(my $i=0;$i<@tgtPredSS;$i++){
	for(my $j=$i+3;$j<@tgtPredSS;$j++){
	    if($tgtTrueSSidx[$i]==$tgtTrueSSidx[$j] && $tgtTrueSS8_N3[$i]==0){
	    my $dist=$tgtDist[$i][$j];
	    print FSS $j-$i," ",$dist,"\n";
	    }
	}
    }
    close FSS;
    open FSS,">$outputdir/ss.inside.beta.txt";
    for(my $i=0;$i<@tgtPredSS;$i++){
	for(my $j=$i+3;$j<@tgtPredSS;$j++){
	    if($tgtPredSSidx[$i]==$tgtPredSSidx[$j] && $tgtSSprob[$i][1]>0.9 && $tgtSSprob[$j][1]>0.9){
	    my $dist=$tgtDist[$i][$j];
	    print FSS $j-$i," ",$dist,"\n";
	    }
	}
    }
    close FSS; 
    open FSS,">$outputdir/ss.inside.true.beta.txt";
    for(my $i=0;$i<@tgtPredSS;$i++){
	for(my $j=$i+3;$j<@tgtPredSS;$j++){
	    if($tgtTrueSSidx[$i]==$tgtTrueSSidx[$j] && $tgtTrueSS8_N3[$i]==1){
	    my $dist=$tgtDist[$i][$j];
	    print FSS $j-$i," ",$dist,"\n";
	    }
	}
    }
    close FSS; 
    open FSS,">$outputdir/ss.statics.txt";
    warn "len of true ss8".scalar(@tgtTrueSS8);
    for(my $i=0;$i<@tgtTrueSS8;$i++){
	for(my $j=$i+2;$j<@tgtTrueSS8;$j++){
	    my $dist=$tgtDist[$i][$j];
	    print FSS $i," ",$j," ",$tgtTrueSSidx[$i]," ",$tgtTrueSSidx[$j]," ",$tgtTrueSS8[$i]," ",$tgtTrueSS8[$j]," ",
	    $tgtPredSSidx[$i]," ",$tgtPredSSidx[j]," ",join(" ",@{$tgtSSprob[$i]})," ",join(" ",@{$tgtSSprob[$j]})," $dist\n";
	}
    }
    close FSS;
}




1;