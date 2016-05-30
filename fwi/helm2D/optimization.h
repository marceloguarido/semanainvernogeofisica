/* This file is automatically generated. DO NOT EDIT! */

#ifndef _optimization_h
#define _optimization_h


/* subroutines for rtm */
void genadjsrc_rtm(sf_complex ***obs,
                   sf_complex ***adj,
                   float **recloc,
                   const int n1,
                   const int n2,
                   const int ns);
/*< generate adjoint source for rtm >*/


/* subroutines for fwi */
float genadjsrc_fwi(sf_complex ***obs,
                    sf_complex ***syn,
                    sf_complex ***adj,
                    float **recloc,
                    const int n1,
                    const int n2,
                    const int ns);
/*< generate adjoint source for fwi >*/


float calc_misfit(sf_complex ***obs,
                  sf_complex ***syn,
                  float **recloc,
                  const int n1,
                  const int n2,
                  const int ns);
/*< calculate misfit value >*/


void direction_sd(float **g,
                  float **d,
                  const int n1,
                  const int n2);
/*< calculate steepest descent direction >*/


float direction_cg_polak(float **g0,
                         float **d0,
                         float **g1,
                         float **d1,
                         const int n1,
                         const int n2);
/*< calculate conjugate gradient direction >*/


void update_model_fwi(float **m0,
                      float **m1,
                      float **d,
                      const float alpha,
                      const int n1,
                      const int n2);
/*< update model for fwi, nonlinear >*/


/* subroutines for lsm */
float calc_alpha(float **g,
                 sf_complex ****Fg,
                 float **recloc,
                 const int n1,
                 const int n2,
                 const int ns,
                 const int nw);
/*< calculate alpha value for linear inversion >*/


void update_model_lsm(float **m0,
                      float **m1,
                      float **d,
                      const float alpha,
                      const int n1,
                      const int n2);
/*< update model for lsm, linear >*/


void update_residual(sf_complex ****r0,
                     sf_complex ****r1,
                     sf_complex ****Fg,
                     float **recloc,
                     const float alpha,
                     const int n1,
                     const int n2,
                     const int ns,
                     const int nw);
/*< update data residual >*/


float direction_cg_fletcher(float **g0,
                            float **d0,
                            float **g1,
                            float **d1,
                            const int n1,
                            const int n2);
/*< calculate conjugate gradient direction >*/

#endif
