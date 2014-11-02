#include<string>
#include<vector>
#include<iostream>
#include<fstream>
#include<sstream>
#include "protein.h"
#include "protein_const.h"
using namespace std;

Protein::Protein(string tempName) {
    StartPos = -1;
    tLength = -1;
    size_t i1 = tempName.find("/");
    size_t i2 = tempName.find(".");
    if ((i1 != string::npos) || (i2 != string::npos)) {
        ReadFeatures(tempName);
    }
    else
        ReadFeatures("/home/wangsheng/TEMPLATE_BC100_Wangsheng_NR/" + tempName + ".tpl");
    //ReadACC("/home/j3xu/JianZhu/ACC_pred_result/"+tempName+".acc");
    //ReadCLE("/home/j3xu/JianZhu/CLE_pred_result/"+ tempName+".cl8");
    //ReadSS8("/home/j3xu/JianZhu/1044_SS8_data/1044_SEQ_data/"+tempName+".ss8");
}

Protein::Protein(string tempName, string dir) {
    if (dir != "")
        tempName = dir + "/" + tempName;
    StartPos = -1;
    tLength = -1;
    string affix = tempName.substr(tempName.length() - 4, 4);
    cout << "affix " << affix << endl;
    if (affix == ".tgt") {
        cout << "reading tgt file" << endl;
        ReadFeatures_TGT(tempName);
    } else
        ReadFeatures(tempName);
}

void Protein::ReadSS8(string filename) {
    char buf[4096];
    ifstream fea_in(filename.c_str());
    fea_in.getline(buf, 4096);
    fea_in.getline(buf, 4096);
    fea_in.getline(buf, 4096);
    for (int i = 0; i < length; i++) {
        fea_in.getline(buf, 4096);
        sscanf(buf + 10, "%f%f%f%f%f%f%f%f", &SS8[i][0], &SS8[i][1], &SS8[i][2], &SS8[i][3], &SS8[i][4], &SS8[i][5], &SS8[i][6], &SS8[i][7]);
        //cout<<SS8[i][0]<<" "<<SS8[i][1]<<" "<<SS8[i][2]<<" "<<SS8[i][3]<<" "<<SS8[i][4]<<" "<<SS8[i][5]<<" "<<SS8[i][6]<<" "<<SS8[i][7]<<" "<<endl;
    }
}

void Protein::ReadCLE(string filename) {
    char buf[4096];
    ifstream fin(filename.c_str());
    int index;
    for (int i = 0; i < length; i++) {
        fin.getline(buf, 4096);
        sscanf(buf, "%d%lf%lf%lf%lf%lf%lf%lf%lf", &index, &cle[i][0], &cle[i][1], &cle[i][2], &cle[i][3], &cle[i][4], &cle[i][5], &cle[i][6], &cle[i][7]);
        //cout<<index<<" "<<cle[i][0]<<" "<<cle[i][1]<<" "<<cle[i][2]<<" "<<cle[i][3]<<" "<<cle[i][4]<<" "<<cle[i][5]<<" "<<cle[i][6]<<" "<<cle[i][7]<<" "<<endl;
    }
}

void Protein::ReadACC(string filename) {
    char buf[4096];
    ifstream fin(filename.c_str());
    int index;
    for (int i = 0; i < length; i++) {
        fin.getline(buf, 4096);
        sscanf(buf, "%d%lf%lf%lf", &index, &acc[i][0], &acc[i][1], &acc[i][2]);
        //cout<<index<<" "<<acc[i][0]<<" "<<acc[i][1]<<" "<<acc[i][2]<<endl;
    }

}

float Protein::DistOf2AAs(int i, int j, int type) {
    if (isMissing[i] == 0 && isMissing[j] == 0) {
        return sqrt((CA[i][0] - CA[j][0])*(CA[i][0] - CA[j][0]) + (CA[i][1] - CA[j][1])*(CA[i][1] - CA[j][1]) + (CA[i][2] - CA[j][2])*(CA[i][2] - CA[j][2]));
    }
    return 8;
}

/*
TEMPLATE::TEMPLATE(string tempName, int startPos, int tlength){
        StartPos = startPos;
        tLength = tlength;
        ReadFeatures("./TEMP/" + tempName + ".temp");
        ReadCB("./tmp/" + tempName + ".cb");
}*/

Protein::Protein(string tempName, int startPos, int tlength) {
    StartPos = startPos;
    tLength = tlength;
    ReadFeatures("/home/RaptorX/BoostThreader/MKTEMP_old/PDB25_TARGET" + tempName + ".targ");
}

void Protein::ReadCB(string filename) {
    char buf[1024];
    ifstream fin(filename.c_str());
    int idx = -1;
    while (fin.getline(buf, 1024)) {
        idx++;
        if (idx < StartPos) continue;
        if (idx > StartPos + tLength - 1) continue;
        if (buf[6] == '1') sscanf(buf + 7, "%d", &contactNum[idx - StartPos]);
    }
}

/*
void TEMPLATE::ReadFeatures(string filename){

        char buf[4096];
        ifstream fea_in(filename.c_str());
        if(!fea_in.is_open()){
                cerr << "ERROR: ReadFeatures from template feature file = " << filename << endl;
                exit(1);
        }
        while(fea_in.getline(buf,4096)){
                if(strncmp(buf,"Sequence =",10)==0){
                        sequence = (string)(buf+11);
                        length = sequence.size();
                        for(int i=0;i<length;i++)
                                residue[i] = (short)AA1Coding[AA2SUB[sequence[i]-'A']];
                }
                if(strncmp(buf,"NEFF",4)==0){
                        sscanf(buf+7,"%f",&NEFF);
                }
                if(strncmp(buf,"//////////// Features",20)==0){
                        fea_in.getline(buf,4096);
                        for(int i=0;i<length;i++){
                                fea_in.getline(buf,4096);
                                if(buf[14]=='H')
                                        SS[i]=HELIX;
                                else if(buf[14]=='E')
                                        SS[i]=SHEET;
                                else SS[i]=LOOP;
                                ACC[i] = buf[21]-'0';
                        }
                }

                if(strncmp(buf,"//////////// Original PSM",25)==0){
                        fea_in.getline(buf,4096);
                        for(int i=0;i<length;i++)
                        {
                                fea_in.getline(buf,4096);
                                istringstream sin(buf);
                                for(int j=0;j<20;j++){
                                        sin >> PSM[i][j];
                                        PSM[i][j]*=-0.1;
                                }
                        }
                }

                if(strncmp(buf,"//////////// Original PSP",25)==0){
                        fea_in.getline(buf,4096);
                        for(int i=0;i<length;i++){
                                fea_in.getline(buf,4096);
                                istringstream sin(buf+70);
                                for(int j=0;j<20;j++)
                                        sin >> PSP[i][j];	
                        }
                }

                if(strncmp(buf,"//////////// Original HHM",25)==0){
                        for(int i=0;i<5;i++) fea_in.getline(buf,4096);
                        for(int i=0;i<length;i++){
                           fea_in.getline(buf,4096);
                           istringstream _em(buf);
                           char ct[32];
           
                           _em >> ct >> ct;
                           for(int j=0;j<20;j++){
                                _em >> ct;
                                if(ct[0]=='*') {
                                        EmissionScore[i][j]=-99999;
                                        EmissionScore_original[i][j]=-99999;
                                }
                                else{
                                        EmissionScore[i][j]=-atoi(ct);
                                        EmissionScore_original[i][j] = EmissionScore[i][j];
                                }
                                EmissionProb[i][j]=pow(2.0,EmissionScore[i][j]/1000.);
                                EmissionProb_original[i][j] = EmissionProb[i][j];
                           }            
                                fea_in.getline(buf,4096);
                                stringstream _sin(buf);
                                _sin >> ct;
                                if(ct[0]=='*'){
                                        ProfHMM[i][M_M]=0;
                                        ProfHMM_original[i][M_M] = 0;
                                }
                                else{
                                        ProfHMM[i][M_M]=exp(-atoi(ct)/1000.0*0.6931);
                                        //ProfHMM_original[i][M_M] = ProfHMM[i][M_M];
                                        ProfHMM_original[i][M_M] = atoi(ct)/1000.0;
                                }
                                _sin >> ct;
                                if(ct[0]=='*'){
                                        ProfHMM[i][M_I]=0;
                                        ProfHMM_original[i][M_I]=0;
                                }
                                else{
                                        ProfHMM[i][M_I]=exp(-atoi(ct)/1000.0*0.6931);
                                        //ProfHMM_original[i][M_I] = ProfHMM[i][M_I];
                                        ProfHMM_original[i][M_I] = atoi(ct)/1000.0;
                                }
                                _sin >> ct;
                                if(ct[0]=='*'){
                                        ProfHMM[i][M_D]=0;
                                        //ProfHMM_original[i][M_D] = ProfHMM[i][M_D];
                                        ProfHMM_original[i][M_D] = atoi(ct)/1000.0;
                                }
                                else{
                                        ProfHMM[i][M_D]=exp(-atoi(ct)/1000.0*0.6931);
                                        //ProfHMM_original[i][M_D] = ProfHMM[i][M_D];
                                        ProfHMM_original[i][M_D] = atoi(ct)/1000.0;
                                }
                                _sin >> ct;
                                if(ct[0]=='*'){
                                        ProfHMM[i][I_M]=0;
                                        ProfHMM_original[i][I_M] = ProfHMM[i][I_M];
                                }
                                else{
                                        ProfHMM[i][I_M]=exp(-atoi(ct)/1000.0*0.6931);
                                        ProfHMM_original[i][I_M] = ProfHMM[i][I_M];
                                }
                                _sin >> ct;
                                if(ct[0]=='*'){
                                        ProfHMM[i][I_I]=0;
                                        ProfHMM_original[i][I_I] = ProfHMM[i][I_I];
                                }
                                else{
                                        ProfHMM[i][I_I]=exp(-atoi(ct)/1000.0*0.6931);
                                        //ProfHMM_original[i][I_I] = ProfHMM[i][I_I];
                                        ProfHMM_original[i][I_I] = atoi(ct)/1000.0;
                                }
                                _sin >> ct;
                                if(ct[0]=='*'){
                                        ProfHMM[i][D_M]=0;
                                        ProfHMM_original[i][D_M]=0;
                                }
                                else{
                                        ProfHMM[i][D_M]=exp(-atoi(ct)/1000.0*0.6931);
                                        //ProfHMM_original[i][D_M] = ProfHMM[i][D_M];
                                        ProfHMM_original[i][D_M] = atoi(ct)/1000.0;
                                }
                                _sin >> ct;
                                if(ct[0]=='*'){
                                        ProfHMM[i][D_D]=0;
                                        ProfHMM_original[i][D_D]=0;
                                }
                                else{
                                        ProfHMM[i][D_D]=exp(-atoi(ct)/1000.0*0.6931);
                                        //ProfHMM_original[i][D_D] = ProfHMM[i][D_D];
                                        ProfHMM_original[i][D_D] = atoi(ct)/1000.0;
                                }


                                _sin >> ProfHMM[i][_NEFF] >> ProfHMM[i][I_NEFF] >> ProfHMM[i][D_NEFF];
                                ProfHMM[i][I_NEFF]/=1000;
                                ProfHMM[i][D_NEFF]/=1000;

                                ProfHMM[i][_NEFF]/=1000;
				
                                // 1:1:3
                                float rm; //0.6*ProfHMM[i][M_M] + 0.2*ProfHMM[i][M_I] + 0.2*ProfHMM[i][M_D];
                                rm = 0.1;
                                ProfHMM[i][M_M] = (ProfHMM[i][_NEFF]*ProfHMM[i][M_M] + rm*0.6)/(rm+ProfHMM[i][_NEFF]);
                                ProfHMM[i][M_I] = (ProfHMM[i][_NEFF]*ProfHMM[i][M_I] + rm*0.2)/(rm+ProfHMM[i][_NEFF]);
                                ProfHMM[i][M_D] = (ProfHMM[i][_NEFF]*ProfHMM[i][M_D] + rm*0.2)/(rm+ProfHMM[i][_NEFF]);


                                float ri;//0.75*ProfHMM[i][I_I] + 0.25*ProfHMM[i][I_M];
                                ri = 0.1;
                                ProfHMM[i][I_I] = (ProfHMM[i][I_NEFF]*ProfHMM[i][I_I] + ri*0.75)/(ri+ProfHMM[i][I_NEFF]);
                                ProfHMM[i][I_M] = (ProfHMM[i][I_NEFF]*ProfHMM[i][I_M] + ri*0.25)/(ri+ProfHMM[i][I_NEFF]);

                                float rd;// 0.75*ProfHMM[i][D_D] + 0.25*ProfHMM[i][D_M];
                                rd = 0.1;
                                ProfHMM[i][D_D] = (ProfHMM[i][D_NEFF]*ProfHMM[i][D_D] + rd*0.75)/(rd+ProfHMM[i][D_NEFF]);
                                ProfHMM[i][D_M] = (ProfHMM[i][D_NEFF]*ProfHMM[i][D_M] + rd*0.25)/(rd+ProfHMM[i][D_NEFF]);

                                ProfHMM[i][_NEFF]-=1;
			

                                fea_in.getline(buf,4096);
           		
                                for(int j=0;j<20;j++){
                                        float g=0;
                                        int ind = AA1Coding[j];
                                        for(int k=0;k<20;k++)
                                                g+=EmissionProb[i][k]*gonnet[AA1Coding[k]][ind]*pow(2.0,-HMMNull[j]/1000.0);
                                        EmissionScore[i][j] = (ProfHMM[i][_NEFF]*EmissionProb[i][j]+g*10)/(ProfHMM[i][_NEFF]+10);
                                }
                                for(int j=0;j<20;j++){
                                        EmissionProb[i][j] = EmissionScore[i][j];
                                        EmissionScore[i][j] = log(EmissionProb[i][j])/log(2.)*1000;
                                }
				
                        }


			
                }

                if(strncmp(buf,"//////////// Original SS2",25)==0){
                        //fea_in.getline(buf,4096);
                        //fea_in.getline(buf,4096);
                        fea_in.getline(buf,4096);
			
                        for(int i=0;i<length;i++){
                                fea_in.getline(buf,4096);
                                sscanf(buf+10,"%f%f%f",&SS2[i][2],&SS2[i][0],&SS2[i][1]);
                                //SS2[i][0]*=10;
                                //SS2[i][1]*=10;
                                //SS2[i][2]*=10;
                        }
                }
        }
}
 */

void Protein::ReadFeatures(string filename) {
    char buf[4096];
    ifstream fea_in(filename.c_str());
    if (!fea_in.is_open()) {
        cerr << "ERROR: ReadFeatures from template feature file = " << filename << endl;
        exit(1);
    }
    while (fea_in.getline(buf, 4096)) {
        if (strncmp(buf, "SEQRES", 6) == 0) {
            sequence = (string) (buf + 18);
            length = sequence.size();
            realss = new char[length];

            if (StartPos < 0)
                StartPos = 0, tLength = length;
            if (tLength <= 0 || StartPos + tLength > length) {
                tLength = length - StartPos;
            }

            sequence = sequence.substr(StartPos, tLength);
            for (int i = 0; i < tLength; i++) isMultiHIS[i] = 0;
            if (sequence[2] == 'H' && sequence[3] == 'H' && sequence[4] == 'H') {
                isMultiHIS[0] = isMultiHIS[1] = 1;
                for (int i = 2; i < tLength; i++)
                    if (sequence[i] == 'H')
                        isMultiHIS[i] = 1;
                    else break;
            }

            if (sequence[tLength - 2] == 'H' && sequence[tLength - 3] == 'H' && sequence[tLength - 4] == 'H') {
                isMultiHIS[tLength - 1] = 1;
                for (int i = tLength - 2; i > 0; i--)
                    if (sequence[i] == 'H')
                        isMultiHIS[i] = 1;
                    else break;
            }

            for (int i = 0; i < length; i++) {
                if (i < StartPos) continue;
                if (i > StartPos + tLength - 1) continue;
                residue[i - StartPos] = (short) AA1Coding[AA2SUB[sequence[i - StartPos] - 'A']];
            }
            //cerr << StartPos << " " << tLength << endl;
        }

        if (strncmp(buf, "DSSP", 4) == 0) {
            dssp_sequence = (string) (buf + 18);
            dssp_sequence = dssp_sequence.substr(StartPos, tLength);
            for (int i = 0; i < dssp_sequence.size(); i++)
                if (dssp_sequence[i] == 'X') dssp_sequence[i] = '.';
        }

        if (strncmp(buf, "NEFF", 4) == 0) {
            sscanf(buf + 7, "%f", &NEFF);
        }

        if (strncmp(buf, "//////////// Features", 20) == 0) {
            fea_in.getline(buf, 4096);
            for (int i = 0; i < length; i++) {
                fea_in.getline(buf, 4096);
                if (i < StartPos) continue;
                if (i > StartPos + tLength - 1) continue;
                if (buf[22] == 'H') {
                    SS[i - StartPos] = HELIX;
                    SS2[i - StartPos][0] = 1;
                    SS2[i - StartPos][1] = 0;
                    SS2[i - StartPos][2] = 0;
                } else if (buf[22] == 'E') {
                    SS[i - StartPos] = SHEET;
                    SS2[i - StartPos][0] = 0;
                    SS2[i - StartPos][1] = 1;
                    SS2[i - StartPos][2] = 0;
                } else {
                    SS[i - StartPos] = LOOP;
                    SS2[i - StartPos][0] = 0;
                    SS2[i - StartPos][1] = 0;
                    SS2[i - StartPos][2] = 1;
                }

                float aa;
                realss[i] = 'C';

                if (buf[22] == 'H')
                    aa = 0, realss[i] = 'H'; //Helix
                else if (buf[22] == 'G')
                    aa = 1, realss[i] = 'H'; // Helix
                else if (buf[22] == 'I')
                    aa = 2; // Coil
                else if (buf[22] == 'E')
                    aa = 3, realss[i] = 'E'; // strand
                else if (buf[22] == 'B')
                    aa = 4, realss[i] = 'E'; // single strand
                else if (buf[22] == 'T')
                    aa = 5;
                else if (buf[22] == 'S')
                    aa = 6;
                else if (buf[22] == 'L')
                    aa = 7;

                for (int nn = 0; nn < 8; nn++) {
                    if (aa == nn)
                        SS8[i - StartPos][nn] = 1;
                    else
                        SS8[i - StartPos][nn] = 0;
                }

                ACC[i - StartPos] = buf[35] - '0';

                for (int nn = 0; nn < 3; nn++) {
                    if (ACC[i - StartPos] == nn)
                        acc[i - StartPos][nn] = 1;
                    else
                        acc[i - StartPos][nn] = 0;
                }

                Core[i - StartPos] = buf[29] - '0';
                sscanf(buf + 40, "%d", &ACCp[i - StartPos]);
                sscanf(buf + 45, "%d", &contactNum[i - StartPos]);

                if (buf[14] == '0') {
                    isMissing[i - StartPos] = 0;
                    sscanf(buf + 54, "%f%f%f", &CA[i - StartPos][0], &CA[i - StartPos][1], &CA[i - StartPos][2]);
                    sscanf(buf + 84, "%f%f%f", &CB[i - StartPos][0], &CB[i - StartPos][1], &CB[i - StartPos][2]);
                } else {
                    isMissing[i - StartPos] = 1;
                    CA[i - StartPos][0] = CA[i - StartPos][1] = CA[i - StartPos][2] = 0;
                    CB[i - StartPos][0] = CB[i - StartPos][1] = CB[i - StartPos][2] = 0;
                }
            }
        }

        if (strncmp(buf, "//////////// Original PSM", 25) == 0) {
            fea_in.getline(buf, 4096);
            for (int i = 0; i < length; i++) {
                fea_in.getline(buf, 4096);
                if (i < StartPos) continue;
                if (i > StartPos + tLength - 1) continue;
                istringstream sin(buf);
                for (int j = 0; j < 20; j++) {
                    sin >> PSM[i - StartPos][j];
                    PSM[i - StartPos][j] *= -0.1;
                }
            }
        }

        if (strncmp(buf, "//////////// Original PSP", 25) == 0) {
            fea_in.getline(buf, 4096);
            for (int i = 0; i < length; i++) {
                fea_in.getline(buf, 4096);
                if (i < StartPos) continue;
                if (i > StartPos + tLength - 1) continue;
                istringstream sin(buf + 70);
                for (int j = 0; j < 20; j++)
                    sin >> PSP[i - StartPos][j];
            }
        }
        if (strncmp(buf, "//////////// Original SS2 file", 30) == 0) {
            fea_in.getline(buf, 4096);
            //      ssprob=new double*[length];
            for (int i = 0; i < length; i++) {
                // ssprob[i]=new double[3];
                fea_in.getline(buf, 4096);
                ss[i] = buf[7];
                int pos;
                char aa;
                char ss;
                sscanf(buf, "%d %c %c %f %f %f", &pos, &aa, &ss, &ssprob[i][2], &ssprob[i][0], &ssprob[i][1]); // ssprob[][0]:helix, ssprob[][1]:beta, ssprob[][2]:coil
            }
        }
        if (strncmp(buf, "//////////// Original HHM", 25) == 0) {
            for (int i = 0; i < 5; i++) fea_in.getline(buf, 4096);
            for (int i = 0; i < length; i++) {
                fea_in.getline(buf, 4096);
                if (i < StartPos) {
                    fea_in.getline(buf, 4096);
                    fea_in.getline(buf, 4096);
                    continue;
                }
                if (i > StartPos + tLength - 1) {
                    fea_in.getline(buf, 4096);
                    fea_in.getline(buf, 4096);
                    continue;
                }

                istringstream _em(buf);
                char ct[32];

                _em >> ct >> ct;
                for (int j = 0; j < 20; j++) {
                    _em >> ct;
                    if (ct[0] == '*') {
                        EmissionScore[i - StartPos][j] = -99999;
                        EmissionScore_original[i - StartPos][j] = -99999;
                    } else {
                        EmissionScore[i - StartPos][j] = -atoi(ct);
                        EmissionScore_original[i - StartPos][j] = EmissionScore[i - StartPos][j];
                    }
                    EmissionProb[i - StartPos][j] = pow(2.0, EmissionScore[i - StartPos][j] / 1000.);
                    EmissionProb_original[i - StartPos][j] = EmissionProb[i - StartPos][j];
                }
                fea_in.getline(buf, 4096);
                stringstream _sin(buf);
                _sin >> ct;
                if (ct[0] == '*') {
                    ProfHMM[i - StartPos][M_M] = 0;
                    ProfHMM_original[i - StartPos][M_M] = 0;
                } else {
                    ProfHMM[i - StartPos][M_M] = exp(-atoi(ct) / 1000.0 * 0.6931);
                    ProfHMM_original[i - StartPos][M_M] = ProfHMM[i - StartPos][M_M];
                }
                _sin >> ct;
                if (ct[0] == '*') {
                    ProfHMM[i - StartPos][M_I] = 0;
                    ProfHMM_original[i - StartPos][M_I] = ProfHMM[i - StartPos][M_I];
                } else {
                    ProfHMM[i - StartPos][M_I] = exp(-atoi(ct) / 1000.0 * 0.6931);
                    ProfHMM_original[i - StartPos][M_I] = ProfHMM[i - StartPos][M_I];
                }
                _sin >> ct;
                if (ct[0] == '*') {
                    ProfHMM[i - StartPos][M_D] = 0;
                    ProfHMM_original[i - StartPos][M_D] = 0;
                } else {
                    ProfHMM[i - StartPos][M_D] = exp(-atoi(ct) / 1000.0 * 0.6931);
                    ProfHMM_original[i - StartPos][M_D] = ProfHMM[i - StartPos][M_D];
                }
                _sin >> ct;
                if (ct[0] == '*') {
                    ProfHMM[i - StartPos][I_M] = 0;
                    ProfHMM_original[i - StartPos][I_M] = 0;
                } else {
                    ProfHMM[i - StartPos][I_M] = exp(-atoi(ct) / 1000.0 * 0.6931);
                    ProfHMM_original[i - StartPos][I_M] = ProfHMM[i - StartPos][I_M];
                }
                _sin >> ct;
                if (ct[0] == '*') {
                    ProfHMM[i - StartPos][I_I] = 0;
                    ProfHMM_original[i - StartPos][I_I] = ProfHMM[i - StartPos][I_I];
                } else {
                    ProfHMM[i - StartPos][I_I] = exp(-atoi(ct) / 1000.0 * 0.6931);
                    ProfHMM_original[i - StartPos][I_I] = ProfHMM[i - StartPos][I_I];
                }
                _sin >> ct;
                if (ct[0] == '*') {
                    ProfHMM[i - StartPos][D_M] = 0;
                    ProfHMM_original[i - StartPos][D_M] = 0;
                } else {
                    ProfHMM[i - StartPos][D_M] = exp(-atoi(ct) / 1000.0 * 0.6931);
                    ProfHMM_original[i - StartPos][D_M] = ProfHMM[i - StartPos][D_M];
                }
                _sin >> ct;
                if (ct[0] == '*') {
                    ProfHMM[i - StartPos][D_D] = 0;
                    ProfHMM_original[i - StartPos][D_D] = 0;
                } else {
                    ProfHMM[i - StartPos][D_D] = exp(-atoi(ct) / 1000.0 * 0.6931);
                    ProfHMM_original[i - StartPos][D_D] = ProfHMM[i - StartPos][D_D];
                }

                _sin >> ProfHMM[i - StartPos][_NEFF] >> ProfHMM[i - StartPos][I_NEFF] >> ProfHMM[i - StartPos][D_NEFF];
                ProfHMM[i - StartPos][I_NEFF] /= 1000;
                ProfHMM[i - StartPos][D_NEFF] /= 1000;

                ProfHMM[i - StartPos][_NEFF] /= 1000;

                //will try it later.............
                // 1:1:3

                float rm; //0.6*ProfHMM[i-StartPos][M_M] + 0.2*ProfHMM[i-StartPos][M_I] + 0.2*ProfHMM[i-StartPos][M_D];
                rm = 0.1;
                ProfHMM[i - StartPos][M_M] = (ProfHMM[i - StartPos][_NEFF] * ProfHMM[i - StartPos][M_M] + rm * 0.6) / (rm + ProfHMM[i - StartPos][_NEFF]);
                ProfHMM[i - StartPos][M_I] = (ProfHMM[i - StartPos][_NEFF] * ProfHMM[i - StartPos][M_I] + rm * 0.2) / (rm + ProfHMM[i - StartPos][_NEFF]);
                ProfHMM[i - StartPos][M_D] = (ProfHMM[i - StartPos][_NEFF] * ProfHMM[i - StartPos][M_D] + rm * 0.2) / (rm + ProfHMM[i - StartPos][_NEFF]);


                float ri; //0.75*ProfHMM[i-StartPos][I_I] + 0.25*ProfHMM[i-StartPos][I_M];
                ri = 0.1;
                ProfHMM[i - StartPos][I_I] = (ProfHMM[i - StartPos][I_NEFF] * ProfHMM[i - StartPos][I_I] + ri * 0.75) / (ri + ProfHMM[i - StartPos][I_NEFF]);
                ProfHMM[i - StartPos][I_M] = (ProfHMM[i - StartPos][I_NEFF] * ProfHMM[i - StartPos][I_M] + ri * 0.25) / (ri + ProfHMM[i - StartPos][I_NEFF]);

                float rd; // 0.75*ProfHMM[i-StartPos][D_D] + 0.25*ProfHMM[i-StartPos][D_M];
                rd = 0.1;
                ProfHMM[i - StartPos][D_D] = (ProfHMM[i - StartPos][D_NEFF] * ProfHMM[i - StartPos][D_D] + rd * 0.75) / (rd + ProfHMM[i - StartPos][D_NEFF]);
                ProfHMM[i - StartPos][D_M] = (ProfHMM[i - StartPos][D_NEFF] * ProfHMM[i - StartPos][D_M] + rd * 0.25) / (rd + ProfHMM[i - StartPos][D_NEFF]);

                ProfHMM[i - StartPos][_NEFF] -= 1; //???

                fea_in.getline(buf, 4096);
                for (int j = 0; j < 20; j++) {
                    float g = 0;
                    int ind = AA1Coding[j];
                    for (int k = 0; k < 20; k++)
                        g += EmissionProb[i - StartPos][k] * gonnet[AA1Coding[k]][ind] * pow(2.0, -HMMNull[j] / 1000.0);
                    EmissionScore[i - StartPos][j] = (ProfHMM[i - StartPos][_NEFF] * EmissionProb[i - StartPos][j] + g * 10) / (ProfHMM[i - StartPos][_NEFF] + 10);
                }
                for (int j = 0; j < 20; j++) {
                    EmissionProb[i - StartPos][j] = EmissionScore[i - StartPos][j];
                    EmissionScore[i - StartPos][j] = log(EmissionProb[i - StartPos][j]) / log(2.)*1000;
                }
            }

        }

    }
    length = tLength;
}

void Protein::ReadFeatures_TGT(string filename) {
    ifstream fin;
    string wbuf, temp;
    char buf[4096];
    fin.open(filename.c_str(), ios::in);
    int failure;

    if (fin.fail() != 0) {
        fprintf(stderr, "%s not found!\n", filename.c_str());
        failure = 0;
        return;
        //		exit(-1);
    }
    //read detail
    for (;;) {
        if (!getline(fin, wbuf, '\n'))break;
        if (wbuf.length() > 4095) {
            //			fprintf(stderr,"WARNING %s -> hyper long %d string detected!\r",filename.c_str(),(int)wbuf.length());
            temp = wbuf.substr(0, 4095);
            strcpy(buf, temp.c_str());
        } else strcpy(buf, wbuf.c_str());
        //check sequence
        if (strncmp(buf, "Sequence =", 10) == 0) {
            sequence = (string) (buf + 11);
            length = (int) sequence.size();

            //process isMultiHIS//__120320__//
            for (int i = 0; i < length; i++) isMultiHIS[i] = 0;
            //head mark
            int pos1 = sequence.find("HHH");
            if (pos1 < 10 && pos1 != -1) {
                int i;
                for (i = 0; i < pos1; i++)isMultiHIS[i] = 1;
                for (i = pos1; i < length - 1; i++) {
                    if (sequence[i] == 'H')
                        isMultiHIS[i] = 1;
                    else break;
                }
                isMultiHIS[i] = 1;
                if (i + 1 < length)isMultiHIS[i + 1] = 1;
            }
            //tail mark
            int pos2 = sequence.rfind("HHH");
            if (pos2 > length - 10 && pos2 != -1) {
                int i;
                for (i = length - 1; i >= pos2; i--)isMultiHIS[i] = 1;
                for (i = pos2 - 1; i >= 1; i--) {
                    if (sequence[i] == 'H')
                        isMultiHIS[i] = 1;
                    else break;
                }
                isMultiHIS[i] = 1;
                if (i - 1 >= 0)isMultiHIS[i - 1] = 1;
            }
            //process isMultiHIS//__120320__//over
            for (int i = 0; i < length; i++) {
                if (sequence[i] < 'A' || sequence[i] > 'Z')residue[i] = 20;
                else residue[i] = (short) AA1Coding[AA2SUB[sequence[i] - 'A']];
            }
        }//end of Sequence
        if (strncmp(buf, "SSEseq   =", 10) == 0) {
            sse_seq = (string) (buf + 11);
        }
        for (int i = 0; i < length; i++)
            if (sse_seq[i] == 'L')
                ss[i] = 'C';
            else
                ss[i] = sse_seq[i];

        if (strncmp(buf, "SSEconf   =", 10) == 0) {
            sse_conf = (string) (buf + 11);
        }
        if (strncmp(buf, "ACCseq   =", 10) == 0) {
            acc_seq = (string) (buf + 11);
        }
        if (strncmp(buf, "ACCconf   =", 10) == 0) {
            acc_conf = (string) (buf + 11);
        }
        //NEFF
        if (strncmp(buf, "NEFF", 4) == 0) {
            sscanf(buf + 7, "%f", &NEFF);
        }
        //EVD
        if (strncmp(buf, "EVD", 3) == 0) {
            int curlen = (int) wbuf.size();
            if (curlen == 6) {
                evd[0] = 0;
                evd[1] = 1;
            } else {
                string wwtemp = wbuf.substr(6, curlen);
                istringstream www(wwtemp);
                for (int j = 0; j < 2; j++) //get remaining
                {
                    if (!(www >> temp)) {
                        fprintf(stderr, "FORMAT BAD AT FEATURE FILE %s -> [EVD col %d] \n", filename.c_str(), j);
                        failure = 0;
                        return;
                        //						exit(-1);
                    }
                    evd[j] = atof(temp.c_str());
                }
            }
        }
        //structure
        if (strncmp(buf, "//////////// Original SS3+SS8+ACC file", 38) == 0) {
            //skip first
            if (!getline(fin, wbuf, '\n')) {
                fprintf(stderr, "FORMAT BAD AT FEATURE FILE %s -> [structure skip first] \n", filename.c_str());
                failure = 0;
                return;
                //				exit(-1);
            }
            //skip first
            if (!getline(fin, wbuf, '\n')) {
                fprintf(stderr, "FORMAT BAD AT FEATURE FILE %s -> [structure skip first] \n", filename.c_str());
                failure = 0;
                return;
                //				exit(-1);
            }
            //get remaining
            for (int i = 0; i < length; i++) {
                //get first
                if (!getline(fin, wbuf, '\n')) {
                    fprintf(stderr, "FORMAT BAD AT FEATURE FILE %s -> [structure line %d] \n", filename.c_str(), i);
                    failure = 0;
                    return;
                    //					exit(-1);
                }
                //process string
                istringstream www(wbuf);
                //[ss2]
                for (int j = 0; j < 3; j++) //get remaining
                {
                    if (!(www >> temp)) {
                        fprintf(stderr, "FORMAT BAD AT FEATURE FILE %s -> [SS2 line %d col %d] \n", filename.c_str(), i, j);
                        failure = 0;
                        return;
                        //						exit(-1);
                    }
                    float wsval = atof(temp.c_str());
                    SS2[i][j] = wsval;
                }

                //ssprob[][0]:helix, ssprob[][1]:beta, ssprob[][2]:coil 
                ssprob[i][0] = SS2[i][0];
                ssprob[i][1] = SS2[i][1];
                ssprob[i][2] = SS2[i][2];

                //assign SSE

                if (SS2[i][0] > SS2[i][1] && SS2[i][0] > SS2[i][2])SS[i] = HELIX;
                else if (SS2[i][1] > SS2[i][0] && SS2[i][1] > SS2[i][2])SS[i] = SHEET;
                else SS[i] = LOOP;
                //[ss8]
                for (int j = 0; j < 8; j++) //get remaining
                {
                    if (!(www >> temp)) {
                        fprintf(stderr, "FORMAT BAD AT FEATURE FILE %s -> [SS8 line %d col %d] \n", filename.c_str(), i, j);
                        failure = 0;
                        return;
                        //						exit(-1);
                    }
                    float wsval = atof(temp.c_str());
                    SS8[i][j] = wsval;
                }
                //[acc]
                for (int j = 0; j < 3; j++) //get remaining
                {
                    if (!(www >> temp)) {
                        fprintf(stderr, "FORMAT BAD AT FEATURE FILE %s -> [ACC line %d col %d] \n", filename.c_str(), i, j);
                        failure = 0;
                        return;
                        //						exit(-1);
                    }
                    float wsval = atof(temp.c_str());
                    acc_our_10_42[i][j] = wsval;
                    if (acc_our_10_42[i][j] <= 0.01)
                        acc_our_10_42[i][j] = 0;
                }
                for (int j = 0; j < 3; j++) {
                    if (acc_our_10_42[i][j] >= 0.95) {
                        for (int k = 0; k < 3; k++) {
                            if (k == j)
                                acc_our_10_42[i][k] = 1;
                            else
                                acc_our_10_42[i][k] = 0;
                        }
                        break;
                    }
                }

                //assign ACC
                if (acc_our_10_42[i][0] > acc_our_10_42[i][1] && acc_our_10_42[i][0] > acc_our_10_42[i][2])ACC[i] = 0;
                else if (acc_our_10_42[i][1] > acc_our_10_42[i][0] && acc_our_10_42[i][1] > acc_our_10_42[i][2])ACC[i] = 1;
                else ACC[i] = 2;
            }
        }//structure
        //PSM
        if (strncmp(buf, "//////////// Original PSM", 25) == 0) {
            //	WS_Process_PSM(fin,filename);
        }//end of PSM
        //PSP
        if (strncmp(buf, "//////////// Original PSP", 25) == 0) {
            //	WS_Process_PSP(fin,filename);
        }//end of PSP
        //HMM
        if (strncmp(buf, "//////////// Original HHM", 25) == 0) {
            //			WS_Process_HMM(fin,filename);
        }//end of HHM
    }//end of for(;;)
}
