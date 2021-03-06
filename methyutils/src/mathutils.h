#ifndef	MATHUTILS_H
#define MATHUTILS_H

#ifndef ITMAX 
	#define ITMAX 500 /* Maximum allowed number of iterations. */
#endif

#ifndef EPS
	#define EPS 1.0e-9 /* Relative accuracy. */
#endif

#ifndef FPMIN
	#define FPMIN 1.0e-30 /* Number near the smallest representable floating-point number.*/
#endif


#ifdef __cplusplus
	extern "C" {
#endif


double gammln(double a);

void gcf(double *gammcf, double a, double x, double *gln);
void gser(double *gamser, double a, double x, double *gln);

double gammp(double a, double x);
double gammq(double a, double x);

#ifdef __cplusplus
	}
#endif

#endif
