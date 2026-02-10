#include <stdio.h>

/*
 * Example using different variable types
 */

int main( void ) {

    // define variables for the following data and print something useful about them in each case
    // choose appropriate variable names and data types considering also the range of values that are possible

    // 1. the hour hand of a clock
    float hour = 0.0;
    printf("Current hour: %f\n",hour);

    // 2. the total population of a country, eg. China has approximately 1.4billion people
    int pop = 0;
    printf("Population: %d\n",pop);

    // 3. the number of minutes between a given date/time and the current date/time, either earlier (negative) or in the future (positive)
    int time_between = 21;
    printf("Time between dates: %d\n",time_between);

    // 4. the mean temperature in Leeds over a one-year period
    float mean_temp = 7.9;
    printf("Mean temperature over 1 year: %f degrees C\n",mean_temp);

    // 5. a precise GPS location to within 10cm distance
    float latitude = 0.0;
    float longitude = 0.0;
    printf("Current GPS position: (%f,%f)\n",latitude,longitude);

    // 6. a calculation of pi to 12 decimal places 
    float pi = 3.141592653589;
    printf("Pi: %f\n",pi);

    return 0;
}