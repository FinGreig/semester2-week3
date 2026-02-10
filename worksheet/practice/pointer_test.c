
#include <stdio.h>

/*
 * Exaple using pointers and dereferencing
 */

int main( void ) {

    float f = 2.3;
    int k = -2;

    float *pf; // assign the pointer so that it can access the value of f
    int *pk; // assign the pointer so that is can access the value of k

    pf = &f;
    pk = &k;

    float sum = f+k; // compute the sum of the primitive values with appropriate casting

    printf("%f\n", sum );

    sum = *pk + *pf; // compute the sum via the pointers, using appropriate casting
    
    printf("%f\n", sum );  // implement this using the pointers to print the same value

    return 0;
}