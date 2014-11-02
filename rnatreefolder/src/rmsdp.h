#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;





void RMSD(double **ref_xlist,
               double** mov_xlist, 
               int n_list,
               double* rmsd);
               
void RMSDPoint(double **ref_xlist,
               double** mov_xlist, 
               int n_list,
               double* rmsd, int position, double* distance);

void RMSDdetail(double** ref_xlist,
               double** mov_xlist, 
               int n_list,
		double* rmsd,double U0[3][3],double mov_to_ref0[3]);

/*
 * calculate_rotation_rmsd()
 *
 *   given two lists of x,y,z coordinates, constructs
 *    - mov_com: the centre of mass of the mov list
 *    - mov_to_ref: vector between the com of mov and ref
 *    - U: the rotation matrix for least-squares, usage of
 *         of the matrix U[3][3] is
 *           for (i=0; i<3; i++)
 *           {
 *             rotated_v[i] = 0.0; 
 *             for (j=0; j<3; j++)
 *               rotated_v[i] += U[i][j] * v[j];
 *           }
 *    - rmsd: measures similarity between the vectors
 */
void calculate_rotation_rmsd(double** ref_xlist,
                             double** mov_xlist, 
                             int n_list,
                             double mov_com[3],
                             double mov_to_ref[3],
                             double U[3][3],
                             double* rmsd);
void calculate_rotation_rmsdPoint(double** ref_xlist,
                             double** mov_xlist, 
                             int n_list,
                             double mov_com[3],
                             double mov_to_ref[3],
                             double U[3][3],
                             double* rmsd, int position, double* distance);
/*
 * fast_rmsd()
 *
 * Fast calculation of rmsd w/o calculating a rotation matrix,
 * adapted from the BTK by Chris Saunders 11/2002. 
 */
void fast_rmsd(double** ref_xlist,
               double** mov_xlist, 
               int n_list,
               double* rmsd); 

