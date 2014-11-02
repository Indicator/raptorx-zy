#include "bCNF.h"
bool toggle_error = false;
double rt = 1e-8;

int _ASSERT_FAILED (char *filename, int line_number, const char *error_msg){
  if (toggle_error) return 0;
  cerr << "Assertion failed in file \"" << filename << "\", line " << line_number << ": " << error_msg << endl;
  abort();
  return 0;
}

void Error (const char *error_msg){
  cerr << "ERROR: " << error_msg << endl;
  toggle_error = true;
  exit (1);
}


/* Standard linear algebra */
double DotProduct (const vector<double> &x, const vector<double> &y){
  Assert (x.size() == y.size(), "Vector size mismatch.");
  double ret = 0;
  for (int i = 0; i < (int) x.size(); i++) ret += x[i] * y[i];
  return ret;
}

double Norm (const vector<double> &x){
  return sqrt(DotProduct (x,x));
}

const vector<double> operator/(const vector<double> &x, const vector<double> &y){
  vector<double> ret (x);
  for (int i = 0; i < (int) ret.size(); i++) ret[i] /= y[i];
  return ret;
}

const vector<double> operator+(const vector<double> &x, const vector<double> &y){
  vector<double> ret (x);
  for (int i = 0; i < (int) ret.size(); i++) ret[i] += y[i];
  return ret;
}

const vector<double> operator-(const vector<double> &x, const vector<double> &y){
  vector<double> ret (x);
  for (int i = 0; i < (int) ret.size(); i++) ret[i] -= y[i];
  return ret;
}

const vector<double> &operator+= (vector<double> &x, double c){
  for (int i = 0; i < (int) x.size(); i++) x[i] += c;
  return x;
}

const vector<double> operator*(const vector<double> &x, double c){
  vector<double> ret (x);
  for (int i = 0; i < (int) ret.size(); i++) ret[i] *= c;
  return ret;
}
