#include "optimizer.h"
//Refactor: 

/* Constructor */
Minimizer::Minimizer(bool use_preconditioner, const int M, const double term_ratio,
        const double alpha, const double beta, const double gamma1, const double gamma2,
        const double min_improvement_ratio, const int max_line_search_evaluations, const int max_small_steps) :
use_preconditioner(use_preconditioner), M(M), term_ratio(term_ratio),
alpha(alpha), beta(beta), gamma1(gamma1), gamma2(gamma2),
min_improvement_ratio(min_improvement_ratio),
max_line_search_evaluations(max_line_search_evaluations) ,
max_small_steps (max_small_steps), method(methodtype::lbfgs){
}

void Minimizer::ComputeHessianDiagonal(vector<double> &h, const vector<double> &x) {
    h = x;
}

Minimizer::~Minimizer() {
}

Lbfgs::Lbfgs(Nnpf* pModel) : Minimizer(false) {
    mp = pModel;
    if (mp->par["-maxiter"] != "")
        istringstream(mp->par["-maxiter"]) >> max_iterations;
    else
        max_iterations = 3000;
    if (mp->par["-iter0"] != "")
        istringstream(mp->par["-iter0"]) >> iter_start;
    else
        iter_start = 0;
    x0.resize(mp->num_params,0);
    for(int i=0;i<mp->num_params;i++)
        x0[i]=mp->weights[i];
}

/**
 * 
 * @param iteration
 * @param x
 * @param delta
 * @param grad
 * @param f_curr
 * @param lscode : The running mode of linesearch, lscode=0: always sync in computefunction for linesearching.
 * lscode=1, use local weight of linesearch.
 * @return 
 */
double Minimizer::LineSearch(int iteration, const vector<double> &x, const vector<double> &delta,
        const vector<double> &grad, double &f_curr,int lscode=0) {
    if(method==methodtype::annealing){
        return 1.0/(1.0+iteration); // set in initial,temp control in lbfgs
    }
    
    
    f_curr = ComputeFunction(iteration, x,lscode);
    int num_evaluations = 0;
    const double dot_prod = DotProduct(delta, grad);
    bool increasing_step = false;
    bool sufficient_decrease = false;
    double best_t = 0;
    double best_f = f_curr;

    /* First, try a full Newton step. */
    double t_new1 = 1;
    double f_new1 = ComputeFunction(iteration, x + delta * t_new1,lscode);
    //if (proc_id==0) cerr << "best_f=" << best_f << "; f_new1=" << f_new1 << "; t_new1=" << t_new1 << endl;

    if (f_new1 < best_f) {
        best_f = f_new1;
        best_t = t_new1;
    }
    if (f_new1 <= f_curr + alpha * t_new1 * dot_prod) sufficient_decrease = true;

    /* If a sufficient decrease is found, then we'll allow the multiplier to get larger.
     * Otherwise, we'll force the multiplier to get gradually smaller. */
    if (sufficient_decrease) increasing_step = true;

    /* Now perform quadratic interpolation of:
     *  
     *    f_curr + dot_prod * t + ((f_new1 - f_curr) / t_new1^2 - dot_prod / t_new1) * t^2
     *
     * Note that this function is equal to f_curr at t = 0 and f_new1 at t = t_new1.  Note
     * also that the quadratic fit works only if the coefficient of t^2 is positive; this
     * will always be the case when a sufficient decrease has not been found since
     *
     *    f_new1 > f_curr + alpha * t_new1 * dot_prod 
     *
     * implies
     *
     *    f_new1 > f_curr + t_new1 * dot_prod
     */
    double t_new2 = t_new1;
    double f_new2 = f_new1;

    t_new1 = -dot_prod / (2 * ((f_new2 - f_curr) / t_new2 - dot_prod) / t_new2);

    /* Check to make sure the minimization of the quadratic was valid.  If not, try scaling the t value instead. */
    if (f_new2 <= f_curr + dot_prod * t_new2) {
        if (increasing_step) t_new1 = t_new2 / beta;
        else t_new1 = t_new2 * beta; /* This case is not really necessary, as explained above. */
    }

    /* If we're doing a decreasing step, clip the prediction to a restricted range. */
    if (!increasing_step) t_new1 = max(gamma1 * t_new2, min(gamma2 * t_new2, t_new1));

    /* Compute the new function value, check for sufficient decrease, and check for termination. */
    f_new1 = ComputeFunction(iteration, x + delta * t_new1,lscode);
    //if (proc_id==0) cerr << "best_f=" << best_f << "; f_new1=" << f_new1  << "; t_new1=" << t_new1<< endl;
    if (f_new1 < best_f) {
        best_f = f_new1;
        best_t = t_new1;
    }
    if (f_new1 <= f_curr + alpha * t_new1 * dot_prod) sufficient_decrease = true;
    if (sufficient_decrease && f_new1 >= f_new2 * min_improvement_ratio) {
        f_curr = best_f;
        return best_t;
    }

    while (true) {

        /* Now perform cubic interpolation of
         *
         *    f_curr + dot_prod * t + b * t^2 + a * t^3
         */

        double a = 1 / (t_new1 - t_new2) *
                ((f_new1 - f_curr - dot_prod * t_new1) / (t_new1 * t_new1) -
                (f_new2 - f_curr - dot_prod * t_new2) / (t_new2 * t_new2));

        double b = 1 / (t_new1 - t_new2) *
                (-(f_new1 - f_curr - dot_prod * t_new1) * t_new2 / (t_new1 * t_new1) +
                (f_new2 - f_curr - dot_prod * t_new2) * t_new1 / (t_new2 * t_new2));

        t_new2 = t_new1;
        f_new2 = f_new1;

        t_new1 = (-b + sqrt(b * b - 3 * a * dot_prod)) / (3 * a);

        /* Check to make sure the minimization of the cubic was valid.  If not, try scaling the
         * t value instead. */
        if (b * b - 3 * a * dot_prod <= 0) {
            if (increasing_step) t_new1 = t_new2 / beta;
            else t_new1 = t_new2 * beta;
        }

        /* If we're doing a decreasing step, clip the prediction to a restricted range. */
        if (!increasing_step) t_new1 = max(gamma1 * t_new2, min(gamma2 * t_new2, t_new1));

        /* Compute the new function value, check for sufficient decrease, and check for termination. */
        f_new1 = ComputeFunction(iteration, x + delta * t_new1,lscode);
        //if (proc_id==0) cerr << "best_f=" << best_f << "; f_new1=" << f_new1 << "; t_new1=" << t_new1 << endl;
        if (f_new1 < best_f) {
            best_f = f_new1;
            best_t = t_new1;
        }
        if (f_new1 <= f_curr + alpha * t_new1 * dot_prod) sufficient_decrease = true;
        if (sufficient_decrease && f_new1 * min_improvement_ratio >= f_new2) {
            f_curr = best_f;
            return best_t;
        }

        if (++num_evaluations >= max_line_search_evaluations) {
            f_curr = best_f;
            return best_t;
        }
    }
}

/* Finite-difference--based gradient */
//void Minimizer::ApproximateGradient (vector<double> &g, 

void Minimizer::ApproximateGradient(vector<double> &og,
        const vector<double> &x,
        const double EPSILON) {
    double base = ComputeFunction(0, x);
    vector<double> x_copy = x;

    if (proc_id == 0)
        cerr << "#	grad	approx	diff" << endl;
    //for (int i = 0; i < og.size(); i=i+10) {
    for (int i = og.size()-1; i >0; i=i-5) {
        //if (i == 1280 || i == 2525)
        //    i += 1230;
        x_copy[i] += EPSILON;
        //g[i] = (ComputeFunction (x_copy) - base) / EPSILON;
        double f = ComputeFunction(1, x_copy);
        double g = (f - base) / EPSILON;
        double error = abs((og[i] - g) / g);
        //og[i]=g;
//        if (proc_id == 0 && (error > 0.01 || i % 100 == 0))
        if (proc_id == 0 )
            cerr << i << ": " << og[i] << "::" << g << " " << error << "; f(" << x_copy[i] << ")=" << f << "; base(" << x[i] << ")=" << base << endl;
        x_copy[i] = x[i];
    }
}

/* LBFGS routine */
void Minimizer::TrainOnline(vector<double> &x0, const int max_iterations) {

    time_t start, end;
    time(&start);

    /* Initialization */
    int N = x0.size();
    vector<double> gOn(N, 0.0);
    for (int iterations = 0; iterations < max_iterations; iterations++) {
        /* STEP ONE: Compute new gradient vector */
        double f_curr = ComputeGradient(iterations, gOn, x0, true, 0);
        if (proc_id == 0) {
            time(&end);
            double dif = difftime(end, start);
            cerr << "iteration-" << iterations << ": ComputeGradient " << dif << " seconds. ( obj=" << f_curr << " ) " << endl;
            time(&start);
        }

        //*
#ifdef _check_grad
        if (iterations == 20 || iterations ==3) {
            fprintf(stderr, "check grad\n");
            vector<vector<double> > aa(6, gOn);
            for (int i = 5; i < 6; i++)
                ApproximateGradient(gOn, x0, pow(10.0, (double) -i));

            if (iterations == 0)exit(0);
        }
#endif
        //*/
        double step = 0.1 / (iterations + 1);
        x0 = x0 + gOn * step;
        iterations++;

        /* STEP SIX: Check termination conditions */
        Report(x0, iterations, f_curr, step);
        if (proc_id == 0) {
            time(&end);
            double dif = difftime(end, start);
            cerr << "STEP SIX: Check termination conditions " << dif << " seconds." << endl;
            time(&start);
        }

    }
    cerr << "Termination: maximum number of iterations reached" << endl;
}

void Minimizer::run_lbfgs(vector<double> &x0, const int max_iterations, int iter_start) {}
/**
 * 
 * @param lscode=0 by default
 */
void Minimizer::run_lbfgs(int lscode ) {
    char logfn[100];
    sprintf(logfn,"log-pid-%d",proc_id);
    //ofstream oferr(logfn,ofstream::out);
time_t start, end;
time(&start);
double max_weight=1000; // a ceiling of the weight

    /* Initialization */
    ostringstream oss;
    int N = x0.size();
    vector<vector<double> > x(2, vector<double>(N, 0.0)); /* iterates                    */
    vector<vector<double> > g(M, vector<double>(N, 0.0)); /* gradients                   */
    vector<vector<double> > y(M, vector<double>(N, 0.0)); /* y[k] = g[k+1] - g[k]        */
    vector<vector<double> > s(M, vector<double>(N, 0.0)); /* s[k] = x[k+1] - x[k]        */
    vector<double> d(N, 0.0); /* d[k] = -H[k] g[k]           */
    vector<double> rho(M, 0.0); /* rho[k] = 1 / (y[k]^T s[k])  */
    vector<double> a(M, 0.0);
    vector<double> b(M, 0.0);
    vector<double> h(N, 0.0); /* hessian diagonal            */

    int k = 0, iterations = iter_start;
    double dif, f_prev = 0, f_curr = ComputeFunction(iterations, x0);
if(proc_id==0){
    time(&end); dif = difftime(end, start);
    cerr << "ComputeFunction (" << iterations << ", " << f_curr << ") " << dif << " seconds." << endl;
    time(&start);
}
    x[0] = x0;

    int num_consec_small_steps = 0;
    bool progress_made = true;
    bool bCalculateGate = true;
    Assert(x0.size() != 0, "Empty initial vector specified.");

    while (true) {

        /* STEP ONE: Compute new gradient vector */
        ComputeGradient(iterations, g[k % M], x[k % 2], bCalculateGate, num_consec_small_steps);
        if(proc_id==0){
        time(&end);
        dif = difftime(end, start);
        cerr << "iteration-" << iterations << ": ComputeGradient " << dif << " seconds. ( obj=" << f_curr << " ) " << k << endl;
        time(&start);
        }
        //*
#ifdef _check_grad
        if (iterations==20 || iterations<3)
        {
                vector<vector<double> > aa (6, g[k%M]);
                for (int i = 5; i < 6; i++)
                  ApproximateGradient (g[k%M], x[k%2], pow(10.0,(double)-i));

                if (iterations==0)exit(0);
        }
#endif
        // */

        //if (use_preconditioner) ComputeHessianDiagonal (h, x[k%2]);

        /* STEP TWO: Check termination conditions */
        /*
        if (Norm (g[k%M]) < term_ratio * max (1.0, Norm (x[k%2]))){
          oss.str("");
          oss << "Termination condition: gradient vector small (" 
          << Norm (g[k%M]) / max (1.0, Norm (x[k%2])) << " < " << term_ratio << ")";
          Report (oss.str());
          break;
        }*/

        /* STEP THREE: Update iterates */
        if (k > 0) y[(k - 1 + M) % M] = g[k % M] - g[(k - 1 + M) % M];
        if (k > 0) s[(k - 1 + M) % M] = x[k % 2] - x[(k - 1 + 2) % 2];
        double ww1 = 0;
        if (k > 0) {
            ww1 = DotProduct(y[(k - 1 + M) % M], s[(k - 1 + M) % M]);
            if (ww1 > 1e-20)
                rho[(k - 1 + M) % M] = 1.0 / ww1;

        }

        // STEP FOUR: Compute new search direction //
        d = g[k % M];
        //if (proc_id==0){cerr << "&&k="<< k << ", d:";for (int i=0; i<15; i++) cerr << d[i]<<","; cerr << endl;}
        if ((k > 0 && ww1 <= 0) || k >= 1000) {
            // Delete the old gradient info //
            g[0] = g[k % M];
            x[0] = x[k % 2];
            k = 0;
        }
        //else 
        {
            // Use Nocedal's recursion to compute H_k g_k //
            for (int j = k - 1; j >= max(0, k - M); j--) {
                a[j % M] = DotProduct(s[j % M], d) * rho[j % M];
                d = d - y[j % M] * a[j % M];
            }

            // Apply preconditioner (inverse Hessian diagonal) //
            double ng = Norm(g[k % M]);
#ifdef _WARN           
            if (fabs(ng) < 1e-15)
                fprintf(stderr, "lbfgs: norm of g = %f\n", ng);
#endif            
            if (use_preconditioner) {
                d = d / h;
            } else {
                d = d * (1.0 / ng);
            }

            // Continue using recursion formula //
            for (int j = max(0, k - M); j <= k - 1; j++) {
                b[j % M] = DotProduct(y[j % M], d) * rho[j % M];
                d = d + s[j % M] * (a[j % M] - b[j % M]);
            }
        }
        //if (proc_id==0){cerr << "&& d:";for (int i=0; i<15; i++) cerr << d[i]<<","; cerr << endl;}
        d = d * -1.0;

        // STEP FIVE: Do line search, update f_curr, and take step
        f_prev = f_curr;
        double step = LineSearch(iterations, x[k % 2], d, g[k % M], f_curr, lscode);
        /*
                        for (int i=-20; i<20; i++){
                                double t_new1= i*step/10;
                                double f_new1 = ComputeFunction (1, x[k%2] + d * t_new1);
                                if (proc_id==0) cerr << "f_new1=" << f_new1 << "; t_new1=" << t_new1 << endl;
                        }
         */
        // Each step has 
        if(lscode!=0){
        double step_sum;
            MPI_Reduce(&step, &step_sum, 1, MPI_DOUBLE, MPI_SUM,0, MPI_COMM_WORLD);
            MPI_Bcast(&step_sum, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
            step=step_sum/num_procs;
        }
        if(method==methodtype::lbfgs){
            x[(k + 1) % 2] = x[k % 2] + d * step;
            // Reconsider
            for(int i=0;i<x[(k+1)%2].size();i++)
                if( x[(k+1)%2][i]>max_weight)
                    x[(k+1)%2][i]=max_weight;
            else if( x[(k+1)%2][i]< -max_weight)
                    x[(k+1)%2][i]=-max_weight;
                
        }
        else if(method==methodtype::annealing){
            
            x[(k + 1) % 2] = x[k % 2] + d * step;
            f_curr = ComputeFunction(iterations, x[(k + 1) % 2]);
            if(proc_id==0)printf("[] computerfunction %f\n",f_curr);
        }
        iterations++;
        k++;
if(proc_id==0){
            time(&end);
            dif = difftime(end, start);
            cerr << "LineSearch " << dif << " seconds.(" << f_curr << "), step=" << step << endl;
            time(&start);
}
        /* STEP SIX: Check termination conditions */
        Report(x[k % 2], iterations, f_curr, step);
        bCalculateGate = false;
        if (iterations >= max_iterations) {
            oss.str("");
            oss << "Termination: maximum number of iterations reached";
            Report(oss.str())                  ;
           // oferr<<oss<<endl;
            break;
        }

        if (f_curr == 0) {
            oss.str("");
            oss << "Termination: Zero reached.";
            Report(oss.str());
            //oferr<<oss<<endl;
            break;
        }
#ifdef _WARN
        if (fabs(f_prev) < 1e-15)
            fprintf(stderr, "lbfgs: f_prev = %f\n", f_prev);
#endif

        if (fabs(f_prev - f_curr) / f_prev < rt) num_consec_small_steps++;
        else {
            num_consec_small_steps = 0;
            progress_made = true;
        }
        //progress_made = true;  
        
        if (num_consec_small_steps == max_small_steps) {
             x[(k + 1) % 2] = x[k % 2] + d * (1.0/iterations);
            if(0)
            if (progress_made) {
                progress_made = false;
                num_consec_small_steps = 0;
                oss.str("");
                oss << "Restart: Too many consecutive small steps";
                Report(oss.str());
                //oferr<<oss<<endl;
                g[0] = g[k % M];
                x[0] = x[k % 2];
                rt = max(rt / 2, 1e-8);
                k = 0;
            } else {
                oss.str("");
                oss << "Termination: Too many consecutive small steps";
                Report(oss.str());
                //oferr<<oss<<endl;
                break;
            }
        }
if(proc_id==0){
            time(&end);
            double dif = difftime(end, start);
            cerr << "STEP SIX: Check termination conditions " << dif << " seconds. " << num_consec_small_steps << endl;
            time(&start);
}

    }

    x0 = x[k % 2];
    //oferr.close();
    
}



/* Standard linear algebra */
double DotProduct(const vector<double> &x, const vector<double> &y) {
    Assert(x.size() == y.size(), "Vector size mismatch.");
    double ret = 0;
    for (int i = 0; i < (int) x.size(); i++) ret += x[i] * y[i];
    return ret;
}

double Norm(const vector<double> &x) {
    return sqrt(DotProduct(x, x));
}

const vector<double> operator/(const vector<double> &x, const vector<double> &y) {
    vector<double> ret(x);
    for (int i = 0; i < (int) ret.size(); i++) ret[i] /= y[i];
    return ret;
}

const vector<double> operator+(const vector<double> &x, const vector<double> &y) {
    vector<double> ret(x);
    for (int i = 0; i < (int) ret.size(); i++) ret[i] += y[i];
    return ret;
}

const vector<double> operator-(const vector<double> &x, const vector<double> &y) {
    vector<double> ret(x);
    for (int i = 0; i < (int) ret.size(); i++) ret[i] -= y[i];
    return ret;
}

const vector<double> &operator+=(vector<double> &x, double c) {
    for (int i = 0; i < (int) x.size(); i++) x[i] += c;
    return x;
}

const vector<double> operator*(const vector<double> &x, double c) {
    vector<double> ret(x);
    for (int i = 0; i < (int) ret.size(); i++) ret[i] *= c;
    return ret;
}
