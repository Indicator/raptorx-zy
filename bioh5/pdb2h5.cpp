//This program read a pdb file and extract pairwise distance to a dataset of a given hdf5 file.
//For each pair, there are 3 distance values, 1:CA,2:CB,3:CLOSEST atoms.

#include <stdio.h>
#include <string>
#include <exception>
#include "matrix.h"
#include "bioh5.h"

//#include "protein.h"

#include <BALL/KERNEL/protein.h>
#include <BALL/KERNEL/atomContainer.h>
#include <BALL/FORMAT/PDBFile.h>
#include <BALL/KERNEL/residue.h>
#include <BALL/KERNEL/atom.h>
#include "H5Cpp.h"

#define _CONTACT_CA 0
#define _CONTACT_CB 1
#define _CONTACT_CLOSEST 2

using namespace std;
using namespace H5;
vector<string> split(const string &s, char delim) 
{  
  stringstream ss(s);
  string item;
  vector<string> elems;
  while(getline(ss, item, delim)) {
    if(item!="")
      elems.push_back(item);
  }
  return elems;
}

void Bioh5::readContactPdb(string pdbfile,int* isMissing,int ds, double contactCut, Matrix &realcon,Matrix& distmat, int contactType){
  BALL::Protein pdb;
  BALL::PDBFile *pdbf;
  try{
    pdbf=new BALL::PDBFile(pdbfile,ios::in);
  }catch(BALL::Exception::FileNotFound){
	  cerr<<"open error "<<pdbfile <<endl;
    exit(-1);
	}
  *pdbf >> pdb;
  int i=0,j=0; // i,j are in dssp sequence,
  int seqlen=realcon.getncol();
  int dsspSeqres[seqlen];
  int h=0;
  
  for(int k=0;k<seqlen;k++){
    if(!(isMissing[k])){
      dsspSeqres[h]=k;
      h++;
    }
  }
  //  dsspSeqres[i] is the residue in seqres sequence

  for(BALL::ResidueIterator resIter=pdb.beginResidue(); resIter!=pdb.endResidue(); resIter++,i++){
    j=0;
    for(BALL::ResidueIterator resIter2=pdb.beginResidue(); resIter2!=pdb.endResidue(); resIter2++,j++){
      int di,dj;
      di=dsspSeqres[i];
      dj=dsspSeqres[j];
      if(dj-di<=0) continue; // only consider upper triangle contacts.
      
      if(contactType==_CONTACT_CA){
        BALL::AtomIterator at;
        for(at=resIter->beginAtom();at!=resIter->endAtom();at++)
          if(at->getName()=="CA")break;
        BALL::AtomIterator at2;
        for(at2=resIter2->beginAtom();at2!=resIter2->endAtom();at2++)
          if(at2->getName()=="CA")break;
        BALL::Vector3 pos = at->getPosition();
        BALL::Vector3 pos2 = at2->getPosition();
        double dist=(pos.x-pos2.x)*(pos.x-pos2.x)+(pos.y-pos2.y)*(pos.y-pos2.y)+(pos.z-pos2.z)*(pos.z-pos2.z);
        dist=sqrt(dist);
        distmat(di,dj)=dist;
        if(dist<contactCut){
          realcon(di,dj)=1;
        }
        
      }else if(contactType==_CONTACT_CB){
        BALL::AtomIterator at;
        for(at=resIter->beginAtom();at!=resIter->endAtom();at++)
          if(at->getName()=="CB")break;
        BALL::AtomIterator at2;
        for(at2=resIter2->beginAtom();at2!=resIter2->endAtom();at2++)
          if(at2->getName()=="CB")break;
        //Find ca if cb not exists.
        if(at==resIter->endAtom()){
          for(at=resIter->beginAtom();at!=resIter->endAtom();at++)
          if(at->getName()=="CA")break;
        }
        if(at2==resIter2->endAtom()){
          for(at2=resIter2->beginAtom();at2!=resIter2->endAtom();at2++)
            if(at2->getName()=="CA")break;
        }
        //if both ca and cb are missing, we skip this pair
        if(at==resIter->endAtom()) continue;
        if(at2==resIter2->endAtom()) continue;
        
        BALL::Vector3 pos = at->getPosition();
        BALL::Vector3 pos2 = at2->getPosition();
        double dist=(pos.x-pos2.x)*(pos.x-pos2.x)+(pos.y-pos2.y)*(pos.y-pos2.y)+(pos.z-pos2.z)*(pos.z-pos2.z);
        dist=sqrt(dist);
        distmat(di,dj)=dist;
        if(dist<contactCut){
#ifdef DEBUG
            printf("realcon %d %d\n",di,dj);
#endif
           realcon(di,dj)=1;
        }
        
      }else if(contactType==_CONTACT_CLOSEST){
        for(BALL::AtomIterator at=resIter->beginAtom();at!=resIter->endAtom();at++){
          BALL::Vector3 pos = at->getPosition();
          //        fprintf(stderr,"%d %.4f %.4f %.4f\n",i,pos.x,pos.y,pos.z);
          for(BALL::AtomIterator at2=resIter2->beginAtom();at2!=resIter2->endAtom();at2++){
            BALL::Vector3 pos2 = at2->getPosition();
            double dist=(pos.x-pos2.x)*(pos.x-pos2.x)+(pos.y-pos2.y)*(pos.y-pos2.y)+(pos.z-pos2.z)*(pos.z-pos2.z);
            dist=sqrt(dist);
            distmat(di,dj)=dist;
            if(dist<contactCut){
              realcon(di,dj)=1;
              break;
            }
          }
          if( realcon(di,dj)>1-1e-10)break;
        }
      }
    }
  }
}

void Bioh5::matrixToh5(string fn1, string ds, Matrix& buf) {
    H5File *file;
    try {
        file = new H5File(fn1, H5F_ACC_EXCL);
    } catch (FileIException error) {
        file = new H5File(fn1, H5F_ACC_RDWR);
    }

    hsize_t dims[2];
    dims[0] = buf.getnrow();
    dims[1] = buf.getncol();
    //    hsize_t dims[]={2,2,2,2};
    //  double aln1[seqlen][seqlen][21][21];
    //double* aln1=new double[seqlen*seqlen*21*21];
    hsize_t cdims[2];
    cdims[0] = buf.getnrow();
    cdims[1] = buf.getncol();

    DataSpace dataspace(2, dims); // create new dspace
    DSetCreatPropList plist;
    plist.setChunk(2, dims);
    plist.setDeflate(6);
    //herr_t H5LTfind_dataset ( hid_t loc_id, const char *dset_name )
    try {
        Group* group = new Group(file->createGroup("/Data"));
    } catch (FileIException e) {
    }
    DataSet dataset;
    try {
        dataset = file->createDataSet(ds, PredType::NATIVE_DOUBLE, dataspace, plist);
    } catch (FileIException e) {
        dataset = file->openDataSet(ds); 
    }
    dataset.write(buf.GetPtr(), PredType::NATIVE_DOUBLE);
    file->close();
}

#define NOMAIN 
#ifdef NOMAIN
#else
int main(int argc,char** argv)
{
  string tplfile;
  string pdbfile;
  string pdbid;
  string predfile;
  Protein* tpl;
  
  int seqlen;
  int ds; // minimal sequence separation for a contact
  Matrix predcon;
  Matrix distmat;
  Matrix realcon;
  double distCut;
  int contactType;
  int nCorr;
  int totalPredCon;
  int totalNativeCon;
  int nbest;
  Matrix predConTP; 
  Matrix predConFP;
  
  //initial
  if(argc<=1){
    printf("[usage] pdb2h5 -pdb [pdbfile] -pdbid [pdbid] -tpl [tplfile] -h5 [hdf5 file]\n" );
  }
  map<string,string> par;
  for(int i=1;i<argc;i=i+2)
    par[argv[i]]=argv[i+1];
  pdbfile=par["-pdb"];
  pdbid=par["-pdbid"];
  tplfile=par["-tpl"];
  string mode=par["-mode"];
  tpl=new Protein(tplfile);
  realcon.resize(tpl->length,tpl->length);
  predConTP.resize(tpl->length,tpl->length);
  predConFP.resize(tpl->length,tpl->length);
  predcon.resize(tpl->length,tpl->length);
  predcon.AddScalar(-1e10);
  distmat.resize(tpl->length,tpl->length);
  double nbest0=atof(par["-nbest"].c_str());
  
  //default parameters
  ds=6;
  distCut=8;
  
  //how to get sequence length? from tpl, must.
  //read pdb , extract ca-contact c-b contact and closest heavy atom contact , given distance cutoff
  try{
    for(int c=0;c<3;c++){
      readContactPdb(pdbfile,tpl,ds,distCut,realcon,distmat,c);
      char dsbuf[255];
      sprintf(dsbuf,"/Data/dist_%d",c);
      printf("%s\n",dsbuf);
      matrixToh5(par["-h5"],dsbuf,distmat);
    }
    //write the distance/ distance cut to dataset
  }catch(exception &e){
    cerr<<e.what()<<endl;
  }
}
#endif