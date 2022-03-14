// Pre-processor directives
// #ifndef

#include<stdio.h>

#ifndef X
  #undef X
  #define X 20
#else
  #define X 10
#endif

void main()
{
    printf("X = %d",X);
}
