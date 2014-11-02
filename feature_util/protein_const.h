#ifndef _IP_CONSTANT_H
#define _IP_CONSTANT_H

#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <math.h>
#include <sys/types.h>

/*
#if defined(SGICC)
#ifndef _BOOL
typedef unsigned int bool;
const int false=0;
const int true=1;
//#define false 0
//#define true 1
#endif
#endif
*/

#define ErrorLogFile	"IPThread_error.log"
#define CPULogFile	"IPThread_cpu.log"
#define OUTOFTIME_FILE	"IPThread_out_of_time.log"

#ifndef WIN32
#define FSEP	'/'
#define FSEPSTR "/"
#else
#define FSEP '\\'
#define FSEPSTR "\\"
#endif

#define MAX_RESID_LEN	6

#define MaxTemplateSize	1500 //upper limit of template size
#define MaxSeqSize	1200
#define MaxCoreSize	90  //upper limit of number of cores
#define ResidueTypes	20	//20 different aa types
#define SolventTypes	3 	//3 types of solvent accessibilities
#define StructTypes	3	//3 types of secondary structures


#define MaxNodeSize	MaxCoreSize

//for three kinds of secondary strucuture
//in order to be consistent with the singleton parameter, u can't change the value

#define HELIX	0
#define SHEET	1
#define LOOP	2

//for solvent types
//in order to be consistent with the singleton parameter, u can't change the value

#define BURIED		0
#define INTERMEDIATE	1
#define EXPOSED		2
#define NO_ASSIGNMENT	100


#define NONAMINO	20  //the 21-st amino acid
#define MaxLineSize	1024 //the max length of one line from the input file
#define MAX_STRING_LEN 256

//the max accessibilities of each kind of AA

const	int maxAcc[21]={101,242,171,161,127,190,195,73,193,174,182,200,192,214,127,122,144,259,235,148,-1};

//the conversion of AA to subScript
const 	int AA2SUB[26]={0,20,1,2,3,4,5,6,7,20,8,9,10,11,20,12,13,14,15,16,20,17,18,20,19,20};

/*AA1Coding ???
 * From 0-20[ACDE...] to 0-20[ARND...] 
 */
const char AA1Coding[21]={0,4,3,6,13,7,8,9,11,10,12,2,14,5,1,15,16,19,17,18,20}; 

char* const AA3Coding[26]={"ALA","XXX","CYS","ASP","GLU","PHE","GLY","HIS","ILE","XXX","LYS","LEU","MET","ASN","XXX","PRO","GLN","ARG","SER","THR","XXX","VAL","TRP","XXX","TYR","XXX"};

inline int AA3toAAcode(const char* x)
{
  for(int i=0;i<26;i++)
    if(strcmp(AA3Coding[i],x)==0){
      //      return AA2SUB[i];//Return 0-19 [ACDE...] if a valid AA, 20 for others.
      return AA1Coding[AA2SUB[i]];//Return 0-19 [ARND...] if a valid AA, 20 for others.
    }
  return 20;
}

unsigned int const POW2[31]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,1<<16,1<<17, 1<<18,1<<19,1<<20,1<<21,1<<22,1<<23,1<<24,1<<25,1<<26,1<<27,1<<28,1<<29,1<<30};

const int POW3[11]={1,3,9,27,81,243,729,2187,6561,19683,59049};

//when algin one domain to one sequence, almost all cores must be aligned
//domainAlignLenLowerBound[i] is the least align length when the number of cores is i.
const int domainAlignLenLowerBound[45]={0,1,2,3,4,5,6,6,7,7,8,9,10,10,11,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};

const char ThreeLetterOrder[21] = {'A','R','N','D','C','Q','E','G','H','I','L','K','M','F','P','S','T','W','Y','V','Z'};
const char AAChar2Num[256]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,4,3,6,13,7,8,9,-1,11,10,12,2,-1,14,5,1,15,16,-1,19,17,-1,18,20,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}; // order as Three letter order.'A','R','N','D','C','Q','E','G','H','I','L','K','M','F','P','S','T','W','Y','V','Z'};

const char AAChar2NumAln[256]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,20,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,4,3,6,13,7,8,9,-1,11,10,12,2,-1,14,5,1,15,16,-1,19,17,-1,18,20,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}; // AAChar2NumAln['-']=20 in addition to AAChar2Num


const char SSletter[3]={'H', 'E', 'C'};
const char SSChar2Num[256]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,2,-1,1,-1,-1,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

const int Blo_AA_Map[21]= { 0,19, 4, 3, 6, 13,7, 8, 9, 17,11,10,12,2, 18,14,5, 1, 15,16,20};
const int Ori_AA_Map[26]= { 0,20,2,3,4,5,6,7,8,20,10,11,12,13,20,15,16,17,18,19,20, 1, 9,20,14,20};

const int Ori_BLOSUM_62[21][21]={
{  4, -1, -2, -2,  0, -1, -1,  0, -2, -1, -1, -1, -1, -2, -1,  1,  0, -3, -2,  0, -5 },  //A
{ -1,  5,  0, -2, -3,  1,  0, -2,  0, -3, -2,  2, -1, -3, -2, -1, -1, -3, -2, -3, -5 },  //R
{ -2,  0,  6,  1, -3,  0,  0,  0,  1, -3, -3,  0, -2, -3, -2,  1,  0, -4, -2, -3, -5 },  //N
{ -2, -2,  1,  6, -3,  0,  2, -1, -1, -3, -4, -1, -3, -3, -1,  0, -1, -4, -3, -3, -5 },  //D
{  0, -3, -3, -3,  9, -3, -4, -3, -3, -1, -1, -3, -1, -2, -3, -1, -1, -2, -2, -1, -5 },  //C
{ -1,  1,  0,  0, -3,  5,  2, -2,  0, -3, -2,  1,  0, -3, -1,  0, -1, -2, -1, -2, -5 },  //Q
{ -1,  0,  0,  2, -4,  2,  5, -2,  0, -3, -3,  1, -2, -3, -1,  0, -1, -3, -2, -2, -5 },  //E
{  0, -2,  0, -1, -3, -2, -2,  6, -2, -4, -4, -2, -3, -3, -2,  0, -2, -2, -3, -3, -5 },  //G
{ -2,  0,  1, -1, -3,  0,  0, -2,  8, -3, -3, -1, -2, -1, -2, -1, -2, -2,  2, -3, -5 },  //H
{ -1, -3, -3, -3, -1, -3, -3, -4, -3,  4,  2, -3,  1,  0, -3, -2, -1, -3, -1,  3, -5 },  //I
{ -1, -2, -3, -4, -1, -2, -3, -4, -3,  2,  4, -2,  2,  0, -3, -2, -1, -2, -1,  1, -5 },  //L
{ -1,  2,  0, -1, -3,  1,  1, -2, -1, -3, -2,  5, -1, -3, -1,  0, -1, -3, -2, -2, -5 },  //K
{ -1, -1, -2, -3, -1,  0, -2, -3, -2,  1,  2, -1,  5,  0, -2, -1, -1, -1, -1,  1, -5 },  //M
{ -2, -3, -3, -3, -2, -3, -3, -3, -1,  0,  0, -3,  0,  6, -4, -2, -2,  1,  3, -1, -5 },  //F
{ -1, -2, -2, -1, -3, -1, -1, -2, -2, -3, -3, -1, -2, -4,  7, -1, -1, -4, -3, -2, -5 },  //P
{  1, -1,  1,  0, -1,  0,  0,  0, -1, -2, -2,  0, -1, -2, -1,  4,  1, -3, -2, -2, -5 },  //S
{  0, -1,  0, -1, -1, -1, -1, -2, -2, -1, -1, -1, -1, -2, -1,  1,  5, -2, -2,  0, -5 },  //T
{ -3, -3, -4, -4, -2, -2, -3, -2, -2, -3, -2, -3, -1,  1, -4, -3, -2, 11,  2, -3, -5 },  //W
{ -2, -2, -2, -3, -2, -1, -2, -3,  2, -1, -1, -2, -1,  3, -3, -2, -2,  2,  7, -1, -5 },  //Y
{  0, -3, -3, -3, -1, -2, -2, -3, -3,  3,  1, -2,  1, -1, -2, -2,  0, -3, -1,  4, -5 },  //V
{ -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5 }}; //Z
// A   R   N   D   C   Q   E   G   H   I   L   K   M   F   P   S   T   W   Y   V   Z
// ARNDCQEGHILKMFPSTWYVZ

const short MaxFileNameLength=2048;	//the maximum file name or path length

		
const float BuryCore1=10.25; //the first cutoff for the solvent access
const float BuryCore2=42.9; //the second cuttoff for the solvent access


const int SeqEntry=0;
const int CoorEntry=1;
const int CoreEntry=4;
const int PPICoreEntry=CoreEntry+1;

const int MaxLocalLinkSize=200;
const int MaxLeftLinkSize=200;
const int MaxRightLinkSize=200;


//const int MAGNIFYFACTOR=100;


const float MAXCOOR=999; //the maximum coordinates of residues
const float MAXALIGNSCORE=1e31;



//#define ProspectPath "/home/j3xu/prospect/"
//#define SeqPath "/home/j3xu/prospect/ProteinSequences/"
//#define SeqPath "/home/j3xu/prospect/demo/test0/"


//const float Error=0.002;
const float WEIGHTMUTATE=1.0;
const float WEIGHTGAPPENALTY=1.0;
const float WEIGHTSINGLETON=0.24;
const float WEIGHTPAIR=0.46;
const float WEIGHTLOOPGAP=14.5;
const float WEIGHTNMR=300;


const int  MaxTemplateNum=5000;
const int MaxTemplateNameLength=20;



const float NPWEIGHTSINGLETON=0.50;
const float NPWEIGHTPAIR=0.0;
const float NPWEIGHTLOOPGAP=6.75;
const float NPWEIGHTGAPPENALTY=1.0;
//const float NPWEIGHTGAPPENALTY=1.25;


const int MINCORESIZE=6;
const int MINCORELEN=4;
const int MINEXLINKNUM=3;

const int MINSSFILTERFLAG=1;
const int  MINSSFILTERSIZE=3;
const float MINSSFILTERLEVEL=0.6;

const float SINGLESSFILTERLEVEL=8;

const int MAXLOOPSIZE=15;
const int MAXSKIPSEQSIZE	=30;
const int CONSERVELOOPSIZE=0;

const float FILTERCUTOFF=0.0;
const float FILTERSINGLETON=0.1;
const float FILTERMUTATE=0.1;

const float MINPAIRDIST=4;
const float OPENGAPPENALTY=10.8;
const float ONEINDELPENALTY=0.6;

const float GapOpenPenalty=3.631;
const float ElongGapPenalty=1.493;

const float LEVELONEREMOVAL=0;
const float LEVELTWOREMOVAL=0;
const float FIRSTCUT=8;
const float SECONDCUT=4;

const int FILTERCOMPLEXITY=3;
const float MAXCONTACTDIST=7.0;
const float MAXNMRCONTACTDIST=7.0;	//contact distance used for NMR
const float NMRReward=7.0;




//const bool USEGAPALIGN=false;
const bool USEGAPALIGN=true;
const bool USEENDGAP=true; //use head and tail gap

const int LOOPVARIATION=10;
const int LOOPMINSEQSIZE=100;
const float LOOPCONFIDENCE=9;


const int COREGRAYZONE=2;

const float BESTWEIGHTSSTRUCT=4.7;

const int MINALIGNEDSEQSIZE=60;

const bool CLIQUEFLAG=true; //use clique inequality as the cutting plane


const double MINDISTOf2CORES=11.621*pow(0.25,0.359)+0.5;

const int MaxDegree=15;

typedef float SCORE_T;
typedef short DOMAIN_T;

#define PROB_BASE	100.0

#define LOOPFINDER	1

const float PSM_aver[21]={6.4661,13.0051,11.824,13.9727,25.1246,11.04,11.2611,16.757,14.2443,13.6784,14.1105,10.9099,12.1047,17.5259,19.3949,7.7492,7.6928,27.4168,15.3683,10.9346,0};

const int LPPrimalSimplex=0;
const int LPDualSimplex=1;
const int LPEitherSimplex=2;
const int LPBarrier=3;
//for small problem, using simplex, for big problem, use barrier
const int LPSmart=4; 

//template rank method
const int RankBySVM=1;
const int RankByZRaw=2;
const int RankByRawScore=3;

#define ALIGN_ACTION	1
#define INSERT_ACTION	2
#define DELETE_ACTION	3


//for NMR constraint
#define CB2CB	1 	//bond between two CB atoms
#define CA2CA	2	//bond between two CA atoms
#define CB2CA	4	//bond between CB and CA
#define CA2CB	CB2CA

const float HMMNull[21]={3706,5728,4211,4064,4839,3729,4763,4308,4069,3323,5509,4640,4464,4937,4285,4423,3815,3783,6325,4665,0};


const int M_M = 0;
const int M_I = 1;
const int M_D = 2;
const int I_M = 3;
const int I_I = 4;
const int D_M = 5;
const int D_D = 6;
const int _NEFF = 7;
const int I_NEFF = 8;
const int D_NEFF = 9;

#define NOCOREALIGNBITS	1	//disable using coreAlignBits

#define Num_Mandatory	12
const char* const Mandatory_Lines []={"HEADER", "TITLE","KEYWDS","EXPDTA","AUTHOR","REVDAT","CRYST1","ORIGX1","SCALE","MASTER","TER   ","END   "};


#define ALG_NOCORE	"nc"
#define ALG_DP		"np"
#define ALG_NP		"np"
#define ALG_IP		"ip"
#define ALG_NMR		"nmr"
#define ALG_NMR_NOCORE	"ncNMR"
#define ALG_GLOBAL	"global"	//this is only used for protein-protein interaction  prediction
#define ALG_DC		"dc"
#define ALG_SMART	"smart"
#define ALG_TD		"td"	//do threading via tree decomposition


const float gonnet[20][20]= { { 1.7378,0.870964,0.933254,0.933254,1.12202,0.954993,1,1.12202,0.831764,0.831764,0.758578,0.912011,0.851138,0.588844,1.07152,1.28825,1.14815,0.436516,0.60256,1.02329},{ 0.870964,2.95121,1.07152,0.933254,0.60256,1.41254,1.09648,0.794328,1.14815,0.57544,0.60256,1.86209,0.676083,0.47863,0.812831,0.954993,0.954993,0.691831,0.660693,0.630957},{ 0.933254,1.07152,2.39883,1.65959,0.660693,1.1749,1.23027,1.09648,1.31826,0.524807,0.501187,1.20226,0.60256,0.489779,0.812831,1.23027,1.12202,0.436516,0.724436,0.60256},{ 0.933254,0.933254,1.65959,2.95121,0.47863,1.23027,1.86209,1.02329,1.09648,0.416869,0.398107,1.12202,0.501187,0.354813,0.851138,1.12202,1,0.301995,0.524807,0.512861},{ 1.12202,0.60256,0.660693,0.47863,14.1254,0.57544,0.501187,0.630957,0.74131,0.776247,0.707946,0.524807,0.812831,0.831764,0.489779,1.02329,0.891251,0.794328,0.891251,1},{ 0.954993,1.41254,1.1749,1.23027,0.57544,1.86209,1.47911,0.794328,1.31826,0.645654,0.691831,1.41254,0.794328,0.549541,0.954993,1.04713,1,0.537032,0.676083,0.707946},{ 1,1.09648,1.23027,1.86209,0.501187,1.47911,2.29087,0.831764,1.09648,0.537032,0.524807,1.31826,0.630957,0.40738,0.891251,1.04713,0.977237,0.371535,0.537032,0.645654},{ 1.12202,0.794328,1.09648,1.02329,0.630957,0.794328,0.831764,4.57088,0.724436,0.354813,0.363078,0.776247,0.446684,0.301995,0.691831,1.09648,0.776247,0.398107,0.398107,0.467735},{ 0.831764,1.14815,1.31826,1.09648,0.74131,1.31826,1.09648,0.724436,3.98107,0.60256,0.645654,1.14815,0.74131,0.977237,0.776247,0.954993,0.933254,0.831764,1.65959,0.630957},{ 0.831764,0.57544,0.524807,0.416869,0.776247,0.645654,0.537032,0.354813,0.60256,2.51189,1.90546,0.616595,1.77828,1.25893,0.549541,0.660693,0.870964,0.660693,0.851138,2.04174},{ 0.758578,0.60256,0.501187,0.398107,0.707946,0.691831,0.524807,0.363078,0.645654,1.90546,2.51189,0.616595,1.90546,1.58489,0.588844,0.616595,0.74131,0.851138,1,1.51356},{ 0.912011,1.86209,1.20226,1.12202,0.524807,1.41254,1.31826,0.776247,1.14815,0.616595,0.616595,2.0893,0.724436,0.467735,0.870964,1.02329,1.02329,0.446684,0.616595,0.676083},{ 0.851138,0.676083,0.60256,0.501187,0.812831,0.794328,0.630957,0.446684,0.74131,1.77828,1.90546,0.724436,2.69153,1.44544,0.57544,0.724436,0.870964,0.794328,0.954993,1.44544},{ 0.588844,0.47863,0.489779,0.354813,0.831764,0.549541,0.40738,0.301995,0.977237,1.25893,1.58489,0.467735,1.44544,5.01187,0.416869,0.524807,0.60256,2.29087,3.23594,1.02329},{ 1.07152,0.812831,0.812831,0.851138,0.489779,0.954993,0.891251,0.691831,0.776247,0.549541,0.588844,0.870964,0.57544,0.416869,5.7544,1.09648,1.02329,0.316228,0.489779,0.660693},{ 1.28825,0.954993,1.23027,1.12202,1.02329,1.04713,1.04713,1.09648,0.954993,0.660693,0.616595,1.02329,0.724436,0.524807,1.09648,1.65959,1.41254,0.467735,0.645654,0.794328},{ 1.14815,0.954993,1.12202,1,0.891251,1,0.977237,0.776247,0.933254,0.870964,0.74131,1.02329,0.870964,0.60256,1.02329,1.41254,1.77828,0.446684,0.645654,1},{ 0.436516,0.691831,0.436516,0.301995,0.794328,0.537032,0.371535,0.398107,0.831764,0.660693,0.851138,0.446684,0.794328,2.29087,0.316228,0.467735,0.446684,26.3027,2.5704,0.549541},{ 0.60256,0.660693,0.724436,0.524807,0.891251,0.676083,0.537032,0.398107,1.65959,0.851138,1,0.616595,0.954993,3.23594,0.489779,0.645654,0.645654,2.5704,6.0256,0.776247},{ 1.02329,0.630957,0.60256,0.512861,1,0.707946,0.645654,0.467735,0.630957,2.04174,1.51356,0.676083,1.44544,1.02329,0.660693,0.794328,1,0.549541,0.776247,2.18776} };

const float hhpred_gonnet[20][20]={
//  A     R     N     D     C     Q     E     G     H     I     L     K     M     F     P     S     T     W     Y     V
{10227, 3430, 2875, 3869, 1625, 2393, 4590, 6500, 2352, 3225, 5819, 4172, 1435, 1579, 3728, 4610, 6264,  418, 1824, 5709}, // A
 {3430, 7780, 2209, 2589,  584, 2369, 3368, 3080, 2173, 1493, 3093, 5701,  763,  859, 1893, 2287, 3487,  444, 1338, 2356}, // R
 {2875, 2209, 3868, 3601,  501, 1541, 2956, 3325, 1951, 1065, 2012, 2879,  532,  688, 1480, 2304, 3204,  219, 1148, 1759}, // N
 {3869, 2589, 3601, 8618,  488, 2172, 6021, 4176, 2184, 1139, 2151, 3616,  595,  670, 2086, 2828, 3843,  204, 1119, 2015}, // D
 {1625,  584,  501,  488, 5034,  355,  566,  900,  516,  741, 1336,  591,  337,  549,  419,  901, 1197,  187,  664, 1373}, // C
 {2393, 2369, 1541, 2172,  355, 1987, 2891, 1959, 1587, 1066, 2260, 2751,  570,  628, 1415, 1595, 2323,  219,  871, 1682}, // Q
 {4590, 3368, 2956, 6021,  566, 2891, 8201, 3758, 2418, 1624, 3140, 4704,  830,  852, 2418, 2923, 4159,  278, 1268, 2809}, // E
 {6500, 3080, 3325, 4176,  900, 1959, 3758,26066, 2016, 1354, 2741, 3496,  741,  797, 2369, 3863, 4169,  375, 1186, 2569}, // G
 {2352, 2173, 1951, 2184,  516, 1587, 2418, 2016, 5409, 1123, 2380, 2524,  600, 1259, 1298, 1642, 2446,  383,  876, 1691}, // H
 {3225, 1493, 1065, 1139,  741, 1066, 1624, 1354, 1123, 6417, 9630, 1858, 1975, 2225, 1260, 1558, 3131,  417, 1697, 7504}, // I
 {5819, 3093, 2012, 2151, 1336, 2260, 3140, 2741, 2380, 9630,25113, 3677, 4187, 5540, 2670, 2876, 5272, 1063, 3945,11005}, // L
 {4172, 5701, 2879, 3616,  591, 2751, 4704, 3496, 2524, 1858, 3677, 7430,  949,  975, 2355, 2847, 4340,  333, 1451, 2932}, // K
 {1435,  763,  532,  595,  337,  570,  830,  741,  600, 1975, 4187,  949, 1300, 1111,  573,  743, 1361,  218,  828, 2310}, // M
 {1579,  859,  688,  670,  549,  628,  852,  797, 1259, 2225, 5540,  975, 1111, 6126,  661,  856, 1498, 1000, 4464, 2602}, // F
 {3728, 1893, 1480, 2086,  419, 1415, 2418, 2369, 1298, 1260, 2670, 2355,  573,  661,11834, 2320, 3300,  179,  876, 2179}, // P
 {4610, 2287, 2304, 2828,  901, 1595, 2923, 3863, 1642, 1558, 2876, 2847,  743,  856, 2320, 3611, 4686,  272, 1188, 2695}, // S
 {6264, 3487, 3204, 3843, 1197, 2323, 4159, 4169, 2446, 3131, 5272, 4340, 1361, 1498, 3300, 4686, 8995,  397, 1812, 5172}, // T
 {418,  444,  219,  204,  187,  219,  278,  375,  383,  417, 1063,  333,  218, 1000,  179,  272,  397, 4101, 1266,  499}, // W
 {1824, 1338, 1148, 1119,  664,  871, 1268, 1186,  876, 1697, 3945, 1451,  828, 4464,  876, 1188, 1812, 1266, 9380, 2227}, // Y
 {5709, 2356, 1759, 2015, 1373, 1682, 2809, 2569, 1691, 7504,11005, 2932, 2310, 2602, 2179, 2695, 5172,  499, 2227,11569}};// V


const float ccpc[20][20]={ // In order of ARND...
    {1.000,0.580,0.514,0.266,0.822,0.709,0.463, 0.736,0.723,0.962,0.956,0.513,0.971,0.976,0.861,0.710,0.880,0.949,0.959,0.968},
{0.580,1.000,0.814,0.566,0.605,0.825,0.601, 0.820,0.859,0.405,0.389,0.959,0.579,0.465,0.798,0.879,0.809,0.658,0.687,0.417},
{0.514,0.814,1.000,0.844,0.650,0.930,0.808, 0.926,0.883,0.292,0.269,0.821,0.568,0.393,0.822,0.920,0.806,0.641,0.630,0.310},
{0.266,0.566,0.844,1.000,0.431,0.766,0.932, 0.724,0.689,0.068,0.053,0.571,0.311,0.152,0.604,0.754,0.600,0.404,0.403,0.092},
{0.822,0.605,0.650,0.431,1.000,0.777,0.511, 0.829,0.822,0.730,0.711,0.549,0.856,0.802,0.852,0.750,0.825,0.892,0.845,0.737},
{0.709,0.825,0.930,0.766,0.777,1.000,0.821, 0.954,0.922,0.540,0.520,0.819,0.752,0.619,0.930,0.951,0.923,0.814,0.809,0.556},
{0.463,0.601,0.808,0.932,0.511,0.821,1.000, 0.739,0.724,0.314,0.303,0.586,0.490,0.369,0.727,0.792,0.719,0.576,0.594,0.335},
{0.736,0.820,0.926,0.724,0.829,0.954,0.739, 1.000,0.935,0.565,0.546,0.789,0.793,0.665,0.929,0.939,0.910,0.845,0.825,0.576},
{0.723,0.859,0.883,0.689,0.822,0.922,0.724, 0.935,1.000,0.552,0.530,0.832,0.773,0.634,0.909,0.960,0.907,0.823,0.817,0.569},
{0.962,0.405,0.292,0.068,0.730,0.540,0.314, 0.565,0.552,1.000,0.998,0.336,0.930,0.983,0.728,0.526,0.760,0.886,0.899,0.997},
{0.956,0.389,0.269,0.053,0.711,0.520,0.303, 0.546,0.530,0.998,1.000,0.313,0.922,0.982,0.716,0.503,0.742,0.875,0.893,0.997},
{0.513,0.959,0.821,0.571,0.549,0.819,0.586, 0.789,0.832,0.336,0.313,1.000,0.523,0.388,0.727,0.873,0.785,0.584,0.614,0.347},
{0.971,0.579,0.568,0.311,0.856,0.752,0.490, 0.793,0.773,0.930,0.922,0.523,1.000,0.970,0.891,0.733,0.877,0.981,0.974,0.932},
{0.976,0.465,0.393,0.152,0.802,0.619,0.369, 0.665,0.634,0.983,0.982,0.388,0.970,1.000,0.800,0.600,0.799,0.937,0.938,0.984},
{0.861,0.798,0.822,0.604,0.852,0.930,0.727, 0.929,0.909,0.728,0.716,0.727,0.891,0.800,1.000,0.898,0.927,0.941,0.940,0.740},
{0.710,0.879,0.920,0.754,0.750,0.951,0.792, 0.939,0.960,0.526,0.503,0.873,0.733,0.600,0.898,1.000,0.923,0.792,0.789,0.542},
{0.880,0.809,0.806,0.600,0.825,0.923,0.719, 0.910,0.907,0.760,0.742,0.785,0.877,0.799,0.927,0.923,1.000,0.897,0.908,0.773},
{0.949,0.658,0.641,0.404,0.892,0.814,0.576, 0.845,0.823,0.886,0.875,0.584,0.981,0.937,0.941,0.792,0.897,1.000,0.983,0.888},
{0.959,0.687,0.630,0.403,0.845,0.809,0.594, 0.825,0.817,0.899,0.893,0.614,0.974,0.938,0.940,0.789,0.908,0.983,1.000,0.904},
{0.968,0.417,0.310,0.092,0.737,0.556,0.335, 0.576,0.569,0.997,0.997,0.347,0.932,0.984,0.740,0.542,0.773,0.888,0.904,1.000}};

const float betaPairScore[20][20]={ // In order of ARND...
{20,11,7,7,5,6,9,21,3,36,42,9,10,20,4,16,18,3,21,49},
{8,14,13,16,7,12,36,4,5,16,19,9,6,15,2,13,42,4,11,24},
{5,4,4,5,1,3,10,1,3,6,8,5,1,10,2,8,10,5,5,10},
{8,7,7,5,0,8,4,8,2,6,8,12,2,6,1,2,12,2,7,7},
{11,6,2,1,13,2,3,4,3,7,10,8,5,12,1,3,7,3,9,15},
{6,10,2,7,0,15,13,4,4,8,9,8,2,10,4,8,20,3,8,8},
{11,37,3,3,2,10,9,5,7,16,8,39,4,6,3,14,26,7,14,27},
{10,7,4,7,2,1,8,17,5,16,27,1,3,25,7,13,16,7,13,31},
{8,6,3,6,0,3,10,7,4,3,3,2,2,4,2,4,6,1,4,11},
{24,20,4,7,8,11,28,24,5,88,60,23,6,44,2,20,18,11,25,72},
{39,12,10,7,10,12,13,21,9,55,82,20,10,45,8,23,19,21,33,82},
{8,13,7,8,1,6,43,2,5,15,15,25,0,4,7,20,18,3,13,25},
{0,5,2,1,3,6,3,4,2,11,22,0,7,4,0,2,6,1,2,14},
{23,10,6,5,12,6,10,19,3,30,45,14,5,27,9,11,10,8,26,34},
{3,4,3,1,3,1,1,0,0,4,3,0,1,2,0,1,2,1,5,2},
{10,18,10,7,0,10,14,8,5,11,19,23,2,9,4,22,27,3,4,21},
{11,25,12,10,3,13,27,19,5,12,13,23,2,6,5,24,45,5,20,45},
{6,11,5,2,2,0,3,9,2,8,10,6,4,10,2,6,2,7,8,13},
{15,17,7,7,11,14,18,17,6,38,38,22,2,17,11,17,14,11,22,25},
{58,46,12,15,14,15,41,29,14,94,86,28,16,56,15,21,33,13,43,105}
};

//The following matrix is derived from ChemphyAA.csv and aaorder [ARND..] files by this script
//for i in `cat aaorder ` ; do grep "^$i " ChemphyAA_1.csv  ; done|perl -e 'while(<>)
//{chomp;@p=split/\s+/;shift @p;print "{",join(",",@p),"},\n"}'
const float chemphyMat[20][7]={ 
    {1.28,0.05,1.00,0.31,6.11,0.42,0.23},
{2.34,0.29,6.13,-1.01,10.74,0.36,0.25},
{1.60,0.13,2.95,-0.60,6.52,0.21,0.22},
{1.60,0.11,2.78,-0.77,2.95,0.25,0.20},
{1.77,0.13,2.43,1.54,6.35,0.17,0.41},
{1.56,0.18,3.95,-0.22,5.65,0.36,0.25},
{1.56,0.15,3.78,-0.64,3.09,0.42,0.21},
{0.00,0.00,0.00,0.00,6.07,0.13,0.15},
{2.99,0.23,4.66,0.13,7.69,0.27,0.30},
{4.19,0.19,4.00,1.80,6.04,0.30,0.45},
{2.59,0.19,4.00,1.70,6.04,0.39,0.31},
{1.89,0.22,4.77,-0.99,9.99,0.32,0.27},
{2.35,0.22,4.43,1.23,5.71,0.38,0.32},
{2.94,0.29,5.89,1.79,5.67,0.30,0.38},
{2.67,0.00,2.72,0.72,6.80,0.13,0.34},
{1.31,0.06,1.60,-0.04,5.70,0.20,0.28},
{3.03,0.11,2.60,0.26,5.60,0.21,0.36},
{3.21,0.41,8.08,2.25,5.94,0.32,0.42},
{2.94,0.30,6.47,0.96,5.66,0.25,0.41},
{3.67,0.14,3.00,1.22,6.02,0.27,0.49}};


const int aarecode[15][21]={ // in the order of ARND...- , - is the gap.
    {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},
{1,2,1,1,1,1,1,0,2,2,2,1,2,2,2,1,2,2,2,2,0},
{0,2,1,1,1,1,1,0,2,1,1,2,2,2,0,0,1,2,2,1,0},
{0,2,1,1,1,1,1,0,1,1,1,1,1,2,1,0,1,2,2,1,0},
{1,0,0,0,2,1,0,1,1,2,2,0,2,2,1,1,1,2,2,2,1},
{1,2,1,0,1,1,0,1,1,1,1,2,1,1,1,1,1,1,1,1,0},
{2,2,1,1,1,2,2,1,1,2,2,2,2,2,1,1,1,2,1,1,0},
{1,1,1,1,2,1,1,1,1,2,1,1,1,2,2,1,2,2,2,2,0},
{1,4,2,2,3,2,2,0,5,6,4,3,4,5,4,1,5,5,5,6,0},
{1,6,3,2,3,4,3,0,5,4,4,5,5,6,0,1,2,6,6,3,0},
{1,6,3,3,2,4,4,0,5,4,4,5,5,6,3,1,2,6,6,3,0},
{3,0,1,1,5,2,1,2,3,6,6,0,5,6,4,2,3,6,4,5,2},
{3,6,4,1,4,2,1,3,5,3,3,6,2,2,4,2,2,3,2,3,0},
{6,5,2,3,2,5,6,1,3,4,5,4,5,4,1,2,2,4,3,3,0},
{2,3,2,2,6,3,2,1,4,6,4,3,4,5,5,3,5,6,6,6,0}
};


const  double hydrophobic[20]={
  //ORDER ACDEF GHIKL MNPQR STVWY
  0.22,  4.07,  -3.08,  -1.81,  4.44,
  0.00,  0.46,  4.77,  -3.04,  5.66,
  4.23,  -0.46,  -2.23,  -2.81,  1.42,
  -0.45,  -1.90,  4.67,  1.04,  3.23
  //from Astro-fold paper on proteins.
};

//We need electron property, hydrophobic, weight, size,

//residue weight http://www.sigmaaldrich.com/life-science/metabolomics/learning-center/amino-acid-reference-chart.html#prop
//order ACDEF...VWY
//71.079, 103.144, 115.089, 129.116, 147.177, 57.052, 137.142, 113.160, 128.174, 113.160, 131.198, 114.104, 97.117, 128.131, 156.188, 87.078, 101.105, 99.133, 186.213, 163.170

#endif
