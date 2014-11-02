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

use lib $bioperl_dir;
use Bio::Perl;
use Bio::SeqIO;
use File::Basename;

require "$pdbtools_dir/BioDSSP.pm";

my $DEBUG=0;
my @AA1Coding=(0,4,3,6,13,7,8,9,11,10,12,2,14,5,1,15,16,19,17,18,20);
my @gonnet= ( [ 1.7378,0.870964,0.933254,0.933254,1.12202,0.954993,1,1.12202,0.831764,0.831764,0.758578,0.912011,0.851138,0.588844,1.07152,1.28825,1.14815,0.436516,0.60256,1.02329],[ 0.870964,2.95121,1.07152,0.933254,0.60256,1.41254,1.09648,0.794328,1.14815,0.57544,0.60256,1.86209,0.676083,0.47863,0.812831,0.954993,0.954993,0.691831,0.660693,0.630957],[ 0.933254,1.07152,2.39883,1.65959,0.660693,1.1749,1.23027,1.09648,1.31826,0.524807,0.501187,1.20226,0.60256,0.489779,0.812831,1.23027,1.12202,0.436516,0.724436,0.60256],[ 0.933254,0.933254,1.65959,2.95121,0.47863,1.23027,1.86209,1.02329,1.09648,0.416869,0.398107,1.12202,0.501187,0.354813,0.851138,1.12202,1,0.301995,0.524807,0.512861],[ 1.12202,0.60256,0.660693,0.47863,14.1254,0.57544,0.501187,0.630957,0.74131,0.776247,0.707946,0.524807,0.812831,0.831764,0.489779,1.02329,0.891251,0.794328,0.891251,1],[ 0.954993,1.41254,1.1749,1.23027,0.57544,1.86209,1.47911,0.794328,1.31826,0.645654,0.691831,1.41254,0.794328,0.549541,0.954993,1.04713,1,0.537032,0.676083,0.707946],[ 1,1.09648,1.23027,1.86209,0.501187,1.47911,2.29087,0.831764,1.09648,0.537032,0.524807,1.31826,0.630957,0.40738,0.891251,1.04713,0.977237,0.371535,0.537032,0.645654],[ 1.12202,0.794328,1.09648,1.02329,0.630957,0.794328,0.831764,4.57088,0.724436,0.354813,0.363078,0.776247,0.446684,0.301995,0.691831,1.09648,0.776247,0.398107,0.398107,0.467735],[ 0.831764,1.14815,1.31826,1.09648,0.74131,1.31826,1.09648,0.724436,3.98107,0.60256,0.645654,1.14815,0.74131,0.977237,0.776247,0.954993,0.933254,0.831764,1.65959,0.630957],[ 0.831764,0.57544,0.524807,0.416869,0.776247,0.645654,0.537032,0.354813,0.60256,2.51189,1.90546,0.616595,1.77828,1.25893,0.549541,0.660693,0.870964,0.660693,0.851138,2.04174],[ 0.758578,0.60256,0.501187,0.398107,0.707946,0.691831,0.524807,0.363078,0.645654,1.90546,2.51189,0.616595,1.90546,1.58489,0.588844,0.616595,0.74131,0.851138,1,1.51356],[ 0.912011,1.86209,1.20226,1.12202,0.524807,1.41254,1.31826,0.776247,1.14815,0.616595,0.616595,2.0893,0.724436,0.467735,0.870964,1.02329,1.02329,0.446684,0.616595,0.676083],[ 0.851138,0.676083,0.60256,0.501187,0.812831,0.794328,0.630957,0.446684,0.74131,1.77828,1.90546,0.724436,2.69153,1.44544,0.57544,0.724436,0.870964,0.794328,0.954993,1.44544],[ 0.588844,0.47863,0.489779,0.354813,0.831764,0.549541,0.40738,0.301995,0.977237,1.25893,1.58489,0.467735,1.44544,5.01187,0.416869,0.524807,0.60256,2.29087,3.23594,1.02329],[ 1.07152,0.812831,0.812831,0.851138,0.489779,0.954993,0.891251,0.691831,0.776247,0.549541,0.588844,0.870964,0.57544,0.416869,5.7544,1.09648,1.02329,0.316228,0.489779,0.660693],[ 1.28825,0.954993,1.23027,1.12202,1.02329,1.04713,1.04713,1.09648,0.954993,0.660693,0.616595,1.02329,0.724436,0.524807,1.09648,1.65959,1.41254,0.467735,0.645654,0.794328],[ 1.14815,0.954993,1.12202,1,0.891251,1,0.977237,0.776247,0.933254,0.870964,0.74131,1.02329,0.870964,0.60256,1.02329,1.41254,1.77828,0.446684,0.645654,1],[ 0.436516,0.691831,0.436516,0.301995,0.794328,0.537032,0.371535,0.398107,0.831764,0.660693,0.851138,0.446684,0.794328,2.29087,0.316228,0.467735,0.446684,26.3027,2.5704,0.549541],[ 0.60256,0.660693,0.724436,0.524807,0.891251,0.676083,0.537032,0.398107,1.65959,0.851138,1,0.616595,0.954993,3.23594,0.489779,0.645654,0.645654,2.5704,6.0256,0.776247],[ 1.02329,0.630957,0.60256,0.512861,1,0.707946,0.645654,0.467735,0.630957,2.04174,1.51356,0.676083,1.44544,1.02329,0.660693,0.794328,1,0.549541,0.776247,2.18776] ) ;

sub HHMsearch{
# HHMsearch($seq,$head,$i,$j,$tail);
#	create a fasta file, put it in the following directory:
my $fastdir="/home/wangsheng/CASP_Program/RaptorX/SEQ";

#[note]: the file must be like xxxx.seq, with xxxx be its name;
#and the file format must be like:
#>xxxx
#AMINOACIDSEQUENCE
my ($trgtId,$seq,$head,$i,$j,$tail,$outputdir)=@_;
$subSeq=substr($seq,$head,$tail-$head+1);
$seqid=$trgtId.$head."_".$tail;
open FH, ">$fastadir/$seqid.seq";
print FH ">$seqid\n$subseq\n";
close FH;

#step2:
#run ./ws_genHMM.sh xxxx at the following directory:
$cmd="cd /home/wangsheng/CASP_Program/RaptorX; ./ws_genHMM.sh $seqid";
warn $cmd;
`$cmd`;

#step3:
#the result file will be found in:
my $resDir="/home/wangsheng/CASP_Program/RaptorX/tmp" ; 
$cmd="./hhsearch -cal -i $resDir/$seqid.hhm -d cal.hhm";
warn $cmd;
`$cmd`;

$cmd="./hhsearch -i $resDir/$seqid.hhm -d all.hhm -o $outputdir/$seqid.hhr"
}
 
sub SimpleAlign{
    #align two strings, maximizing the number of common matched , output @res, $res[1..scalar(@s)]\in 1..scalar(@t)
    my @res;
    my @s=@{$_[0]};
    my @t=@{$_[1]};
    #initialize
    # scoring scheme
    my $MATCH     =  1; # +1 for letters that match
    my $MISMATCH = -1; # -1 for letters that mismatch
    my $GAP       = -1; # -1 for any gap
    my @matrix;
    $matrix[0][0]{score}   = 0;
    $matrix[0][0]{pointer} = "none";
    for(my $j = 1; $j <= @t; $j++) {
	 $matrix[0][$j]{score}   = 0;
	 $matrix[0][$j]{pointer} = "none";
    }
    for (my $i = 1; $i <= @s; $i++) {
	 $matrix[$i][0]{score}   = 0;
	 $matrix[$i][0]{pointer} = "none";
    }
    # fill
    my $max_i     = 0;
    my $max_j     = 0;
    my $max_score = 0;
    for(my $i = 1; $i <= @t; $i++) {
	for(my $j = 1; $j <= @s; $j++) {
	    my ($diagonal_score, $left_score, $up_score);
	    # calculate match score
	    my $letter1 = $s[$j-1];#substr($seq1, $j-1, 1);
	    my $letter2 = $t[$i-1];#substr($seq2, $i-1, 1);      
	    if ($letter1==$letter2) {
		$diagonal_score = $matrix[$i-1][$j-1]{score} + $MATCH;
	    }
	    else {
		$diagonal_score = $matrix[$i-1][$j-1]{score} + $MISMATCH;
	    }
	    # calculate gap scores
	    $up_score   = $matrix[$i-1][$j]{score} + $GAP;
	    $left_score = $matrix[$i][$j-1]{score} + $GAP;

	    if ($diagonal_score <= 0 and $up_score <= 0 and $left_score <= 0) {
		$matrix[$i][$j]{score}   = 0;
		$matrix[$i][$j]{pointer} = "none";
		next; # terminate this iteration of the loop
	    }

	    # choose best score
	    if ($diagonal_score >= $up_score) {
		if ($diagonal_score >= $left_score) {
		    $matrix[$i][$j]{score}   = $diagonal_score;
		    $matrix[$i][$j]{pointer} = "diagonal";
		}
		else {
		$matrix[$i][$j]{score}   = $left_score;
		$matrix[$i][$j]{pointer} = "left";
		}
	    } else {
		if ($up_score >= $left_score) {
		    $matrix[$i][$j]{score}   = $up_score;
		    $matrix[$i][$j]{pointer} = "up";
		}
		else {
		    $matrix[$i][$j]{score}   = $left_score;
		    $matrix[$i][$j]{pointer} = "left";
		}
	    }

	    # set maximum score
	    if ($matrix[$i][$j]{score} > $max_score) {
		$max_i     = $i;
		$max_j     = $j;
		$max_score = $matrix[$i][$j]{score};
	    }
	}
    }	

    # trace-back

    my $align1="";
    my $align2="";
    my $j = $max_j;
    my $i = $max_i;
    
    while (1) {
	last if $matrix[$i][$j]{pointer} eq "none";
	if ($matrix[$i][$j]{pointer} eq "diagonal") {
	    $align1 .= $s[$j-1] ; #substr($seq1, $j-1, 1);
	    $align2 .= $t[$i-1] ;#substr($seq2, $i-1, 1);
	    $res[$i]=$j;
	    $i--; $j--;
	}
	elsif ($matrix[$i][$j]{pointer} eq "left") {
	    $align1 .=  $s[$j-1] ;#substr($seq1, $j-1, 1);
	    $align2 .= "-";
	    $j--;
	}
	elsif ($matrix[$i][$j]{pointer} eq "up") {
	    $align1 .= "-";
	    $align2 .= $t[$i-1] ; #substr($seq2, $i-1, 1);
	    $i--;
	}  
    }

    $align1 = reverse $align1;
    $align2 = reverse $align2;
    #print "$align1\n";
    #print "$align2\n";
    return(\@res,$align1,$align1);
}
#------sub ParsePIRMulti
sub ParsePIRMulti{#old , do not use or modify
#works for 2 and more templates
#exmample: find x in seq2 aligned with 1 in target, $arAlignTemp[2][$arTargetAlign[1]];
    my @idxTarget=qw();
    my @idxTemp=qw();
    my @arTarTemp;
    my @arTempTar;
    my $fnAlign=$_[0];
    my $inseq = Bio::SeqIO->new(-file => "<$fnAlign",
				-format => "pir" );
    my $h1=0;
    my @h2=qw();
    my $trgtId;
    my @tmplIds=qw();
    my %sequences=qw();
    
    my @arTargetAlign;
    my @arTempAlign;
    my @arAlignTarget;
    my @arAlignTemp;
    
#find all the sequence names
    while (my $seq = $inseq->next_seq) {
#    print $seq->seq,"\n";
	if($seq->description=~/sequence/){
	    $target=$seq->seq;
	    my @p=split/:/,$seq->description;
	    my $seqid=$p[1];
	    $trgtId=$seqid;
	    if(!defined $sequences{$seqid})
	    {
		$sequences{$seqid}=$target;
		$sequences{$seqid}=~s/-//g;
	    }
	    else
	    {
		die "same sequence ids in pir file\n";
	    }
	}
	else{
	    $template=$seq->seq;
	    my @p=split/:/,$seq->description;
	    my $seqid=$p[1];
	    push @tmplIds, $seqid;# multi templates
	    #initialize h2, arTempAlign, arAlignTemp
	    push @h2,0;
	    my @emptyTemp=qw();
	    my @emptyTemp1=qw();
	    push @arTempAlign,\@emptyTemp;
	    push @arAlignTemp,\@emptyTemp1;
	    if(!defined $sequences{$seqid}){
		$sequences{$seqid}=$template;require '/home/zywang/work/pdbtools/BioDSSP.pm';
	    } 
	    else
	    {
		die "same sequence ids in pir file\n";
	    }
	}
#    print $seq->description,"\n";
    }
#should be length(alignment=target);
    $nAliLen=length($target);
    for($i=0;$i<$nAliLen;$i++)
    {
	if(substr($target,$i,1) ne '-'){
	    $arAlignTarget[$i]=$h1;
	    $arTargetAlign[$h1]=$i;
	    $h1++;
	}
	else{
	    $idxTarget[$i]=-1;
	}
	#print "\t";
	for(my $ti=0;$ti<@tmplIds;$ti++){ 
	    my $template=$sequences{$tmplIds[$ti]};
	    if(substr($template,$i,1) ne '-'){
		$arAlignTemp[$ti][$i]=$h2[$ti];
		$arTempAlign[$ti][$h2]=$i;
		$h2[$ti]++;
	    }
	    else{
		$arAlignTemp[$ti][$i]=-1;
	    }
	}
#	push @aAlignScore, ScoreSS($i);
    }
    my @rr;
    $rr[0]=\@arTargetAlign;
    $rr[1]=\@arTempAlign;
    $rr[2]=\@arAlignTarget;
    $rr[3]=\@arAlignTemp;
    $rr[4]=\%sequences;#4 $sequences{$seq}=$sequence content without "-".
    $rr[5]=\@tmplIds;
    $rr[6]=$trgtId;
#$rr[7]=\@arTargetAlign;
    
    return @rr;
}
#------------------
sub DivideMultiPIR{
    my $fnAlign=$_[0];
    my $outdir=$_[1];
    my $inseq = Bio::SeqIO->new(-file => "<$fnAlign",
				-format => "pir" );
    my $h1=0;
    my $h2=0;
    my $trgtId;
    my @tmplIds=qw();
    my %sequences=qw();
    my %fullsequence=qw();
    my %tempTitle=qw();
    my @alnMatch;
    my @gapPart;
    my $seqHeadtitle;
    my @res;
    while (my $seq = $inseq->next_seq) {
    #    print $seq->seq,"\n";    
	if($seq->description=~/sequence/){
	    $target=$seq->seq;
	    $seqHeadtitle=$seq->description;
	    my @p=split/:/,$seq->description;
	    my $seqid=$p[1];
	    $trgtId=$seqid;
	    if(!defined $sequences{$seqid})
	    {
		$sequences{$seqid}=$target;
		$sequences{$seqid}=~s/-//g;
	    }
	    else
	    {
		die "same sequence ids in pir file\n";
	    }
	}
	else{
	    $template=$seq->seq;
	    push @tempTitle,$seq->description;
	    my @p=split/:/,$seq->description;
	    
	    my $seqid=$p[1];
	    my $chainid=$p[3];
	    if(length($seqid)==4){ # only pdb id without chain Id
		$seqid=$seqid.$chainid;
	    }
	    push @tmplIds, $seqid;
	    if(!defined $sequences{$seqid})
	    {
		    $fullsequence{$seqid}=$template;
		$sequences{$seqid}=$template;
		$sequences{$seqid}=~s/-//g;
	    } 
	    else
	    {
		die "same sequence ids in pir file\n";
	    }
	}
    }

    for(my $ti=0;$ti<@tmplIds;$ti++){
	my $seqId=$tmplIds[$ti];
	my $template=$fullsequence{$seqId};
	push @res, "$outdir/$seqId-$trgtId.pir";
	open FH,">$outdir/$seqId-$trgtId.pir";
	warn "write $outdir/$seqId-$trgtId.pir";
	my $trgtnew="";
	my $tempnew="";
	for(my $i=0;$i<length($target);$i++){
	    if(substr($target,$i,1) eq '-' && substr($template,$i,1) eq '-'){
	    }else{
		$trgtnew=$trgtnew.substr($target,$i,1) ;
		$tempnew=$tempnew.substr($template,$i,1) ;
	    }
	}
	print FH ">P1;$trgtId\n$seqHeadtitle\n$trgtnew*\n";
	print FH ">P1;$seqId\n$tempTitle[$ti]\n$tempnew*\n";
	close FH;
    }
    return @res;
}
#------------------------------------------------

sub GetAlignLocal{
#for each position, compute a score representing the gap/sse in the local of that position.
my @pir=@{$_[0]};
my @seqss=@{$_[1]}; #predicted ss
my @tempss=@{$_[2]}; #native ss, 
my @tempssidx=@{$_[3]}; #native ss, 
my $winLen=$_[4];
#First, we need a simple core-region score for template, based on SS

my $seqlen=scalar(@seqss); 
my @localQ=qw(-1)x $seqlen;
my $tempId=$pir[5][0]; # only 1 template
    my $tarId=$pir[6];
    warn "len1 ",length($pir[11]{$tarId})," ",$pir[11]{$tarId};
    warn "len2 ",length($pir[11]{$tempId})," ",$pir[11]{$tempId};
    
for(my $i=0;$i<$seqlen; $i++){
    $res1=$i-($winLen-1)/2;
    $res2=$i+($winLen-1)/2;
    $res1=0 if $res1<0;
    $res2=$seqlen-1 if $res2>=$seqlen;
    my $ares1=$pir[7][$res1]; # alignment position
    my $ares2=$pir[7][$res2]; 
    #warn "ares1 $ares1 ares2 $ares2";
    my $gap=0;
    for(my $j=$ares1; $j<=$ares2; $j++){
	$gap++ if (substr($pir[11]{$tarId},$j,1) eq '-') || (substr($pir[11]{$tempId},$j,1) eq '-');
    }	
    my $wlen=$res2-$res1+1; # actual window length
    my $gapQuality;#0,perfect no gap;  1,1 gap; 2,more than 1 gap.
    if($gap==0){ 	$gapQuality=0; }
    elsif($gap==1){	$gapQuality=1; }
    else{ 		$gapQuality=2; }
    
    my $tempi=$pir[2][$i];
    next if(!defined $tempi) ||($tempi<0);
    my $ssQuality;# 0,in the center(2/3) of core alpha/beta; 1,edge of core alpha/beta ; 2,other
    my $b1= ($tempss[$tempi]==1 || $tempss[$tempi]==0); # in a alpha/beta
    #my $b3; # indicate the ss is a core of the template.
    my $ssidx=$tempssidx[0][$tempi];
    
    my $b2=(($tempi-$tempssidx[1][$ssidx]) >= $tempssidx[3][$ssidx]/6 ) &&(($tempssidx[2][$ssidx]-$tempi) >= $tempssidx[3][$ssidx]/6 ) ;
    my $b4=( ($tempssidx[3][$ssidx]>4 && $tempss[$tempi]==1)|| ($tempssidx[3][$ssidx]>12 && $tempss[$tempi]==0) );
    #in the center of alpha/beta
    if($b1 && $b2 && $b4){	$ssQuality=0;}
    elsif($b1){			$ssQuality=1;}
    else{			$ssQuality=2;}	
    $localQ[$i]=$ssQuality+$gapQuality;
    #warn "$i $tempi $ssidx  $ssQuality+$gapQuality ",sprintf("%d "x3,$b1,$b2,$b4);
}

return @localQ;
}
#------------------------------------------------
sub ParsePIR
{
#now can deal with more sequence alignment
#Now it also deals with multiple alignment in a same pir.
my @idxTarget=qw();
my @idxTemp=qw();
my @arTarTemp;
my @arTempTar;
my $fnAlign=$_[0];
my $inseq = Bio::SeqIO->new(-file => "$fnAlign",
			    -format => "pir" ) or die &!;
my $h1=0;
my $h2=0;
my $trgtId;
my @tmplIds=qw();
my %sequences=qw();
my %fullsequence=qw();
my @alignAll;
my @alnMatch;
my @alnMatchMulti;
my @gapPart;
while (my $seq = $inseq->next_seq) {
#    print $seq->seq,"\n";
    if($seq->description=~/sequence/){
	$target=$seq->seq;
	my @p=split/:/,$seq->description;
        my $seqid=$p[1];
	$trgtId=$seqid;
	if(!defined $sequences{$seqid})
	{
	  $fullsequence{$seqid}=$target;
	    $sequences{$seqid}=$target;
	    $sequences{$seqid}=~s/-//g;
	}
	else
	{
	    die "same sequence ids in pir file\n";
	}
    }
    else{
	$template=$seq->seq;
	my @p=split/:/,$seq->description;
        my $seqid=$p[1];
	my $chainid=$p[3];
	if(length($seqid)==4){ # only pdb id without chain Id
	    $seqid=$seqid.$chainid;
	}
	push @tmplIds, $seqid;
	if(!defined $sequences{$seqid})
	{
	    $fullsequence{$seqid}=$template;
	    $sequences{$seqid}=$template;
	    $sequences{$seqid}=~s/-//g;
	} 
	else
	{
	    die "same sequence ids in pir file\n";
	}
    }
#    print $seq->description,"\n";
}
my @rr;

$nAliLen=length($target);

my @targetQa=qw();
my @alnMatchAll;
    for($i=0;$i<$nAliLen;$i++)
    {
	if(substr($target,$i,1) ne '-'){
	    $idxTarget[$i]=$h1; # $idxTarget[align position]=res position.
	    $arTargetAlign[$h1]=$i;
	    $arTarTemp[$h1]=-1; #only initialize , scalar(@arTarTemp) is the length of the target sequence in pir file
	    $targetQa[$h1]=-1;
	    $h1++;
	}
	else
	{
	    $idxTarget[$i]=-1;
	}
}
#begin dealing with templates

for(my $ti=0;$ti<@tmplIds;$ti++){
    my $hMatch=0;
    $template=$fullsequence{$tmplIds[$ti]};
    $alnMatchMulti[$ti]=[qw(-1)x $nAliLen];
    for($i=0;$i<$nAliLen;$i++)
    {
	if(substr($template,$i,1) ne '-'){
	    $idxTemp[$i]=$h2;
	    $arTempTar[$h2]=-1; #initial
	    $h2++;
	}
	else
	{
	    $idxTemp[$i]=-1;
	}
	#find the relation between this template and the target sequence
	if(substr($target,$i,1) ne '-'){
	    if(substr($template,$i,1) eq '-'){
		    my $gapLen;
		    my $gaphead;
		if($i>0 && substr($template,$i-1,1) ne '-'){
			$gapLen=0;
			$gaphead=$h1-1;
		}
		if($i==0){
			$gapLen=0;
			$gaphead=$h1-1;
		}
		$gapLen++;
		if( ($i<$nAliLen-1 && substr($template,$i+1,1) ne '-' ) || $i==$nAliLen-1 ){
			#end of a gap
			my @gappair=($gaphead,$h1-1);
			push @gapPart, \@gappair;
		}
	    }
	}
	if(substr($target,$i,1) ne '-'){
	    if(substr($template,$i,1) ne '-'){
		$alnMatch[$i]=$hMatch;
		my @pair=qw();
		$pair[0]=$idxTarget[$i];
		$pair[1]=$idxTemp[$i];
		$alnMatchAll[$hMatch]=\@pair;
		$alnMatchMulti[$ti][$i]=$hMatch;
		#$alnMatchAll[$hMatch][1]=$tempRes;
		$hMatch++;
		#$idxTemp[$i],$idxTarget[$i]
		$arTarTemp[$idxTarget[$i]]=$idxTemp[$i]; # will be -1 in unaligned regions
		$arTempTar[$idxTemp[$i]]=$idxTarget[$i];
	    }
	}
#	push @aAlignScore, ScoreSS($i);
    }
    for(my $ti=0;$ti<@tmplIds;$ti++){
	$alnMatchMultiPair[$ti]=[qw()];
	for(my $tj=$ti+1;$tj<@tmplIds;$tj++){
	    my $hMatch=0;
	    my $tempseq1=$fullsequence{$tmplIds[$ti]};
	    my $tempseq2=$fullsequence{$tmplIds[$tj]};
	    $alnMatchMultiPair[$ti][$tj]=[qw(-1) x $nAliLen];
	    for($i=0;$i<$nAliLen;$i++){
		if(substr($tempseq1,$i,1) ne '-'){
		    if(substr($tempseq2,$i,1) ne '-'){
			$alnMatchMultiPair[$ti][$tj][$i]=$hMatch;
			#$alnMatchAll[$hMatch][1]=$tempRes;
			$hMatch++;		
		    }
		}
	    }	
	}
    }	

#print @idxTarget;exit;
#warn "aln match length",scalar(@alnMatchAll);
#if($ti==0){
    $rr[0]=\@idxTarget;
#}
#get quality of alignment for each target
#run rank_access
#@parse the result of rank_assess

    push @rr,\@idxTemp;    
    push @rr,\@arTarTemp;#2 $arTarTemp[absolute residue number in pir target sequence]=absolute residue number in pir template sequence.
    push @rr,\@arTempTar;
    push @rr,\%sequences;#4 $sequences{$seq}=$sequence content without "-".
    push @rr,\@tmplIds;
    push @rr,$trgtId; 
    push @rr,\@arTargetAlign;#7
    push @rr,\@alnMatch;
    push @rr,\@alnMatchAll; #9, 2d array, map from aln matched position (from 0) to [1, target res position; 2, temp res position]
    push @rr,\@gapPart; #10 only template missing gap is recorded. $gapPart[0] contain (i,j) for the 0th gap, i,j is the target res 
    push @rr,\%fullsequence; #11 , full sequence inlcude alignment '-'
    push @rr,\@targetQa; #12
    push @rr,\@alnMatchMulti; #13
    push @rr,\@alnMatchMultiPair;
}

return @rr;
}


sub PIRgap
{
    #input the result of PIR, return arFarFromGap[i],i is the position in alignment
    my @rr;
    my @pir=@{$_[0]};
    my @idxTarget=@{$pir[0]};
    my @idxTemp=@{$pir[1]};
    my @arFarFromGap;
    my @gaps;
    for(my $i=0;$i<@idxTemp;$i++){
	$gap[$i]=0;
	$gap[$i]=1 if($idxTemp[$i]==-1 || $idxTarget[$i]==-1);
    }
    print "",@idxTemp+0;
    $dist=0;
    for(my $i=0;$i<@idxTemp;$i++){
	if(!$gap[$i]){$dist++;}
	else{
	    $dist=0;
	}
	$arFarFromGap[$i]=$dist;
    }
    print STDERR join("",@arFarFromGap),"\n";
    $dist=0;
    for(my $i=@idxTemp-1;$i>=0;$i=$i-1){
	if(!$gap[$i]){$dist++;}
	else{
	    $dist=0;
	}
	$arFarFromGap[$i]=$dist if($dist<$arFarFromGap[$i]);
    }
#    if(my $i=0;$i<@arFarFromGap;$i++){
    print STDERR join("",@arFarFromGap),"\n";
 #   }
    return (\@arFarFromGap);
}

sub GetPSSMs_old
{
    #input one pir file
    #output pssms for each sequence in the pir file.
    #check if pssm exist.
    my $pirfile=$_[0];
    my @p=split(/\//,$pirfile);
    my %mpSeqPssm;
    $p[@p+0]=$p[@p-1];
    $p[@p-2]="pssm";
    $dir=join("/",@p[0..@p-2]);
    unless(-d $dir){
	mkdir $dir;
    }
    @pirrst=ParsePIR($pirfile);
    %seqs=%{$pirrst[4]};
    
    for $seqid(keys %seqs)
    {
	$pssmfile=$dir."/".$seqid.".pssm";
	my $FNTMPSEQ="$dir/$seqid.seq";
	open FH,">$FNTMPSEQ";
	print FH $seqs{$seqid}; 
	close FH;
	if(! (-e $pssmfile))
	{
	    #call psiblast
	    $cmd="\$PSIBLASTEXE -d \$BLASTPGP_DB -j 3 -h 0.001 -i $FNTMPSEQ -Q $pssmfile";
	    `$cmd\n`;
	}
	#parse pssm
	my @pssmrst=ParsePSSM("$pssmfile");
	my @pssmSeq=@{$pssmrst[0]};
	my @pssmFeat=@{$pssmrst[1]};
	$mpSeqPssm{$seqid}=\@pssmrst; 
    }

    return (\%mpSeqPssm);
}

sub ParseTpl
{
    my %res;
    open FH,"<$_[0]" or die " no tpl file $_[0]\n";
#    shift;
#    my %extra=map{$_=>1} @_;
    my $istgt=0;
    my ($name,$path,$suffix) = fileparse($_[0],qw(.tpl .tgt));
    if($suffix eq ".tgt" ){
	$istgt=1;
	warn "tgt reading...";
    }
    my $seqid;
    my $chainId;
    my $seqres;
    my $seqdssp;
    my $ver;
    my $line=<FH>;chomp($line);my @p=split/\s+/,$line;$ver=$p[1];
   
#    die $ver;
    if($istgt){
	while(<FH>){
	    chomp;
	    if(/Sequence Name/){
		my @p=split/\s+/;
		$seqid=$p[3];
		my $chainLine=<FH>;
		chomp($chainLine);
		@p=split/\s+/,$chainLine;
		$chainId=$p[3];
		last;
	    }
	}
    }else{
        while(<FH>){
	    chomp;
	    if(/Template Name  = /){
		my @p=split/\s+/;
		$seqid=$p[3];
		my $chainLine=<FH>;
		chomp($chainLine);
		@p=split/\s+/,$chainLine;
		$chainId=$p[3];
		last;
	    }
	}
    }
    $res{seqId}=$seqid; #include chain name
    $res{chainId}=$chainId;
    if($istgt){
	while(<FH>){
	chomp;
	if(/Sequence/){
	    my @p=split/\s+/;
	    $seqres=$p[2];
	    print STDERR $seqres."\n" if($DEBUG);
	    last;
	}
	}
	if($ver eq "1.1"){
	    #read SSEseq
	    while(<FH>){ 
		chomp;
		if(/SSEseq/){
		    my @p=split/\s+/;
		    my @predss3=split("",$p[2]);
		    $res{predss3}=\@predss3; #letter
		    last;
		}
	    }
	}
    }else{
	while(<FH>){
	    chomp;
	    if(/SEQRES/){
		my @p=split/\s+/;
		$seqres=$p[3];
		print STDERR $seqres."\n" if($DEBUG);
		last;
	    }
	}
    }
    $res{seqres}=$seqres;
    $res{len}=length($seqres);
    if($istgt==0){ #tpl only
	while(<FH>){
	    if(/DSSP/){
		my @p=split/\s+/;
		$seqdssp=$p[3];
		print STDERR $seqdssp."\n" if($DEBUG);
		last;
	    }
	}
       my $s=0;
	my $h=0;
	my @seqres_dssp=(-1) x length($seqres);
	for(my $i=0;$i<length($seqres);$i++){
	    if(substr($seqdssp,$i,1) ne '-'){
		$seqres_dssp[$i]=$h; #suppose seqres contains no '-'
		$h++;
	    }
	}
	$res{SeqresDsspIndex}=\@seqres_dssp; # seqres_dssp[seqres pos]:= dssp position or -1
    }
 
    #-----end of SeqresDsspIndex --------
    #get neff
    while(<FH>){
	chomp;
	if(/NEFF/){
	    my @p=split/\s+/;
	    $res{neff}=$p[2];
	    last;
	}
    }
    #-----begin of secondary structure --------
    my @ss8;
    my @ca;
    my @cb;
    if($istgt==1){
    }else{
	while(<FH>){
	    chomp;
	    if(/Features/){
		<FH>;#skip the header
		    for(my $i=0;$i<length($seqres);$i++){
			my $oneSS=<FH>;
			chomp($oneSS);
			$oneSS=~s/^\s+//;
			my @p=split/\s+/,$oneSS;
			print STDERR "TPL feature line has wrong number of items.\n".join(" ",@p) if ( (scalar(@p)!=15) && (scalar(@p)!=9) );
			push @ss8,$p[3]; # native ss8 features
			if(scalar(@p)==15){
			    push @ca,[$p[9],$p[10],$p[11]];
			    push @cb,[$p[12],$p[13],$p[14]]; # save ca and cb coordinates
			}else{
			    push @ca,[];
			    push @cb,[];
			}
		    }
		last;
	    }    
	}
    }
    $res{ss8}=\@ss8; #letter for seqres
    $res{ca}=\@ca;
    $res{cb}=\@cb;
    #warn(join(",",@ss8));die;
    
    #-----begin of get psipred SS results.------
    my @ss3char=qw(H E C);

    if($ver eq "1.1"){
	#no reading for ss2 result in ver 1.1 tgt/tpl
    }
    else{
    my @predss3;
    my @ss3prob;
    my %ssCount;
    $ssCount{C}=0;    $ssCount{E}=0;    $ssCount{H}=0;
	while(<FH>){
	    if(/Original SS2 file/){
		<FH>; #skip one line
		for(my $i=0;$i<length($seqres);$i++){
		    my $oneSS=<FH>;
		    chomp($oneSS);
		    my @p=split/\s+/,$oneSS;
		    push @predss3,$p[3]; #C H E
		    $ssCount{$p[3]}++;
		    @p=@p[5..6,4]; #psipred 0,coil,1,helix,2,beta
		    push @ss3prob,\@p;
		}
		last;
	    }
	}
	$res{ss3prob}=\@ss3prob; #prob[i][0 ,1 ,2], is associated with alpha beta coil.
	$res{predss3}=\@predss3; #letter
	$res{ssCount}=\%ssCount;
    }
    #begin parsing original psp file
    while(<FH>){
	if(/Original PSP file/){
	    last;
	}
    }
    my $line=<FH>; # skip the data line
    my @pssmSeq;my @pssmOrig;
    my @pssmFeat;
    for(my $i=0;$i<$res{len};$i++){
	$pssmOrig[$i]=<FH>;chomp($pssmOrig[$i]);
	$pssmOrig[$i]=~s/^\s+//;
	my @p=split/\s+/,$pssmOrig[$i];
	shift @p;
	$pssmSeq[$i]=shift @p;
	$pssmFeat[$i]=\@p;
    }
    $res{psp}=\@pssmFeat;

    #-----begin of hhEmission --------
    my @hhEmmission;
    my @hhTrans;
    my @neffPos;
    while(<FH>){
	chomp;
	if(/Original HHM file/){
	    my $date=<FH>;
	    my $line=<FH>;chomp($line);
	    my @nullprob=split /\s+/,$line;shift @nullprob;
	    <FH>;<FH>; <FH>; # skip column header 3 lines
	    for(my $i=0;$i<length($seqres);$i++){
		 my $oneEmmision=<FH>;
		 chomp($oneEmmision);
		 my @p=split/\s+/,$oneEmmision;
		 @p=@p[2..21];
		 for(my $j=0;$j<@p;$j++){
		     if($p[$j] eq '*'){
			 $p[$j]=0;
		     }else{
		     #$p[$j]=2**( ($p[$j]-$nullprob[$j])/1000.0);

			 $p[$j]=2**( -$p[$j]/1000.0);
		     }

		 }
		 #push @hhEmmission,\@p;

		 my $oneTrans=<FH>;
		 chomp($oneTrans);
		 my @p0=split/\s+/,$oneTrans;
		 @p0=@p0[1..@p0-1];
		 for(my $j=0;$j<7;$j++){
			 if($p0[$j] eq '*'){
			     $p0[$j]=0;
			 }else{
			     $p0[$j]=2**(-$p0[$j]/1000.0);
			 }
		     }
		 push @hhTrans,\@p0;		 
		 my $neff=$p0[7]/1000.0;
		 push @neffPos,$neff;
		 <FH>; # skip one empty line
		 
		 # convert emission probability

		 my @EmissionScore;
		 for(my $j=0;$j<@p;$j++){
		     my $g=0;
		     my $ind= $AA1Coding[$j];
		     for(my $k=0;$k<20;$k++){
			 $g+=$p[$k]*$gonnet[$AA1Coding[$k]][$ind]* 2.0**(-$nullprob[$j]/1000.0);
		     }
		     $EmissionScore[$j] = ($neff*$p[j]+$g*10)/($neff+10);
		 }
		 push @hhEmmission,\@EmissionScore;


	    }
	    last;
	}    
    }
    $res{hhEmmission}=\@hhEmmission;
    $res{hhTrans}=\@hhTrans;
    $res{neffPos}=\@neffPos;
    my @dsspDump;
    my @dsspss8;
    if($istgt==0){ #tpl only
	while(<FH>){
	    if(/RESIDUE AA STRUCTURE BP1 BP2/){
		push @dsspDump,$_;
		last;
	    }
	}
	while(<FH>){
	    chomp;
	    last if(/^\s*$/);
	    push @dsspDump,$_;
	    my %rst=%{parseDsspLine($_)};
	    push @dsspss8,$rst{ss8};
	}
	$res{dsspDump}=\@dsspDump;
	$res{dsspss8}=\@dsspss8; #letter for seqres
	
    }
    #---- end of HHM
    if($ver eq "1.1"){
	my @predss3;
	my @ss3prob;
	my %ssCount;
	while(<FH>){
	    if(/ Original SS3/){
		<FH>;<FH>; #skip 2 line
		for(my $i=0;$i<length($seqres);$i++){
		    my $ln=<FH>;
		    chomp($ln);
		    my @p=split/\s+/,$ln;
		    @p=@p[1..3];
		    push @ss3prob,\@p;
		    my $pi=$p[0]>$p[1]?0:1;
		    $pi=$p[$pi]>$p[2]?$pi:2;
		    $ssCount{$ss3char[$pi]}++;
		}
		last;
	    }
	}
	$res{ss3prob}=\@ss3prob; #prob[i][0 ,1 ,2], is associated with alpha beta coil.
	#	$res{predss3}=\@predss3; #letter
	$res{ssCount}=\%ssCount;
	    
    }
    #Beginning of DSSP
    my @dssplines;
    while(<FH>){
	if(/RESIDUE AA STRUCTURE/){
	   
	    push @dssplines,$_;
	    while(<FH>){
		push @dssplines,$_;
	    }
	    last;
	}
    }
    $res{dssp}=\@dssplines;
    #------- end of parsing
    close FH;
    
    return %res;
}

sub parseDsspLine{
    my %rst;
#    6    6 A I  H
    $rst{ss8}=substr($_,16,1);
    $rst{ss8}="L" if($rst{ss8} eq ' ');
    return \%rst;
}
	

sub GetPSSMs # using tpl files
{
    #input one pir file
    #output pssms for each sequence in the pir file.
    #check if pssm exist.
    my $pirfile=$_[0];
    my @p=split(/\//,$pirfile);
    my %mpSeqPssm;
    $p[@p+0]=$p[@p-1];
    $p[@p-2]="pssm";
    $dir=join("/",@p[0..@p-2]);
    unless(-d $dir){
	mkdir $dir;
    }
    @pirrst=ParsePIR($pirfile);
    %seqs=%{$pirrst[4]};
    my $tpldir="/home/RaptorX/BoostThreader/MKTEMP_old/PDB25_TEMPLATE";
    $tpldir=$ENV{"TPL_PATH"} if(defined $ENV{"TPL_PATH"});
    for $seqid(keys %seqs)
    {
	$tplfile=substr($seqid,0,5);
	open FH,"<$tpldir/$tplfile.tpl" or die "$tpldir/$tplfile.tpl not exit\n";
	my $seqres;
	my $seqdssp;
	while(<FH>){
	    chomp;
	    if(/SEQRES/){
		my @p=split/\s+/;
		$seqres=$p[3];
		print STDERR $seqres if($DEBUG);
	    }
	    if(/DSSP/){
		my @p=split/\s+/;
		$seqdssp=$p[3];
		print STDERR $seqdssp if($DEBUG);
	    }
	    if(/Original PSP file/){
		last;
	    }
	}
	my $line=<FH>;
	my @pssmOrig;
	my @pssmrst;
	my @pssmSeq;
	while(<FH>){
	    chomp;
	    last if($line eq "");
	    push @pssmOrig,$_;
	}
	for(my $i=0;$i<length($seqres);$i++){
	    if(substr($seqres,$i,1) eq substr($seqdssp,$i,1)){
		$pssmOrig[$i]=~s/^\s+//;
		my @p=split/\s+/,$pssmOrig[$i];
		@p=@p[2..21];
		push @pssmFeat,join(" ",@p);
		push @pssmSeq,substr($seqdssp,$i,1);
	    }
	}
	
	$pssmrst[0]=\@pssmSeq;
	$pssmrst[1]=\@pssmFeat;
	$mpSeqPssm{$seqid}=\@pssmrst; 
	close FH;
    }
    return (\%mpSeqPssm);
} 



sub TplGetDSSP{ #old version, continued in TemplateIO.pm, don't revise it. Save it here. Do use it before examined.
    open FH,"<$_[0]";
    while(<FH>){
	last if(/RESIDUE AA STRUCTURE/);
    }
    my $ss="";
    my @rst;
    while(<FH>){
	chomp();
	my @p=split/\s+/;
	last if(@p+0<=1);
	if(substr($_,16,1) eq " "){
	    $ss=$ss."L";
	}
	else{
	    $ss=$ss.substr($_,16,1);
	}
	if(substr($_,13,1) eq "!"){
	    push @rst,convert_label83($ss);
	    
	    $ss="";
	}
    }
    push @rst,convert_label83($ss);
   
    close FH;
    return @rst;
}

sub GetTailTempGap{
    my @arTarTemp=@{$_[0][2]};
    my @tailTempGap=qw(0) x scalar(@arTarTemp);
    my @midTempGap=qw(0) x scalar(@arTarTemp);
    for(my $i=0;$i<@arTarTemp;$i++){
	if((!defined $arTarTemp[$i]) ||  ($arTarTemp[$i]<0) ){
	    $tailTempGap[$i]=1;
	}else{
	    last;
	}
    }
    for(my $i=@arTarTemp-1;$i>=0;$i--){
	if( (!defined $arTarTemp[$i]) || $arTarTemp[$i]<0 ){
	    $tailTempGap[$i]=1;
	}else{
	    last;
	}
    }
    
    for(my $i=0;$i<@arTarTemp;$i++){
	if( (!defined $arTarTemp[$i]) ||  ($arTarTemp[$i]<0) ){
	    if($tailTempGap[$i]!=1){
		$midTempGap[$i]=1;
	    }
	}
    }
    my @rst=BioProtein::GetSSindex(@tailTempGap);
    my @tailTempGapIdx=@{$rst[0]};
    my @tailTempGapLen=@{$rst[3]};
    for(my $i=0;$i<@arTarTemp;$i++){
	my $idx=$tailTempGapIdx[$i];
	if($tailTempGap[$i]==1 && $tailTempGapLen[$idx]>20){
	    $tailTempGap[$i]=1;	
	}
	else{
	    $tailTempGap[$i]=0;	
	}
    }
    
    @rst=BioProtein::GetSSindex(@midTempGap);
    my @midTempGapIdx=@{$rst[0]};
    my @midTempGapLen=@{$rst[3]};
    for(my $i=0;$i<@arTarTemp;$i++){
	my $idx=$midTempGapIdx[$i];
	
	if($midTempGap[$i]==1 && $midTempGapLen[$idx]>20){
	    $midTempGap[$i]=1;	
	}
	else{
	    $midTempGap[$i]=0;	
	}
    }
    
    return (\@tailTempGap,\@midTempGap);
}

sub ReAlignBeta{
	
    my $pirfile=$_[0];
    my $tplfile=$_[1];
    my $outfile=$_[2];
    #input pir file
    my @pirrst=ParsePIR($pirfile);
    my @tplrst=ParseTpl($tplfile);
    for(my $i=0;$i<@betaParPair;$i++){
	#no extend echo pair.
	#for(my 
    }
    #output pir file
    #from template native SS
    my @tgrtEE;
    my @cis;#$cis[a] a from 1 to max(tgtPredSSidx)
    my @trans;
    my @tgtPredSSidx=@tgtPredSSTempidx;
    my @tgtPredSShead=@tgtPredSSTemphead;
    my @tgtPredSSend=@tgtPredSSTempend;
    for(my $e1=0;$e1<=$tgtPredSSidx[@tgtPredSSidx-1];$e1++){
	my @q; #=qw(0)x $tgtPredSSidx[@tgtPredSSidx-1] ;
	$tgtSSoffset[$e1]=\@q;
	for(my $e2=$e1+1;$e2<=$tgtPredSSidx[@tgtPredSSidx-1];$e2++){
		$tgtSSoffset[$e1][$e2]=0;
		$tgtSSoffset[$e2][$e1]=0;
	}
    }		
    #count cis and trans in each 
    for(my $res1=0;$res1<@tgtPredSSidx;$res1++)
    {
	my @p=qw(0)x ($tgtPredSSidx[@tgtPredSSidx-1]+1) ;
	my @q=qw(0)x ($tgtPredSSidx[@tgtPredSSidx-1]+1);
	$cis[$tgtPredSSidx[$res1]]=\@p if($res1==0 || $tgtPredSSidx[$res1-1]!=$tgtPredSSidx[$res1]);
	$trans[$tgtPredSSidx[$res1]]=\@q if($res1==0 || $tgtPredSSidx[$res1-1]!=$tgtPredSSidx[$res1]);
	for(my $res2=$res1+1;$res2<@tgtPredSSidx;$res2++)
	{
		my $tempres1=$arTarTemp[$res1]; # arTarTemp[target seqres residue number] = template residue in dssp res
		my $tempres2=$arTarTemp[$res2];
		  #warn "tempres1 tempres2 $tempres1 $tempres2";
		 #case 1 , parallel
		my $b1=(defined  $hPairRes[$tempres1] && $hPairRes[$tempres1] == $tempres2 && defined $hPairRes[$tempres1+1] && $hPairRes[$tempres1+1]==$tempres2+1 );
		my $br1=(defined  $hPairRes[$tempres2] && $hPairRes[$tempres2] == $tempres1 && defined $hPairRes[$tempres2+1] && $hPairRes[$tempres2+1]==$tempres1+1 );
		#case 2, anti parallel
		my $b2=(defined  $hPairRes[$tempres1] && $hPairRes[$tempres1] == $tempres2 && defined $hPairRes[$tempres1+1] && $hPairRes[$tempres1+1]==$tempres2-1 );
		my $br2=(defined  $hPairRes[$tempres2] && $hPairRes[$tempres2] == $tempres1 && defined $hPairRes[$tempres2+1] && $hPairRes[$tempres2+1]==$tempres1-1 );
		if($b1||$br1){
		#    $cis[$tgtPredSSidx[$res1]][$tgtPredSSidx[$res2]]++;
		    my $e1=$tgtPredSSidx[$res1];
		    my $e2=$tgtPredSSidx[$res2];
		    $cis[$e1][$e2]++; #anti parallel
		    $of=  ($res2-$tgtPredSShead[$e2]) - ($res1-$tgtPredSShead[$e1]); # offset is the number of residues, e1 should add to align with e2
		    $tgtSSoffset[$e1][$e2]=$of;
		    $tgtSSoffset[$e2][$e1]=-$of; 
		    #warn 'cis [$tgtPredSSidx[$res1]][$tgtPredSSidx[$res2]]';
		    
		}
		if($b2||$br2){
		    my $e1=$tgtPredSSidx[$res1];
		    my $e2=$tgtPredSSidx[$res2];
		    $trans[$e1][$e2]++; #anti parallel
		    $of=  ($res2-$tgtPredSShead[$e2]) - ($tgtPredSSend[$e1]-$res1); # offset is the number of residues, e1 should add to align with e2
		    $tgtSSoffset[$e1][$e2]=$of;
		    $tgtSSoffset[$e2][$e1]=-$of;
		    #warn 'cis [$tgtPredSSidx[$res1]][$tgtPredSSidx[$res2]]';
		}
	}			
    }
    for(my $e1=0;$e1<=$tgtTempSSidx[@tgtTempSSidx-1];$e1++){
	my @p;
	$tgrtEE[$e1]=\@p;
	#my @q;
	#$tgtSSoffset[$e1]=\@q;
	for(my $e2=$e1+1;$e2<=$tgtTempSSidx[@tgtTempSSidx-1];$e2++){
		if($trans[$e1][$e2]>$cis[$e1][$e2] && $trans[$e1][$e2]>=2){ # parallel
		    $tgrtEE[$e1][$e2]=1;
		}
		if($trans[$e1][$e2]<$cis[$e1][$e2] && $cis[$e1][$e2]>=2){ #anti parallel
		    $tgrtEE[$e1][$e2]=-1;
		} 
		
	}	
    }
}

sub GetTempBetaInter{ # for target
    #from template native SS
    #input (@tgtPredSSTempIndexSet,@hPairRes)
    #output @trgtEE;
    my @tgrtEE;
    my @cis;#$cis[a] a from 1 to max(tgtPredSSidx)
    my @trans;
     my @tgtSSoffset;
    #my @tgtPredSSidx=@tgtPredSSTempidx;
    #my @tgtPredSShead=@tgtPredSSTemphead;
    #my @tgtPredSSend=@tgtPredSSTempend;
    
    my @tgtPredSSidx=@{$_[0][0]};
    my @tgtPredSShead=@{$_[0][1]};
    my @tgtPredSSend=@{$_[0][2]};
    
    for(my $e1=0;$e1<=$tgtPredSSidx[@tgtPredSSidx-1];$e1++){
	my @q; #=qw(0)x $tgtPredSSidx[@tgtPredSSidx-1] ;
	$tgtSSoffset[$e1]=\@q;
	for(my $e2=$e1+1;$e2<=$tgtPredSSidx[@tgtPredSSidx-1];$e2++){
		$tgtSSoffset[$e1][$e2]=0;
		$tgtSSoffset[$e2][$e1]=0;
	}
    }		
    #count cis and trans in each 
    for(my $res1=0;$res1<@tgtPredSSidx;$res1++)
    {
	my @p=qw(0)x ($tgtPredSSidx[@tgtPredSSidx-1]+1) ;
	my @q=qw(0)x ($tgtPredSSidx[@tgtPredSSidx-1]+1);
	$cis[$tgtPredSSidx[$res1]]=\@p if($res1==0 || $tgtPredSSidx[$res1-1]!=$tgtPredSSidx[$res1]);
	$trans[$tgtPredSSidx[$res1]]=\@q if($res1==0 || $tgtPredSSidx[$res1-1]!=$tgtPredSSidx[$res1]);
	for(my $res2=$res1+1;$res2<@tgtPredSSidx;$res2++)
	{
		my $tempres1=$arTarTemp[$res1]; # arTarTemp[target seqres residue number] = template residue in dssp res
		my $tempres2=$arTarTemp[$res2];
		  #warn "tempres1 tempres2 $tempres1 $tempres2";
		 #case 1 , parallel
		my $b1=(defined  $hPairRes[$tempres1] && $hPairRes[$tempres1] == $tempres2 && defined $hPairRes[$tempres1+1] && $hPairRes[$tempres1+1]==$tempres2+1 );
		my $br1=(defined  $hPairRes[$tempres2] && $hPairRes[$tempres2] == $tempres1 && defined $hPairRes[$tempres2+1] && $hPairRes[$tempres2+1]==$tempres1+1 );
		#case 2, anti parallel
		my $b2=(defined  $hPairRes[$tempres1] && $hPairRes[$tempres1] == $tempres2 && defined $hPairRes[$tempres1+1] && $hPairRes[$tempres1+1]==$tempres2-1 );
		my $br2=(defined  $hPairRes[$tempres2] && $hPairRes[$tempres2] == $tempres1 && defined $hPairRes[$tempres2+1] && $hPairRes[$tempres2+1]==$tempres1-1 );
		if($b1||$br1){
		#    $cis[$tgtPredSSidx[$res1]][$tgtPredSSidx[$res2]]++;
		    my $e1=$tgtPredSSidx[$res1];
		    my $e2=$tgtPredSSidx[$res2];
		    $cis[$e1][$e2]++; #anti parallel
		    $of=  ($res2-$tgtPredSShead[$e2]) - ($res1-$tgtPredSShead[$e1]); # offset is the number of residues, e1 should add to align with e2
		    
		    $tgtSSoffset[$e1][$e2]=$of;
		    $tgtSSoffset[$e2][$e1]=-$of; 
		    #warn 'cis [$tgtPredSSidx[$res1]][$tgtPredSSidx[$res2]]';
		    
		}
		if($b2||$br2){
		    my $e1=$tgtPredSSidx[$res1];
		    my $e2=$tgtPredSSidx[$res2];
		    $trans[$e1][$e2]++; #anti parallel
		    $of=  ($res2-$tgtPredSShead[$e2]) - ($tgtPredSSend[$e1]-$res1); # offset is the number of residues, e1 should add to align with e2
		    $tgtSSoffset[$e1][$e2]=$of;
		    $tgtSSoffset[$e2][$e1]=-$of;
		    #warn 'cis [$tgtPredSSidx[$res1]][$tgtPredSSidx[$res2]]';
		}
	}			
    }
    for(my $e1=0;$e1<=$tgtPredSSidx[@tgtPredSSidx-1];$e1++){
	my @p;
	$tgrtEE[$e1]=\@p;
	#my @q;
	#$tgtSSoffset[$e1]=\@q;
	for(my $e2=$e1+1;$e2<=$tgtPredSSidx[@tgtPredSSidx-1];$e2++){
		$tgrtEE[$e1][$e2]=0;
		$tgrtEE[$e2][$e1]=0;
		#warn "tgrtEE $e1 $e2";
		if($trans[$e1][$e2]>$cis[$e1][$e2] && $trans[$e1][$e2]>=2){
		    $tgrtEE[$e1][$e2]=1;
		    $tgrtEE[$e2][$e1]=1;
		    #warn "tgrtEE $e1 $e2 1";
		}
		if($trans[$e1][$e2]<$cis[$e1][$e2] && $cis[$e1][$e2]>=2){
		    $tgrtEE[$e1][$e2]=-1;
		    $tgrtEE[$e2][$e1]=-1;
		    #warn "tgrtEE $e1 $e2 -1";
		} 
	}	
    }
    return @tgrtEE;
}

sub getCaPairDist{
    my    $tpl=$_[0];
    my $seqlen=$tpl->{len};
    my @dist;
    for(my $i=0;$i<$seqlen;$i++){
	for(my $j=0;$j<$seqlen;$j++){
	    if(defined $tpl->{ca}[$i][0] && defined  $tpl->{ca}[$j][0]){
		if(!defined $dist[$i]){
		    $dist[$i]=[];
		}
		$dist[$i][$j]=sqrt( ($tpl->{ca}[$i][0]-$tpl->{ca}[$j][0])**2+($tpl->{ca}[$i][1]-$tpl->{ca}[$j][1])**2+($tpl->{ca}[$i][2]-$tpl->{ca}[$j][2])**2);
		
	    }
	}
    }
    return \@dist;
}

sub getCbPairDist{
    my $tpl=$_[0];
    my $seqlen=$tpl->{len};
    my @dist;
    for(my $i=0;$i<$seqlen;$i++){
	for(my $j=0;$j<$seqlen;$j++){
	    if(defined $tpl->{cb}[$i][0] && defined  $tpl->{cb}[$j][0]){
		if(!defined $dist[$i]){
		    $dist[$i]=[];
		}
#		if($i==1 && $j==37){
#		    printf "%g %g %g %g %g %g",$tpl->{cb}[$i][0],$tpl->{cb}[$j][0],$tpl->{cb}[$i][1],$tpl->{cb}[$j][1],$tpl->{cb}[$i][2],$tpl->{cb}[$j][2];
#		}
		$dist[$i][$j]=sqrt( ($tpl->{cb}[$i][0]-$tpl->{cb}[$j][0])**2+($tpl->{cb}[$i][1]-$tpl->{cb}[$j][1])**2+($tpl->{cb}[$i][2]-$tpl->{cb}[$j][2])**2);

		
	    }
	}
    }
    return \@dist;
}

1;
