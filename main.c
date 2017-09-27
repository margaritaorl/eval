#include <stdio.h>
#include <math.h>
#include "sqr.h"

int main(){
    double a, b, c;

    printf("wedite koeffizient 1\n");
    scanf("%lf", &a);

    printf("wedite koeffizient 2\n");
    scanf("%lf", &b);

    printf("wedite koeffizient 3\n");
    scanf("%lf", &c);
    
    double x1, x2;
	
	int result = sqr(a, b, c, &x1, &x2);

    printf ("Result: %lf\n", result);
    printf ("x1 = %lf\n", x1);
	printf ("x2 = %lf\n", x2);
	
	return 0;
	
}
