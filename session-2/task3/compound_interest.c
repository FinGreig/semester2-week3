
/*
 * Compute the final result of applying compound interest 
 * to a given deposit with a set interest rate and term.
 * We will assume interest is applied at the end of each year.
 */

#include <stdio.h>
#include <math.h>

int main( void ) {

    float deposit = 120.0;  // initial deposit
    float rate = 0.05;      // interest rate
    int term = 5;           // number of years
    int instances_p_y = 1;
    float final_amount;
    float gain;

    /*
     * Implement the formula for compound interest.
     * Print out the final amount and the gain compared to the initial deposit.
     */
    
     final_amount = (deposit * pow(pow(1+rate,term),instances_p_y));
     gain = final_amount - deposit;

     printf("Your balance after a term of %d years is £%f\n",term,final_amount);
     printf("Your investment gained £%f\n",gain);

    return 0;
}
