// Parameterised Macros

#include<stdio.h>

#define P(r) r*r

void main()
{
    printf("P(6) = %d",P(6)); // o/p = 36
    printf("\nP(3+3) = %d",P(3+3)); // o/p = 15
}