#ifndef	CHISQ_H
#define CHISQ_H

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

double pchisq(double z, int df);
double qchisq(double z, int df);

double tchisqtest(double *table, int nrow, int ncol);

#ifdef __cplusplus
	}
#endif

#endif
