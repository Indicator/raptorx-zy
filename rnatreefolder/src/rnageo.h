#ifndef RNAGEO_H
#define RNAGEO_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <cstdlib>
#include <cmath>

//struct resstructure;
using namespace std;

typedef struct atomstruct{
  string name;
  string resname;
  int resnum;
  vector<double> cords;
  struct resstructure * parentres;
}_atom;


typedef struct resstructure{
  map<string, _atom> atoms;
  string resname;
  int resnum;
}_res;

class RNAstruct{

public:
  RNAstruct(const RNAstruct& other);
  RNAstruct();
  double* getC4backbone();
  double* getPC4backbone();
  double* getbackbone();
  double* getfullstruct();
  vector<_res> chain;

};


#endif 
