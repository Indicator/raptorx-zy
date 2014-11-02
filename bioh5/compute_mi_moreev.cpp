#include <stdio.h>
#include <iostream>
#include <exception>
#include "protein_const.h"
#include "H5Cpp.h"
#include "matrix.h"
#include "matrix3.h"
#include "bioh5.h"

//this 

void Bioh5::writeMiFeature(std::string fn, std::string fn1, bool mipow2_flag=false) { //need pair_freq,entropy
    //By default, we output all (i,j) pairs, such that j>=i+6;
    //read_pair_aa_frequency();
    compute_singlefreq();
    compute2_mi(); //
    
    //Write it into *.moreev file. By far, we have a program to replace what was done in matlab. Then using rrr.pl to generate final features.
    //xx.compute2_mimore();
    int ds = 6;
    compute2_moreev();
    try {
        FILE *fp = fopen(fn.c_str(), "w");
        for (int i = 0; i < seqlen; i++)
            for (int j = i + ds; j < seqlen; j++) {
                if(isMissing[i] || isMissing[j]) continue;
                //fprintf(fp, "%d %d ", i+1,sequence[i], j+1,sequence[j]);
                fprintf(fp, "%d %d ", i+1, j+1);
                    //if (dist_1(i, j) < 0.1)continue; // Tell if i or j is missing.
                    //fprintf(fp, "%f %d %d ", dist_1(i, j), i, j);
                for (int k = 0; k < 11; k++)
                    fprintf(fp, "%f ", miroot[k](i, j));
                for (int k = 0; k < 10; k++)
                    fprintf(fp, "%f ", mipow[k](i, j));
                for (int k = 0; k < 3; k++)
                    fprintf(fp, "%f ", miLocalMax[k](i, j));
                if(mipow2_flag){
                    for (int k = 0; k < 11; k++)
                    fprintf(fp, "%f ", mipow2[k](i, j));
                }
                fprintf(fp, "\n");
            }
        fclose(fp);
        //The 4th is mi and entropy as zydi_0
        fp = fopen(fn1.c_str(), "w");
        for (int i = 0; i < seqlen; i++)
            for (int j = i + ds; j < seqlen; j++) {
                if ( isMissing[i] || isMissing[j] )continue;
                fprintf(fp, "%d %d %.6f %.6f %.6f", i + 1, j + 1, mi(i, j), entropy[i], entropy[j]);
                
                fprintf(fp, "\n");
            }
        fclose(fp);
    } catch (MatrixException e) {
        std::cerr << e.what();
    } catch (std::exception e) {
        std::cerr << e.what();
    }
}

//function [ccpc cpMean cpCorr] = calculateBpsMore(i, j, P2, P1, q)

void Bioh5::calculateBpsMore(int i, int j, double* res) {
    //output, 0,ccpc, 1-14 cpmean, 15-21,cpCorr
    //4+2+22=28
    //global chemphyMat;, global ccpcMat; s=0;
    
    int q = naatype;
    double* P2 = pairFreq;
    //cpMean=zeros(size(chemphyMat,2),2);
    //cpCorr=zeros(size(chemphyMat,2),1);
    //sx=zeros(size(chemphyMat,2),1);
    //sy=zeros(size(chemphyMat,2),1);
    //sxy=zeros(size(chemphyMat,2),1);
    int sizechemphyMat2 = 7;
    double epsl=1e-10;
    double s = 0;
    double ccpc1=0;
    //res=new double[1+14+7];
    for(int k=0;k<22;k++) res[k]=0;
    double* cpMean=res+1;
    for (int alpha = 0; alpha < q - 1; alpha++) //q-1 since no gap in ccpc
        for (int beta = 0; beta < q - 1; beta++) {
            unsigned long ind = getPos(i, j, alpha, beta, seqlen, naatype);
            if (!(P2[ind] > 0 && alpha < 20 && beta < 20))continue;
            //for beta = 1:q
            // compute average of chemphy(ii) on the residue i,and residue_j
            // compute correlation of chemphy(ii) of i and j
            // compute average CCPC of i,j
            
            s = s + P2[ind];

            ccpc1 = ccpc1 + ccpc[alpha][beta] * P2[ind];
            for (int ii = 0; ii < sizechemphyMat2; ii++) {
                cpMean[ii] = cpMean[ii] + chemphyMat[alpha][ii] * P2[ind];
                cpMean[ii + sizechemphyMat2] = cpMean[ii] + chemphyMat[beta][ii] * P2[ind];
            }
        }
    if(s>epsl)  ccpc1 = ccpc1 / s;
        
    res[0]=ccpc1;
    std::vector<double> sxy(7, 0);
    std::vector<double> sx(7, 0);
    std::vector<double> sy(7, 0);
    double* cpCorr=res+15;
    for (int ii = 0; ii < sizechemphyMat2 * 2; ii++)
          if(s>epsl) cpMean[ii] = cpMean[ii] / s;
    for (int alpha = 0; alpha < q-1; alpha++)
        for (int beta = 0; beta < q-1; beta++){
            unsigned long ind = getPos(i, j, alpha, beta, seqlen, naatype);
            if (!(P2[ind] > 0 && alpha < 20 && beta < 20))continue;
            // compute correlation of chemphy(ii) of i and j
            for (int ii = 0; ii < sizechemphyMat2; ii++) {             
                sxy[ii] = sxy[ii]+(chemphyMat[alpha][ii] - cpMean[ii])*(chemphyMat[beta][ii] - cpMean[ii + sizechemphyMat2]) * P2[ind];
                sx[ii] = sx[ii] + pow(chemphyMat[alpha][ii] - cpMean[ii], 2) * P2[ind];
                sy[ii] = sy[ii] + pow(chemphyMat[beta][ii] - cpMean[ii + sizechemphyMat2], 2) * P2[ind];
            }
        }
    for (int ii = 0; ii < sizechemphyMat2; ii++) {
        if (sx[ii] * sy[ii] > 1e-20)
            cpCorr[ii] = sxy[ii] / sqrt(sx[ii] * sy[ii]);
        else
            cpCorr[ii] = 0;
    }
    
    
}

void Bioh5::writeBpsFeature(std::string fn){
    //By default, we output all (i,j) pairs, such that j>=i+6;
       //By default, we output all (i,j) pairs, such that j>=i+6;
    //read_pair_aa_frequency();
    int ds = 6;
    compute2_moreev();
    compute2_mimore();
    double res[1+14+7];
    try {
        FILE *fp = fopen(fn.c_str(), "w");
        for (int i = 0; i < seqlen; i++)
            for (int j = i + ds; j < seqlen; j++) {
                if(isMissing[i] || isMissing[j]) continue;
                fprintf(fp, "%d %c %d %c ", i+1,sequence[i], j+1,sequence[j]);
                //ccpc, betaPairScore
                double bMean=0;
                double bMode=0;
                for (int alpha = 0; alpha < naatype; alpha++)
                    for (int beta = 0; beta < naatype; beta++) {
                        int ind = getPos(i, j, alpha, beta, seqlen, naatype);
                        if (pairFreq[ind] > 0 && alpha<20 && beta<20){
                            bMean = bMean + pairFreq[ind] * betaPairScore[alpha][beta];
                           // if(i==0)fprintf(stderr,"%d %d %d %d %d, %.6f %.6f\n",ind,i,j,alpha,beta,pairFreq[ind],betaPairScore[alpha][beta]);
                        }
                    }
                fprintf(fp,"%.6f 0 ",bMean); // 2
                calculateBpsMore(i,j,res);
                for (int k = 0; k < 1+14+7; k++) //22
                    fprintf(fp, "%f ", res[k]);
                //fprintf(fp,"%.6f %.6f",mi(i,j),normmi(i,j));
                for(int r=0;r<15;r++) //30
                        fprintf(fp," %.6f %.6f",miMore[r](i,j),normmiMore[r](i,j));
                fprintf(fp, "\n");
            }
        fclose(fp);
    } catch (MatrixException e) {
        std::cerr << e.what();
    } catch (std::exception e) {
        std::cerr << e.what();
    }
}

void Bioh5::writeh5(std::string fn,std::string dataset){
    compute_singlefreq();
    compute2_mi(); //
    compute2_moreev();
    compute2_mimore();
    // Define a Matrix3
    int dim_feature=1024; // Support at most 1024 features at each position.
    int ds=6;
    Matrix3<double> res(seqlen,seqlen,dim_feature,0);
    for (int i = 0; i < seqlen; i++)
        for (int j = i + ds; j < seqlen; j++) {
            if (isMissing[i] || isMissing[j]) continue;
            int h = 0;
            //fprintf(fp, "%d %d ", i+1,sequence[i], j+1,sequence[j]);
            for (int k = 0; k < 11; k++) {
                res[i][j][h] = miroot[k](i, j);
                h++;
            }
            for (int k = 0; k < 10; k++) {
                res[i][j][h] = mipow[k](i, j);
                h++;
            }
            for (int k = 0; k < 3; k++) {
                res[i][j][h] = miLocalMax[k](i, j);
                h++;
            }
        }

    for (int i = 0; i < seqlen; i++)
        for (int j = i + ds; j < seqlen; j++) {
            if (isMissing[i] || isMissing[j])continue;
            int h = 11 + 10 + 3;
            res[i][j][h] = mi(i, j);
            h++;
            res[i][j][h] = entropy[i];
            h++;
            res[i][j][h] = entropy[j];
            h++;
            //fprintf(fp, "%d %d %.6f %.6f %.6f", i + 1, j + 1, mi(i, j), entropy[i], entropy[j]);
            //fprintf(fp, "\n");
        }

    for (int i = 0; i < seqlen; i++)
        for (int j = i + ds; j < seqlen; j++) {
            if (isMissing[i] || isMissing[j]) continue;
            int h = 11 + 10 + 3 + 3;
            double bMean = 0;
            double bMode = 0;
            for (int alpha = 0; alpha < naatype; alpha++)
                for (int beta = 0; beta < naatype; beta++) {
                    int ind = getPos(i, j, alpha, beta, seqlen, naatype);
                    if (pairFreq[ind] > 0 && alpha < 20 && beta < 20) {
                        bMean = bMean + pairFreq[ind] * betaPairScore[alpha][beta];
                        // if(i==0)fprintf(stderr,"%d %d %d %d %d, %.6f %.6f\n",ind,i,j,alpha,beta,pairFreq[ind],betaPairScore[alpha][beta]);
                    }
                }
            res[i][j][h] = bMean; //fprintf(fp,"%.6f 0 ",bMean); // 2
            h++;
            double res1[1+14+7]; // 27 + 1 + 1+14+7 = 50
            calculateBpsMore(i, j, res1);
            for (int k = 0; k < 1 + 14 + 7; k++) { // Physical-Chemical properties
                res[i][j][h] = res1[k]; //fprintf(fp, "%f ", res[k]);
                h++;
            }
            //fprintf(fp,"%.6f %.6f",mi(i,j),normmi(i,j));
            for (int r = 0; r < 15; r++) { // 50+ 30=80
                res[i][j][h] = miMore[r](i, j);
                h++;
                res[i][j][h] = normmiMore[r](i, j);
                h++; //fprintf(fp," %.6f %.6f",miMore[r](i,j),normmiMore[r](i,j));
            }
        }
    res.writeh5(fn,dataset);
}