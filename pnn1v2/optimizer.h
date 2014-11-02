#ifndef _optimizer_h
#define _optimizer_h

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <time.h>
#include <sys/time.h>
#include <fenv.h>
#include "pnn1.h"
#ifdef _MPI
#include "mpi.h"
#endif
using namespace std;
class Nnpf;
// MPI
extern int num_procs;
extern int proc_id;

extern double rt ;// = 1e-8;
// end 

void Error(const char *error_msg);
int _ASSERT_FAILED(char *filename, int line_number, const char *error_msg);

#ifdef NDEBUG
#define Assert(test,error_msg)
#else
#define Assert(test,error_msg) (test ? 0 : _ASSERT_FAILED(__FILE__, __LINE__, error_msg))
#endif

extern bool toggle_error;//= false;

inline int _ASSERT_FAILED(char *filename, int line_number, const char *error_msg) {
    if (toggle_error) return 0;
    cerr << "Assertion failed in file \"" << filename << "\", line " << line_number << ": " << error_msg << endl;
    abort();
    return 0;
}

inline void Error(const char *error_msg) {
    cerr << "ERROR: " << error_msg << endl;
    toggle_error = true;
    exit(1);
}


class Minimizer {
    bool use_preconditioner;
    int N;
    int M;
    double term_ratio;
    double alpha;
    double beta;
    double gamma1;
    double gamma2;
    double min_improvement_ratio;
    int max_line_search_evaluations;
    int max_small_steps;
    virtual void Report(const vector<double> &theta, int iteration, double objective, double step_length) = 0;
    virtual void Report(const string &s) = 0;
    virtual double ComputeGradient(int iteration, vector<double> &g, const vector<double> &x, bool bCalculateGate, int num_consec_small_steps) = 0;
    virtual void ComputeHessianDiagonal(vector<double> &h, const vector<double> &x); // {        h = x;    }
    virtual double ComputeFunction(int iteration, const vector<double> &x,  int linesearch=0) = 0;
    double LineSearch(int iteration,
    const vector<double> &x, const vector<double> &d, const vector<double> &g, double &f_curr,int );
public:
    enum class methodtype {lbfgs,annealing};
    methodtype method;
    
    Minimizer(bool use_preconditioner,
            const int M = 20, /* number of previous gradients to remember                          */
            const double term_ratio = 0.000001, /* required ratio of gradient norm to parameter norm for termination */
            const double alpha = 0.000001, /* minimum improvement ratio for sufficient decrease                 */
            const double beta = 0.5, /* default step size                                                 */
            const double gamma1 = 0.01, /* maximum step size                                                 */
            const double gamma2 = 0.8, /* minimum step size                                                 */
            const double min_improvement_ratio = 1.000001, /* minimum improvement ratio after sufficient decrease               */
            const int max_line_search_evaluations = 10,
            const int max_small_steps=30); /* maximum number of line search function evaluations                */

    virtual ~Minimizer();// {   }

    void run_lbfgs(vector<double> &x0, /* initial guess of solution    */
            const int max_iterations = 100, int iter_start=0); /* maximum number of iterations */
    
    vector<double> x0;
    int max_iterations;
    int iter_start;
    void run_lbfgs(int lscode=0); 
    
    void TrainOnline(vector<double> &x0, const int max_iterations = 100);
    void ApproximateGradient(vector<double> &g, const vector<double> &x, const double EPSILON = 1e-4);
};

class Lbfgs : public Minimizer {
public:
    Lbfgs(Nnpf* pModel); 
    Nnpf* mp;
    double ComputeGradient(int iteration, vector<double> &g,
            const vector<double> &x, bool bCalculateGate,
            int num_consec_small_steps);
    double ComputeFunction(int iteration, const vector<double> &x,int linesearch=0);
    void Report(const vector<double> &theta, int iteration,
            double objective, double step_length);
    void Report(const string &s);
};



/* Standard linear algebra */
double DotProduct(const vector<double> &x, const vector<double> &y);
double Norm(const vector<double> &x);
const vector<double> operator/(const vector<double> &x, const vector<double> &y);
const vector<double> operator+(const vector<double> &x, const vector<double> &y);
const vector<double> operator-(const vector<double> &x, const vector<double> &y);
const vector<double> &operator+=(vector<double> &x, double c);
const vector<double> operator*(const vector<double> &x, double c);

#endif