#ifndef RNABUILDER_H
#define RNABUILDER_H


#include "ANN.h"
#include "rnageo.h"
#include "bCNF_mpi_tp.h"

class RNAbuilder
{
public:
  RNAbuilder(){};
  ~RNAbuilder(){};
  //  static build(SEQUENCE *seq);
  void BuildFullFast(SEQUENCE *seq,rnaCRFSampler*);
  void BuildFullStep2(SEQUENCE *seq, const vector<vector<double> > &fullbackbone, rnaCRFSampler* m_pModel);
  void BuildFullStep2Part(SEQUENCE *seq, const vector<vector<double> > &fullbackbone, rnaCRFSampler* m_pModel, int begin, int end);
  void ReBuildRes(SEQUENCE *seq, rnaCRFSampler* m_pModel);
  void GreeyBuild(SEQUENCE *seq, rnaCRFSampler * m_pModel);
  void GreeyBuildPart(SEQUENCE *seq, rnaCRFSampler * m_pModel, int begin, int end, vector<vector<double> > &fullbackbone);

  void PartBuild(SEQUENCE *seq, rnaCRFSampler * m_pModel,vector<int>);

};

#endif 
