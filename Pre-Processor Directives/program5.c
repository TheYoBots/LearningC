// Pre-processor directives
// #ifdef

#include<stdio.h>

#define X 10
#ifdef X
  #undef X
  #define X 20
#else
  #define X 10
#endif

void main()
{
    printf("X = %d",X);
}
