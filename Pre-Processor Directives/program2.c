// Pre-processor directives
// #undef - to undefine

#include<stdio.h>

#define X 10

void main()
{
    printf("X = %d",X);
    #undef X
    #define X 20
    printf("\nX = %d",X);
}
