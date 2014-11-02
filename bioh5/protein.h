#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <stdio.h>
#include <string>


#define MAXLEN 3000

class Protein{
    public:
	short residue[MAXLEN];
	int length;
	int isMissing[MAXLEN];
	int isMultiHIS[MAXLEN];
	float CA[MAXLEN][3];
	float CB[MAXLEN][3];
	int ACC[MAXLEN];
	int ACCv[MAXLEN];
	int ACCp[MAXLEN];
	int SS[MAXLEN]; 
  char ss[MAXLEN]; // small ss are char array, which element is 'H' or 'E' or 'C'
  char* realss;
  
	float SS2[MAXLEN][3];
	float SS8[MAXLEN][8];
  float ssprob[MAXLEN][3];
	int contactNum[MAXLEN];
	float PSP[MAXLEN][20];
	float PSM[MAXLEN][20];
	float NEFF;
	float ProfHMM[MAXLEN][20];
	float ProfHMM_original[MAXLEN][20];
	float EmissionScore[MAXLEN][20];
	float EmissionScore_original[MAXLEN][20];
	float EmissionProb[MAXLEN][20];
	float EmissionProb_original[MAXLEN][20];

  float acc_our_10_42[MAXLEN][3];
  float evd[2];
  

  std::string pdbID;
	char chainID;
  std::string sequence;
  std::string dssp_sequence;
  std::string sse_seq;
  std::string sse_conf;
  std::string acc_seq;
  std::string acc_conf;
  
  double acc[MAXLEN][3];
	double cle[MAXLEN][8];
	float Core[MAXLEN];	
	int StartPos;
	int tLength;

	void ReadFeatures(std::string filename);		
  void ReadFeatures_TGT(std::string filename);
  
	void ReadCB(std::string filename);
	void ReadACC(std::string filename);	
	void ReadCLE(std::string filename);
	void ReadSS8(std::string filename);	
	Protein(std::string templateName);	
	Protein(std::string , std::string);	
	Protein(std::string templateName, int startPos, int tlength);	
	float DistOf2AAs(int i,int j,int type);
};


#endif



