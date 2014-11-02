#ifndef BCNF_H
#define BCNF_H

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <time.h>
#include <sys/time.h>

using namespace std;

// MPI
#ifdef _MPI
int num_procs;
int proc_id;
#endif
// end 

void Error (const char *error_msg);

int _ASSERT_FAILED (char *filename, int line_number, const char *error_msg);

#ifdef NDEBUG
#define Assert(test,error_msg)
#else
#define Assert(test,error_msg) (test ? 0 : _ASSERT_FAILED(__FILE__, __LINE__, error_msg))
#endif

//bool toggle_error = false;


/* Standard linear algebra */
double DotProduct (const vector<double> &x, const vector<double> &y);
double Norm (const vector<double> &x);
const vector<double> operator/(const vector<double> &x, const vector<double> &y);
const vector<double> operator+(const vector<double> &x, const vector<double> &y);
const vector<double> operator-(const vector<double> &x, const vector<double> &y);
const vector<double> &operator+= (vector<double> &x, double c);
const vector<double> operator*(const vector<double> &x, double c);

#endif
