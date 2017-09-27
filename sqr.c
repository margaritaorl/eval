#include "sqr.h"
#include <math.h>

int sqr(double a,  double b,  double c, double *i, double *o){
	if ((a == 0) || ((a == 0) && (b == 0)) || ((a == 0) && (b == 0) && (c == 0)))
		return -1;		
		
	double d = b * b - 4 * a * c;
	
    if (d == 0) {
    	*i = -b / (2 * a);
    	return  1; 
	}
		
    if (d > 0) {
    	*i = (-b - sqrt(d)) / 2 * a;
    	*o = (-b + sqrt(d)) / 2 * a;	
   		return 2;
    }

    if (d < 0)
        return 0;
}
