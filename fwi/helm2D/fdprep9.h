/* This file is automatically generated. DO NOT EDIT! */

#ifndef _fdprep9_h
#define _fdprep9_h


#include <umfpack.h>


#ifndef SuiteSparse_long 
#ifdef UF_long
#define SuiteSparse_long UF_long
#endif
#endif


void fdprep9(const double omega,
	     const int n1, const int n2,
	     const float d1, const float d2,
	     float **v,
	     const int npml,
	     const int pad1, const int pad2,
	     SuiteSparse_long *Ti, SuiteSparse_long *Tj,
	     double* Tx, double *Tz);
/*< discretization >*/


void fdpad9(const int npml,
	    const int pad1, const int pad2,
	    sf_complex **dat,
	    double *Bx, double *Bz);
/*< pad >*/


void fdcut9(const int npml,
	    const int pad1, const int pad2,
	    sf_complex **dat,
	    double *Xx, double *Xz);
/*< cut >*/

#endif
