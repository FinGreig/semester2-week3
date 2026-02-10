
/*
 * Use the sizeof() operator to examine memory use 
 * of primitive types char,int,float
 */

#include <stdio.h>

int main( void ) {

    char testChar;
    int testInt;
    short int testShortInt;
    long int testLongInt;
    double testDouble;
    float testFloat;

    printf("Char size is %ld bytes\n",sizeof(testChar));
    printf("Int size is %ld bytes\n",sizeof(testInt));
    printf("Short int size is %ld bytes\n",sizeof(testShortInt));
    printf("Long int size is %ld bytes\n",sizeof(testLongInt));
    printf("Double size is %ld bytes\n",sizeof(testDouble));
    printf("Float size is %ld bytes\n",sizeof(testFloat));

    return 0;
}
