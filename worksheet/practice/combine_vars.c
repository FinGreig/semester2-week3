#include <stdio.h>

/*
 * Example using different variable types
 * We should use casts to properly combine values and get accurate results
 */

int main( void ) {

    double d = 1.0/3.0;
    float f = 2.3;
    int k = -7;

    // you can verify sums by comparing to a calculator

    // compute and print d/k as a double to 16 d.p.
    double dOverK = d/k;
    printf("d/k = %lf\n",dOverK);

    // compute and print f-d as a double to 16 d.p.
    double Dfsubd = f-d;
    printf("f-d (double) = %lf\n",Dfsubd);

    // compute and print f-d as a float to 16 d.p.
    float Ffsubd = f-d;
    printf("f-d (float) = %f\n",Ffsubd);

    // compute and print k+d as a double to 16 d.p.
    double ksumd = k+d;
    printf("k+d = %f\n",ksumd);

    return 0;
}