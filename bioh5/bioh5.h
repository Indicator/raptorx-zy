/** 
 * Name: Bioh5 class 
 * Author: Zhiyong Wang
 * Email:zywang at ttic.edu
 */
#ifndef BIOH5_H
#define BIOH5_H
#include <vector>
#include <string>
#include "H5Cpp.h"
#include "matrix.h"
#include "matrix3.h"
/*
 * Bioh5 is a class to describe quantative features of a protein sequence and its
 * structure. This class is used for input and output data extracted from 
 * computational biology softwares, like Blast results and Pdb files.
 * 
 */
class Bioh5 {
    
public:
    /**
     * Create an empty Bioh5 object.
     */
    Bioh5() {
        seqres_seq = NULL;
        file = NULL; 
    }
    /**
     * Create an empty Bioh5 object from a given h5 file name. 
     */
    Bioh5(std::string); //create a bioh5 object for reading.
    ~Bioh5();
    void open_h5file_readonly(std::string fn);
    //int create_from_query(std::string seq,std::string msa);
    int create_from_query(const std::string & seqfile,const std::string & msafile);
    /** Read all data from a give bioh5 file. */
    int read_all(); 
    /** Read all the datasets given by the string vector, which contains a list
     of dataset names. */
    int read(std::vector<std::string>); 
    int read_dist(std::string dsname = "/Data/dist_1");
    int read_seq(std::string dsname = "/Data/seqres_seq");
    int read_dsspseq(std::string dsname = "/Data/dssp_sequence");
    int read_pair_aa_frequency(std::string dsname = "/Data/pairFrequency");
    //compute1_* functions compute some useful feature for each residues.
    //compute2_* functions compute some useful features for residue pairs. The results stores
    //in the matrices. Those matrices are initialized in compute2* .
    int compute2_bps(); //compute base pair scores
    int compute2_mi(); //
    int compute2_mimore();
    /** 
     * @brief Compute 1..11 th power of mi, some factorial power of mi, and power of 
     * (1-mi), localmax features
     * @return Results are in mipow, miroot, mipow2, miLocalMax.
     *  */
    int compute2_moreev();
    int compute_singlefreq();
    int compute_singlefreq(const double* p2,int seqlen,int q,double* p1);
    void compute_p2aarecode(const double *p2, int seqlen, int q, const int* recode, double* p2out);
    
    Matrix compute_root2(Matrix& xx, double a = 0.25, double b = 0.5);
    void compute_root2(Matrix& xx, double a, double b, Matrix&);
    void compute_local_max(const Matrix& xx, int nw, int topn, double theta, Matrix& res);

    ///Read distance matrices from pdb file and write it into h5file
    void readContactPdb(std::string pdbfile,int* isMissing,int ds, double contactCut, Matrix &realcon,Matrix& distmat, int contactType);
    void matrixToh5(std::string fn1,std::string ds, Matrix& buf);
    ///Read a msa in fasta format and write it into h5 file.
    void fasta2hdf5(std::string fn1, double* aln, int seqlen);
    void fasta2hdf5_add_weight(std::string fn1, std::vector<double>& sequence_weight);
    double* getPairFreq(std::vector<std::vector<int> > aln, int alnlen, int nseq, int& seqlen, std::vector<double>& seqweight);
    double compute_sequence_similarity(std::vector<int> & seq1, std::vector<int> & seq2, std::string type);
    std::vector<double> compute_sequence_weight(std::vector<std::vector<int> > aln, double theta = 0.3);
    unsigned long getPos(int i, int j, int aa, int bb, int seqlen, int naa);
    std::vector<std::vector<int> > readSimpleFasta(const std::string& fn);
    void calculateBpsMore(int i, int j, double* res);
    void calculate_direct(double* pair_freq,int seqlen,int naa,double *single_freq, Matrix & res,bool dryrun=false);
    void writeMiFeature(std::string fn,std::string fn1,bool); //need pair_freq,entropy
    
    //Compute base pair scoring features, and write it into h5 file.
    void writeBpsFeature(std::string fn); // need sequence information only
    void writeh5(std::string fn,std::string dataset); //Write all features to h5 file /Data/feature2d
    //Command line functions: generate a bps,moreev,mi files from a3m file.

    // Compute pair position feature, and add it into h5 file.
    void ReadDopeMatrix(std::string fn, std::string atom, Matrix3<double> &);
    
    void CalcPairPositionFeature(const std::vector<int> & seq, Matrix3<double> & pairAminoAcidMatrix, const std::string & featureName, Matrix3<double> & );
    void WritePairPositionFeature(int seqlen, std::string h5file, Matrix3<double> & feature, std::string dataset, unsigned int startFeatureIndex);
    
    //For perl feature generating script, write the result into h5 file.
    //Combined with CNFsearch to generate h5 file directly.
    /// Hdf5 file name
    std::string h5file;
    /// tplfile is the file name of a tpl file or tgt file     
    std::string tplfile; // A tpl or tgt file for this sequence
    /// Hdf5 file pointer
    H5::H5File* file;
    std::string pdbID;
    char chainID;
    std::string sequence; // The query sequence.
    int seqlen; // The length of the query sequence.
    int* seqres_seq; // The query sequence represented by numbers.
    std::vector<int> isMultiHIS;
    std::vector<double> seqweight ;
    int* isMissing; //int isMissing[MAXLEN]; all 1 if from a query sequence, has 0 or 1 if this is sourced from a pdb file;
    /** @}*/
    
    //Derivative feature: the features computed from alignment features or 
    //predicted features.
    int naatype;
    int total_pair_window_feature;
    double* pairFreq;
    double* singleFreq;
    std::vector<double> entropy;
    Matrix mi;
    Matrix miMore[15];
    Matrix normmi;
    Matrix normmiMore[15];
    //Those are features for model349+
    Matrix miroot[11];
    Matrix direct_information;
    /**
     * 1..11 power of MI(mutual information)
     */
    Matrix mipow[11];
    Matrix mipow2[11]; //(1-mi)^k
    Matrix miLocalMax[3];
 

    //Native structure information, only available when a pdb or tpl file is also given.
    std::string dssp_sequence;
    /// True length or native length is the length of dssp_sequence
    int tLength; 
    char* realss;
    std::vector<int> dssp_seqInt; //For dssp sequence in integers.
    /// Distance matrices for c-alpha.
    Matrix dist_0; 
    /// Distance matrices for c-beta
    Matrix dist_1; 
    /// Distance matrices for closest atoms.
    Matrix dist_2; 
    Matrix CA; //[MAXLEN][3];
    Matrix CB; //[MAXLEN][3];
    std::vector<int> ACC; // ACC[MAXLEN];
    
    
    //Alignment features or family features. Extracted from difference alignment methods. 
    //These features describe the similarity with other proteins, also builds a background.
    
    float neff; 
    float meff; /// overall weighted sequence similarity 
    Matrix PSP; //[MAXLEN][20];
    Matrix PSM; //[MAXLEN][20];
    Matrix ProfHMM; //[MAXLEN][20];
    Matrix ProfHMM_original; //[MAXLEN][20];
    Matrix EmissionScore; //[MAXLEN][20];
    Matrix EmissionScore_original; //[MAXLEN][20];
    Matrix EmissionProb; //[MAXLEN][20];
    Matrix EmissionProb_original; //[MAXLEN][20];
    //float evd[2];

    //Predicted Features, incl. ss2(psipred), ss8(raptorx-ss8), acc(Accessibility),
    //cle(Sheng's structural codes), contactNum(contact number prediction,which program?);
    char* ss; // small ss are char array, which element is 'H' or 'E' or 'C'
    Matrix ss2; //length x 3 , probability for each 3 secondary structure classes.
    Matrix ss8; //length x 8, probability for each 8 secondary structure classes.
    //Matrix ssprob; //[MAXLEN][3]; duplicated with ss2.
    int*   contactNum;

    Matrix acc; //[MAXLEN][3];
    Matrix acc_1; //[MAXLEN][3]; our method for accessibility prediction
    Matrix cle; //[MAXLEN][8];
     //*/
};

#endif // BIOH5_H
