
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Finley Greig
 * ID: 201919928
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 36250;
   float NIrate = .08;
   float TaxRate = .15;

    // calculate the deductions and final take-home salary
   float NIdeduct;
   NIdeduct = salary*NIrate;
   
   float remaining_salary;
   remaining_salary = salary - NIdeduct;

   float TaxDeduct;
   TaxDeduct = (remaining_salary-12500)*TaxRate;

   remaining_salary = remaining_salary - TaxDeduct;

    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    printf("Salary £%.2f\n",salary);
    //printf("NI contribution £...",var_name);
    printf("NI contribution £%.2f\n",NIdeduct);
    //printf("Tax contribution £...",var_name);
    printf("Tax contribution £%.2f\n",TaxDeduct);
    //printf("Take home salary £...",var_name);
    printf("Take home salary £%.2f\n",remaining_salary);

    return 0;
 }