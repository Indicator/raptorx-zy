
#include "RNAbuilder.h"
#include "Solver.h"
int DEBUG=0;
void Solver::SecantSolve(FuncWrapper& fw,linVector& x0,linVector &ans, double tol,int maxIter){
  int nIter=0;
  linVector bestans;
  double minerr=1e20;
  linVector xx(3);
  xx=x0;// over-write =
//     for(int i=0;i<x0.dim;i++)
//       cerr<<xx[i]<<" ";
//     cerr<<endl;
  double epsl=1e20;
  while(nIter<maxIter && epsl>tol)
  {
    nIter++;
    linVector oldxx(3);
    oldxx=xx;
    linMatrix<double> invdf=fw.df(xx);
//     invdf.print();
    invdf.invert();
//     invdf.print();
    xx=xx-invdf*fw.f(xx);
//     for(int i=0;i<3;i++)
//     {
//       if(xx[i]<lowBound[i])xx[i]=lowBound[i];

//       if(xx[i]>upBound[i])xx[i]=upBound[i];
//     }

    if(fw.f(xx).norm()<minerr)
    {
      minerr=fw.f(xx).norm();
      bestans=xx;
    }
//     xx.print();
//     cerr<<endl;
    epsl=linVector::norm(&oldxx,&xx);
  }
  ans=xx;
  if(nIter==maxIter){
    //        cout<<"Max iteration reached"<<endl;
    ans=bestans;
  }
  //  cerr<<nIter<<" iter used\n";
  fw.f(ans);
}

linVector FuncWrapper::f( linVector& xx)
{
  double t0=xx[0];
  double t1=xx[1];
  double t2=xx[2];
  //linVector nV1=nV0*cos(a0)+nV0Nn1*sin(a0)*cos(t0)+nNn1*sin(a0)*sin(t0);
  linVector nN0=nNn1*cos(t0)+nV0Nn1*sin(t0);
  linVector nV1=nV0*cos(a0)+linVector::Cross(nN0,nV0)*sin(a0);
  linVector nV1N0=linVector::Cross(nV1,nN0);
  linVector nN1=nN0*cos(t1)+nV1N0*sin(t1);
  linVector nV2=nV1*cos(a1)+linVector::Cross(nN1,nV1)*sin(a1);
  //  linVector nV2=nV1*cos(a1)+nV1N0*sin(a1)*cos(t1)+nN0*sin(a1)*sin(t1);
  linVector nV2N1=linVector::Cross(nV2,nN1);
  linVector nN2=nN1*cos(t2)+nV2N1*sin(t2);
  linVector nV3=nV2*cos(a2)+linVector::Cross(nN2,nV2)*sin(a2);

  //  linVector nV3=nV2*cos(a2)+nV2N1*sin(a2)*cos(t2)+nN1*sin(a2)*sin(t2);
  v1=nV1*l1;
  v2=nV2*l2;
  v3=nV3*l3;
  linVector res=v1+v2+v3-va;

//   cerr<<"v1,v2,v3\n";
//   (nV1*l1).print();
//   (nV2*l2).print();
//   (nV3*l3).print();
 return res;
}

linMatrix<double> FuncWrapper::df(linVector& xx)
{
  linMatrix<double> res(3,3);
  linVector V0Nn1=linVector::Cross(v0,Nn1);

  double t0=xx[0];
  double t1=xx[1];
  double t2=xx[2];

  linVector nN0=nNn1*cos(t0)+nV0Nn1*sin(t0);
  linVector nV1=nV0*cos(a0)+linVector::Cross(nN0,nV0)*sin(a0);
  linVector nV1N0=linVector::Cross(nV1,nN0);

  linVector nN1=nN0*cos(t1)+nV1N0*sin(t1);
  linVector nV2=nV1*cos(a1)+linVector::Cross(nN1,nV1)*sin(a1);
  linVector nV2N1=linVector::Cross(nV2,nN1);

  linVector nN2=nN1*cos(t2)+nV2N1*sin(t2);
  linVector nV3=nV2*cos(a2)+linVector::Cross(nN2,nV2)*sin(a2);
  
  linVector col3=linVector::Cross(-nN1*sin(t2)+nV2N1*cos(t2),nV2)*sin(a2);
  col3=col3*l3;
  linVector dnN1dt1=-nN0*sin(t1)+nV1N0*cos(t1);
  linVector dnV2dt1=linVector::Cross(dnN1dt1,nV1)*sin(a1);
  linVector dnN2dt1=dnN1dt1*cos(t2)+(linVector::Cross(dnV2dt1,nN1)+linVector::Cross(nV2,dnN1dt1))*sin(t2);
  linVector dnV3dt1=dnV2dt1*cos(a2)+(linVector::Cross(dnN2dt1,nV2)+linVector::Cross(nN2,dnV2dt1))*sin(a2);

  linVector col2=dnV2dt1*l2+dnV3dt1*l3;
  //d nV1/d t0
  linVector dnN0=-nNn1*sin(t0)+nV0Nn1*cos(t0);
  linVector dnV1=linVector::Cross(dnN0,nV0)*sin(a0);
  linVector dnN1=dnN0*cos(t1)+(linVector::Cross(dnV1,nN0)+linVector::Cross(nV1,dnN0))*sin(t1);
  linVector dnV2=dnV1*cos(a1)+(linVector::Cross(dnN1,nV1)+linVector::Cross(nN1,dnV1))*sin(a1);
  linVector dnN2=dnN1*cos(t2)+(linVector::Cross(dnV2,nN1)+linVector::Cross(nV2,dnN1))*sin(t2);
  linVector dnV3=dnV2*cos(a2)+(linVector::Cross(dnN2,nV2)+linVector::Cross(nN2,dnV2))*sin(a2);
  linVector col1=l1*dnV1+l2*dnV2+l3*dnV3;
  
  res.item(0,0)=col1[0];
  res.item(0,1)=col2[0];
  res.item(0,2)=col3[0];
  res.item(1,0)=col1[1];
  res.item(1,1)=col2[1];
  res.item(1,2)=col3[1];
  res.item(2,0)=col1[2];
  res.item(2,1)=col2[2];
  res.item(2,2)=col3[2];
  return res;
}



void RNAbuilder::BuildFullFast(SEQUENCE *seq, rnaCRFSampler * m_pModel)
{
  int maxIter=atoi(m_pModel->params["MAXITER_BUILD"].c_str());
  if(maxIter==0)maxIter=300;
  //.from backbone to all atoms model
  //define the function f and df
  //input sequence, pc4backbone.
  //output allresstru[0-tlength], fullbackbone
  
  //solve all the atoms along the backbone, including the first and last nucleotides.
  linVector v1(3);
  linVector v2(3);
  linVector v3(3);
  linVector orig(3);
  linVector oldans(3);
  orig[0]=0;
  orig[1]=0;
  orig[2]=0;
  linVector orig0;
  vector<vector<double> > fullbackbone;

//    ifstream fin("truepc4.dat");
//    seq->pc4backbone.clear();
//    while(fin.good())
//    {
//      vector<double> xx(3);
//      fin>>xx[0];
//      fin>>xx[1];
//      fin>>xx[2];
//      if(!fin.good())break;
//      seq->pc4backbone.push_back(xx);
//    }
//    fin.close();
//   fullbackbone.push_back(seq->pc4backbone[0]);
//   seq->length_seq=4;
//   seq->tlength=4;

  for(int i=0;i<seq->pc4backbone.size()/2;i++)
  //  for(int i=0;i<3;i++)
  {
    linVector v0(3);
    linVector Nn1(3);
    linVector va(3);
    if(i==0)
    {
      //problem.... 0.2433, 1.68
      //      va=seq->pc4backbone[1];
      double aa=3.14-1.92+0.24;
//       v0[0]=va[0]*cos(aa)+va[1]*sin(aa);
//       v0[1]=-va[0]*sin(aa)+va[1]*cos(aa);
//       v0[2]=va[2];
//     v0[0]=(rand()%1000)/500.0*3.1415926;
//     v0[1]=(rand()%1000)/500.0*3.1415926;
//     v0[2]=(rand()%1000)/500.0*3.1415926;
      orig0=seq->pc4backbone[i*2];
      va=seq->pc4backbone[i*2+1];
      va=va-orig0;
      linVector Nva(3);
      Nva[0]=va[1];
      Nva[1]=-va[0];
      Nva[2]=0;
      v0=va/va.norm()*cos(aa)+linVector::Cross(Nva/Nva.norm(),va/va.norm())*sin(aa);
      //      v0=v0/v0.norm();
      Nn1[0]=-v0[1];
      Nn1[1]=v0[0];
      Nn1[2]=0;
      fullbackbone.push_back(seq->pc4backbone[i*2]);
    }
    else
    {
      //find v0,v-1,Nn1.
      v0=v3;
      Nn1=linVector::Cross(v2,v3);
    }
    //compute p-c4'
    orig0=seq->pc4backbone[i*2];
    
    va=seq->pc4backbone[i*2+1];
    Solver mySolver;
    linVector x0(3);
    linVector ans(3);
    va=va-orig0;
    clock_t tReb1=clock();
    //    cerr<<"initial:\n";
    //v0.print();
    FuncWrapper rnaFunc(v0,Nn1,va,3.1415-1.81,3.1415-2.11,3.1415-1.92,1.59,1.43,1.51);
      //set v0,va
      //rnaFunc.v0=      rnaFunc.v0;
    x0[0]=2.1986; x0[1]=3.1652 ;x0[2]=2.9244;
    x0[0]=1.3648; x0[1]= 4.4921 ;x0[2]=4.0643;
    //    if(i>0)x0=oldans;
    //clock_t sol1=clock();
    //   for(int di=0;di<300;di++){
     x0[0]=(rand()%1000)/500.0*3.1415926;
     x0[1]=(rand()%1000)/500.0*3.1415926;
     x0[2]=(rand()%1000)/500.0*3.1415926;
     mySolver.SecantSolve(rnaFunc, x0, ans, 1e-3, maxIter);
     //}
     //  clock_t sol2=clock();
     //cerr<<"solve time"<< (sol2-sol1+0.0)/CLOCKS_PER_SEC<<endl;
     //exit(0);
//     ans=ans/(3.1415*2);
//     ans[0]=(ans[0]- floor(ans[0])) * (3.1415*2);
//     ans[1]=(ans[1]-floor(ans[1]))*(3.1415*2);
//     ans[2]=(ans[2]-floor(ans[2]))*(3.1415*2);
//     ans.print();
    //    ans.print();
//     }
//     clock_t tReb=clock();
//     cerr<<"rebuild time: "<<(tReb-tReb1+0.0)/CLOCKS_PER_SEC<<endl;
//     exit(0);
//    cerr<<"err ";
    //cerr<<"err\n";
    //	    rnaFunc.f(ans).print();
    //     }
     //     exit(0);
    //    oldans=ans;
    //rnaFunc.f(ans);
//     (orig+rnaFunc.v1).print();
//     (orig+rnaFunc.v1+rnaFunc.v2).print();
//     (orig+rnaFunc.v1+rnaFunc.v2+rnaFunc.v3).print();
//    if(i>0)orig0=fullbackbone[fullbackbone.size()-1];
    fullbackbone.push_back((orig0+rnaFunc.v1).getvector());
    fullbackbone.push_back((orig0+rnaFunc.v1+rnaFunc.v2).getvector());
    rnaFunc.v3=va-(rnaFunc.v1+rnaFunc.v2);
    fullbackbone.push_back((orig0+rnaFunc.v1+rnaFunc.v2+rnaFunc.v3).getvector());
    //    orig=orig+rnaFunc.v1+rnaFunc.v2+rnaFunc.v3;
    //orig=seq->pc4backbone[i*2+1];
    //from ans to local vector.
    //c4'-p
    //    v0=pc4backbone[i*2+1];
    orig0=seq->pc4backbone[i*2+1];
    va=seq->pc4backbone[i*2+2];
    va=va-orig0;
    //    orig=rnaFunc.f(ans)+va;
    v0=rnaFunc.v3;
    Nn1=linVector::Cross(rnaFunc.v2,v0);
    x0[0]=1.3648; x0[1]= 4.4921 ;x0[2]=4.0643;

    FuncWrapper rnaFuncPC4(v0,Nn1,va,3.1415-2.0,3.1415-1.91,3.1415-2.09,1.53,1.43,1.61);

    //    mySolver.lowBound[0]=1.3;
    //mySolver.upBound[0]=1.9;
    mySolver.SecantSolve(rnaFuncPC4, x0, ans, 1e-3, maxIter);
    mySolver.lowBound[0]=-1e20;
    mySolver.upBound[0]=1e20;
    //    cerr<<"err :\n"; rnaFuncPC4.f(ans).print();
//     (orig+rnaFuncPC4.v1).print();
//     (orig+rnaFuncPC4.v1+rnaFuncPC4.v2).print();
//     (orig+rnaFuncPC4.v1+rnaFuncPC4.v2+rnaFuncPC4.v3).print();
    //if(i>0)orig0=fullbackbone[fullbackbone.size()-1];
    fullbackbone.push_back((orig0+rnaFuncPC4.v1).getvector());

    fullbackbone.push_back((orig0+rnaFuncPC4.v1+rnaFuncPC4.v2).getvector());

    rnaFuncPC4.v3=va-(rnaFuncPC4.v1+rnaFuncPC4.v2);

    fullbackbone.push_back((orig0+rnaFuncPC4.v1+rnaFuncPC4.v2+rnaFuncPC4.v3).getvector());

    //    orig=orig+rnaFuncPC4.v1+rnaFuncPC4.v2+rnaFuncPC4.v3;
    orig=seq->pc4backbone[i*2+2];
    //    v3=rnaFuncPC4.v3;
    //v2=rnaFuncPC4.v2;
    v3=seq->pc4backbone[i*2+2]-seq->pc4backbone[i*2+1];
    v2=seq->pc4backbone[i*2+1]-seq->pc4backbone[i*2];
  }
  //save backbone pdb.
/*
  vector<string> fullnames;
    fullnames.push_back("P");
    fullnames.push_back("O5'");
    fullnames.push_back("C5'");
    fullnames.push_back("C4'");
    fullnames.push_back("C3'");
    fullnames.push_back("O3'");
    rnaCRFSampler::savevector(fullbackbone, "test.fullbb.pdb", 'B',fullnames);


    fullnames.clear();
    fullnames.push_back("P");
    fullnames.push_back("C4'");
    rnaCRFSampler::savevector(seq->pc4backbone, "test.pc4backbone.pdb", 'A',fullnames);  
    //  */
//stick all side chain on the backbone.including PO1,
//    exit(0);
    BuildFullStep2(seq, fullbackbone,m_pModel);

}

void RNAbuilder::BuildFullStep2(SEQUENCE *seq, const vector<vector<double> > &fullbackbone, rnaCRFSampler* m_pModel)
{
  //  seq->fullbackbone;
  seq->allresstru.resize(seq->tlength,vector<double>(3,0));
  BuildFullStep2Part(seq, fullbackbone, m_pModel, 0, seq->tlength-1);
}

void RNAbuilder::BuildFullStep2Part(SEQUENCE *seq, const vector<vector<double> > &fullbackbone, rnaCRFSampler* m_pModel, int begin, int end)
{
  bool DEBUGRIB=0;
  //build ribose, fullbackbone begins with p
  vector<vector<double> > ribobackbone;
  linVector chiN1old(3);
  seq->clashlist.clear();
  for(int i=begin*6;i<end*6+6;i=i+6)
  {
    if(i+3>=fullbackbone.size()-1) continue;
    //atoms are in order of p, O5, c5, c4, c3, o3
    if(DEBUGRIB)
      for(int j=0;j<6;j++)
	ribobackbone.push_back(fullbackbone[i+j]);
    linVector orig;
    orig=fullbackbone[i+3];
    linVector e1;
    linVector e2;
    linVector e3;
    linVector e5;
    linVector n5;
    e1=fullbackbone[i+4];
    e1=e1-orig;
    e2=fullbackbone[i+2];
    e2=orig-e2;
    e5=fullbackbone[i+5]-fullbackbone[i+4];
    n5=linVector::Cross(e1,e5);
    n5=n5/n5.norm();
    e3=linVector::Cross(e2,e1);
    e3=e3/e3.norm();
    e3=e3+n5;
    e3=e3/e3.norm();
    e1=e1/e1.norm();
    e2=linVector::Cross(e3,e1);

    //    linMatrix<double> trans(e1,e2,e3); //be careful about column/row trans
    vector<vector<double> > ntstru;
    for(int j=0;j<m_pModel->puckerAtom.size();j++)
    {
      linVector xx;
      xx=m_pModel->puckerAtom[j];
      xx=e1*xx[0]+e2*xx[1]+e3*xx[2]+orig;
      ntstru.push_back(xx.getvector());//ribose atoms
      if(DEBUGRIB)         
	ribobackbone.push_back(xx.getvector());
    }

    //seq->fullbackbone.
    vector<double> ntstrufull;
    for(int j=0;j<6;j++)
      for(int h=0;h<3;h++)
	ntstrufull.push_back(fullbackbone[i+j][h]);//very backbone
    for(int j=0;j<ntstru.size();j++)//backbone atoms other than P-,,,- C4-,,,-;
      for(int h=0;h<3;h++)
	ntstrufull.push_back(ntstru[j][h]);
    seq->fullbackbone[i/6]=ntstrufull;
  }

  //stick residue atoms
  for(int ntpos=begin;ntpos<=end;ntpos++){
    vector<double> resstru=m_pModel->getresstru(seq->getseq(ntpos));
    //compute C1' N9/6 C8/6 from bond lengths and torsion chi
    //chi is dihedral of O4' c1' N1 c6
    vector<vector<double> > localvecs;
    double aa;//planar angle of c1-n1-c6 or c1-n9-c8
    if(seq->getseq(ntpos)>1)
      aa=1.02;
    else 
      aa=0.91;
    double l6=1.375;
    
    vector<vector<double> > ntstru(m_pModel->puckerAtom.size(),vector<double>(3,0));
    for(int j=0;j<m_pModel->puckerAtom.size();j++)
      for(int h=0;h<3;h++)
	ntstru[j][h]=seq->fullbackbone[ntpos][seq->fullbackbone[ntpos].size()-m_pModel->puckerAtom.size()*3+j*3+h];

    linVector N1;
    N1=ntstru[4]; // C1, , ,O4,N1
    linVector C1;
    C1=ntstru[0];
    linVector nC1N1;
    nC1N1=ntstru[4]-ntstru[0]; // N1 - C1
    linVector nO4C1;
    nO4C1=ntstru[0]-ntstru[3]; //C1 - O4
    linVector nNO4C1N1=linVector::Cross(nO4C1,nC1N1);
    //    linVector nNturned=nNO4C1N1/nNO4C1N1.norm()*cos(chi)+linVector::Cross(nNO4C1N1/nNO4C1N1.norm(), nC1N1/nC1N1.norm())*sin(chi);
    linVector LC1(3);
    linVector RC1(3);

    if(ntpos==0)
      LC1=C1;
    else{
      for(int h=0;h<3;h++)
	LC1[h]=seq->fullbackbone[ntpos-1][6*3+h];
    }
    if(ntpos==seq->tlength-1)
      RC1=C1;
    else{
      for(int h=0;h<3;h++)
	RC1[h]=seq->fullbackbone[ntpos+1][6*3+h];
    }

    linVector nNave=RC1-LC1;
    linVector n1=linVector::Cross(nC1N1,nNave);
    linVector C6=nC1N1/nC1N1.norm()*cos(aa)+n1*sin(aa)/n1.norm();
    C6=C6*l6+N1;
    localvecs.push_back(C1.getvector());
    localvecs.push_back(N1.getvector());
    localvecs.push_back(C6.getvector());

    //=m_pModel->getC1NC(fullbackbone[i],onechi,getseq(i));
    m_pModel->retransformation(localvecs,resstru);
    seq->allresstru[ntpos]=resstru;// all atoms on residue
  }

  //  save backbone pdb.
  if(DEBUGRIB){
      vector<string> fullnames;
    fullnames.push_back("P");
    fullnames.push_back("O5'");
    fullnames.push_back("C5'");
    fullnames.push_back("C4'");
    fullnames.push_back("C3'");
    fullnames.push_back("O3'");

    fullnames.push_back("C1'");
    fullnames.push_back("C2'");
    fullnames.push_back("O2'");
    fullnames.push_back("O4'");
    fullnames.push_back("N1");
      rnaCRFSampler::savevector(ribobackbone, "test.ribobb.pdb", 'B',fullnames);
         exit(0);
  }
  seq->ComputeClash();

}

void RNAbuilder::ReBuildRes(SEQUENCE *seq, rnaCRFSampler* m_pModel){

  for(int i=0;i<seq->clashlist.size();i++){
    int ntpos=seq->clashlist[i]+1;
  vector<vector<double> > ntstru(5,vector<double>(3,0));
  vector<vector<double> > oldntstru(5,vector<double>(3,0));
    
    for(int j=0;j<ntstru.size();j++)//backbone atoms other than P-,,,- C4-,,,-;
      for(int h=0;h<3;h++)
	ntstru[j][h]=seq->fullbackbone[ntpos][6*3+j*3+h];
    int oldntpos;
    if(ntpos>0)oldntpos=ntpos-1;
    else
      oldntpos=ntpos+1;
    for(int j=0;j<ntstru.size();j++)//backbone atoms other than P-,,,- C4-,,,-;
      for(int h=0;h<3;h++)
	oldntstru[j][h]=seq->fullbackbone[oldntpos][6*3+j*3+h];

    vector<vector<double> > localvecs;
    double aa;//planar angle of c1-n1-c6 or c1-n9-c8
    if(seq->getseq(ntpos)>1)
      aa=1.02;
    else 
      aa=0.91;
    double l6=1.375;
    double chi=seq->chi[ntpos];
    //            chi=3.1415*0.5;
    //        chi=;
    //    chi=1.57;
    //find c1'-left c1'

    linVector N1;
    N1=ntstru[4]; // C1, , ,O4,N1
    linVector C1;
    C1=ntstru[0];

    linVector oldC1;
    oldC1=oldntstru[0];
    linVector c1c1=C1-oldC1;
    linVector nC1C1=c1c1/c1c1.norm();


    linVector nC1N1;
    nC1N1=ntstru[4]-ntstru[0]; // N1 - C1
    linVector nO4C1;
    nO4C1=ntstru[0]-ntstru[3]; //C1 - O4
    linVector nNO4C1N1=linVector::Cross(nO4C1,nC1N1);
    //    linVector nNO4C1N1=linVector::Cross(nC1C1,nC1N1);
    linVector nNturned=nNO4C1N1/nNO4C1N1.norm()*cos(chi)+linVector::Cross(nNO4C1N1/nNO4C1N1.norm(), nC1N1/nC1N1.norm())*sin(chi);
    linVector n1=linVector::Cross(nC1N1,nNturned);
    linVector C6=nC1N1/nC1N1.norm()*cos(aa)+n1*sin(aa)/n1.norm();
    C6=C6*l6+N1;
    localvecs.push_back(C1.getvector());//may be wrong
    localvecs.push_back(N1.getvector());
    localvecs.push_back(C6.getvector());

    //=m_pModel->getC1NC(fullbackbone[i],onechi,getseq(i));
    vector<double> resstru=m_pModel->getresstru(seq->getseq(ntpos));
    m_pModel->retransformation(localvecs,resstru);
    seq->allresstru.push_back(resstru);// all atoms on residue
  }
  seq->ComputeClash();
}

void RNAbuilder::GreeyBuild(SEQUENCE *seq, rnaCRFSampler * m_pModel)
{
  vector<vector <double> > fullbackbone(seq->tlength*6,vector<double>(3,0));
  //if the first time of building, then build it all
  GreeyBuildPart(seq, m_pModel, 0, seq->tlength-1,fullbackbone);
  BuildFullStep2(seq, fullbackbone,m_pModel);
  //else build part of it.
}

void RNAbuilder::GreeyBuildPart(SEQUENCE *seq, rnaCRFSampler * m_pModel, int begin, int end, vector<vector<double> > &fullbackbone)
{

  double PI=atan(1)*4;
  vector<string> fullnames;
  fullnames.clear();
  fullnames.push_back("P");
  fullnames.push_back("C4'");
  rnaCRFSampler::savevector(seq->pc4backbone, "test.pc4backbone.pdb", 'A',fullnames);  

  //use greedy method. For each torsion, choose one which result in an atom position closest to next C4' or P.
  linVector v1(3);
  linVector v2(3);
  linVector Nn1(3);linVector nV1(3);linVector nN1(3);linVector nN1V1(3);linVector nN2(3);linVector nV2(3);
  linVector va(3);
  linVector orig0(3);
  linVector orig1(3);

  double bondlen[6]={1.5919,    1.4217,    1.5079,    1.5177,    1.4210,    1.6074};
  double aa[6]={1.3287,  1.0362,    1.2174,    1.1356,    1.2068,    1.0524};
  //  double aa[6]={PI-1.81,PI-2.11,PI-1.92,PI-2.0,PI-1.91,PI-2.09};
  double lowBound[6]={0.5156,1.2983,0.4790,1.3648,0.0158,0.5920};
  double upBound[6]={6.0185,4.6953,5.1234,1.8611,6.0277,6.2309};
  double cosa[6],sina[6];
  double cost,sint;
  for(int j=0;j<6;j++)
  {
    cosa[j]=cos(aa[j]);
    sina[j]=sin(aa[j]);
    lowBound[j]=lowBound[j]/2;
    upBound[j]=upBound[j]+(2*PI-upBound[j])/2;
  }
  lowBound[3]=1.4;
  upBound[3]=1.9;

  for(int i=begin;i<=end;i++)
  //  for(int i=0;i<3;i++)
  {
    for(int ii=0;ii<6;ii++){//build all six atoms on a res.
      if(ii==0 && i==0){
	double aa=3.14-1.92+0.24;
	  aa=3.1415/6;
	orig0=seq->pc4backbone[i*2];
	va=seq->pc4backbone[i*2+1];
	va=va-orig0;
	linVector Nva(3);
	Nva[0]=va[1];
	Nva[1]=-va[0];
	Nva[2]=0;
	Nva=Nva/Nva.norm();
 	fullbackbone[0]=(orig0.getvector());
	v1=va/va.norm()*cos(aa)+linVector::Cross(Nva/Nva.norm(),va/va.norm())*sin(aa);
	double l1=bondlen[ii];
	fullbackbone[1]=((v1*l1+orig0).getvector());
	continue;
      }
      //Need nN1, nV1,
      int last1,last2,last3;
      if(i>0){
	last1=i*6+ii-1;
	last2=i*6+ii-2;
	last3=i*6+ii-3;
      }
      else{
	last1=ii;
	last2=ii-1;
	last3=ii-2;
      }
      orig0=fullbackbone[last1];
      orig1=fullbackbone[last2];
      nV1=orig0-orig1;
      nV1=nV1/nV1.norm();
      if(i==0 && ii==1){
	nN1[0]=-nV1[1];
	nN1[1]=nV1[0];
	nN1[2]=0;
	nN1=nN1/nN1.norm();
      }
      else{
	linVector v0;
	v0=fullbackbone[last2]-fullbackbone[last3];
	nN1=linVector::Cross(v0,nV1);
	nN1=nN1/nN1.norm();
      }
      double      l2=bondlen[ii];
      if(ii<3)
	va=seq->pc4backbone[i*2+1];
      else
	va=seq->pc4backbone[i*2+2];
      //      va=seq->pc4backbone[seq->pc4backbone.size()-1];

      va=va-orig0;
      nN1V1=linVector::Cross(nN1,nV1);
//       if(ii==4)
//       {
// 	cost=cos(1.4);
// 	sint=sin(1.4);
// 	nN2=nN1*cost+nN1V1*sint;
//       } 
//       else
//       {
 	cost=va*(nN1V1)/va.norm();
 	sint=va*nN1/va.norm();//or both negative
	nN2=nN1*cost-nN1V1*sint;
	double t=acos(cost);
	if(sint<0)t=2*PI-t;
	if(t<lowBound[ii])
	{
	  if( lowBound[ii]-t> t+PI*2-upBound[ii])
	    t=upBound[ii];
	  else 
	    t=lowBound[ii];
	}
	if( t> upBound[ii]){
	  if( PI*2+lowBound[ii]-t > t-upBound[ii])
	    t=upBound[ii];
	  else 
	    t=lowBound[ii];
	}
// 	}
//	nN2=linVector::Cross(nV1,va);
//	nN2=nN2/nN2.norm();
      nV2=nV1*cosa[ii]+linVector::Cross(nN2,nV1)*sina[ii];
      nV2=nV2/nV2.norm();
      v2=nV2*l2+orig0;
      //      cerr<<l2<< " "<<(nV2*l2).norm()<<endl;
      fullbackbone[i*6+ii]=v2.getvector();
    }
  }
}

//Function PartBuild
void RNAbuilder::PartBuild(SEQUENCE *seq, rnaCRFSampler * m_pModel, vector<int> changed)
{
  if(DEBUG){
    cerr<<"changed ";
    for(int i=0;i<changed.size();i++)
      cerr<<changed[i];
    cerr<<endl;
  }
  
//   for(int i=0;i<changed.size();i++)
//     cerr<<changed[i];
//   cerr<<endl;
  //vector<int> changed;
  //Assert the seq->fullbackbone seq->allresstru seq->pc4backbone has a feasible structure, 
  vector<vector<int> > unchangedGroup;
  int begin,end;
  int begin1;
  int end1;
  for(int i=0;i<changed.size();i++)
  {
    if((i==0&& changed[i]==0) || changed[i]-changed[i+1]==1)//1->0 changed->unchanged.
    {
      begin=i;
    }
    if((i==changed.size()-1 &&changed[i]==0 ) || changed[i]-changed[i+1]==-1)//0->1 unchanged->changed.
    {
      end=i;
      if(end-begin+1>=3){
	vector<int> group;
	group.push_back(begin);
	group.push_back(end);
	unchangedGroup.push_back(group);
      }
    }
  }
  
  vector<vector<vector<double> > > unchangedCord(seq->tlength);
  vector<vector<vector<double> > > unchangedBack(seq->tlength);
  //the uncahngedCord[i] stores the ith unchanged residue
  for(int i=0;i<unchangedGroup.size();i++)
  {
    int h; 
    int begin=unchangedGroup[i][0];
    int end=unchangedGroup[i][1];
    //keep old cordinates.
    linVector v1,v2,v3;
    v1=seq->pc4backbone[2*begin];//p-C4'-p
    v2=seq->pc4backbone[2*begin+1];
    v3=seq->pc4backbone[2*begin+2];
    CordSys thisCord(v1,v2,v3);
    //convert all atoms between begin and end into the cordinate system.
    for(int j=begin;j<=end;j++)
    {
      vector<vector<double> > unchangedRes;
      for(int h=0;h<seq->allresstru[j].size()/3;h++)
      {
	linVector thisatom(3);
	thisatom[0]=seq->allresstru[j][h*3+0];
	thisatom[1]=seq->allresstru[j][h*3+1];
	thisatom[2]=seq->allresstru[j][h*3+2];
	vector<double> vthisatom=thisCord.GetCoef(thisatom).getvector();
	unchangedRes.push_back(vthisatom);
      }
      unchangedCord[j]=unchangedRes;

      unchangedRes.clear();
      for(int h=0;h<seq->fullbackbone[j].size()/3;h++)
      {
	linVector thisatom(3);
	thisatom[0]=seq->fullbackbone[j][h*3+0];
	thisatom[1]=seq->fullbackbone[j][h*3+1];
	thisatom[2]=seq->fullbackbone[j][h*3+2];
	vector<double> vthisatom=thisCord.GetCoef(thisatom).getvector();
	unchangedRes.push_back(vthisatom);
      }
      unchangedBack[j]=unchangedRes;
    }
  }
  //for partial changed a sampcurr, as well as pc4backbone,
  //we only need to rebuild part of the structure
  // suppose a changing happend from pos. ps0 to pos. ps1
  //Build part stru from ps0 to ps1.
  //PartBuild pc4backbone, use complete rebuilt, which is fast.
  seq->Rebuild2();
  
  //The unchanged p-c4 atoms, their position changed, but relative cordinate unchanged.
  //For each unchanged part,
  //1. build a cordinate for old unchanged.(at least 3 atoms)
  //2. build a new cord system for new unchanged
  //3. compute new position in new cord system for all un
  //PartBuild ribose atoms
  vector<vector <double> > fullbackbone(seq->tlength*6,vector<double>(3,0));
  int segUnchanged=0;
  linVector v1(3);
  linVector v2(3);
  linVector v3(3);
  CordSys thisCord;//(v1,v2,v3);

  for(int i=0;i<seq->pc4backbone.size()/2;i++){
    int changedFlag=1;
    if(segUnchanged<unchangedGroup.size() && i>=unchangedGroup[segUnchanged][0] && i<=unchangedGroup[segUnchanged][1]){
      changedFlag=0;
      if(i==unchangedGroup[segUnchanged][0]){ 
	// only at beginning of each unchanged part.
	if(unchangedGroup[segUnchanged][0]==0){
	  v1=seq->pc4backbone[2*unchangedGroup[segUnchanged][0]];//p-C4'-p
	  v2=seq->pc4backbone[2*unchangedGroup[segUnchanged][0]+1];
	  v3=seq->pc4backbone[2*unchangedGroup[segUnchanged][0]+2];
	}
	else{//using left p-c4'-p from GreeyBuildPart
	  GreeyBuildPart(seq, m_pModel, i, i,fullbackbone);
	  v1=fullbackbone[i*6];//p-C4'-p
	  v2=fullbackbone[i*6+1];
	  v3=fullbackbone[i*6+2];
	}
	thisCord=CordSys(v1,v2,v3);
// 	cerr<<"this Cord...\n";
      }
    }
    else{
      changedFlag=1;
    }

    if(segUnchanged<unchangedGroup.size() && i==unchangedGroup[segUnchanged][1]){
      segUnchanged++;
    }

    if(changedFlag==0) {
      //determine cordinate system
      //using saved structure, output: seq->allresstru[i][].
      //get new cordinate systems
      vector<vector<double> > resi(unchangedCord[i].size(),vector<double>(3,0));
      resi=unchangedCord[i];
      for(int h=0;h<resi.size();h++){
	linVector oneAtom(3);
	oneAtom=resi[h];
	linVector atom=thisCord.GetRealVector(oneAtom);
	seq->allresstru[i][h*3+0]=atom[0];// only atoms on residue
     	seq->allresstru[i][h*3+1]=atom[1];
	seq->allresstru[i][h*3+2]=atom[2];
	if(DEBUG)	cerr<<atom[0]<<" "<<atom[1]<<" "<<atom[2]<<endl;
      }

      //fill fullbackbone
      resi=unchangedBack[i];
      for(int h=0;h<resi.size();h++){
	linVector oneAtom(3);
	oneAtom=resi[h];
	linVector atom=thisCord.GetRealVector(oneAtom);
	if(h<6){
	  fullbackbone[i*6+h]=atom.getvector();
	}
	seq->fullbackbone[i][h*3+0]=atom[0];// atoms on full backbone including 6 atoms on bb and atoms on ribose.
	seq->fullbackbone[i][h*3+1]=atom[1];
	seq->fullbackbone[i][h*3+2]=atom[2];
	if(DEBUG)cerr<<atom[0]<<" "<<atom[1]<<" "<<atom[2]<<endl;
	
      }
    }
    else{
      // greedybuild part
      // buildstep2 part.
      begin1=i;
      if(segUnchanged<=unchangedGroup.size()-1){
	end1=unchangedGroup[segUnchanged][0]-1;
      }
      else{
	end1=seq->tlength-1;
      }
      GreeyBuildPart(seq, m_pModel, begin1, end1,fullbackbone);
      BuildFullStep2Part(seq,fullbackbone,m_pModel,begin1, end1);
      i=end1;
    }
  }
  seq->ComputeClash();
}
