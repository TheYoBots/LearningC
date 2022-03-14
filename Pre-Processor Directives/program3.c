// Pre-processor directives
// #if , #else , #elif/#else if , #endif

#include<stdio.h>

#define X 10
#if X==10
  #define Y 1
#elif X==20 // #else if can be used instead of #elif
  #define Y 2
#else
  #define Y 0
#endif

void main()
{
    printf("X = %d",X);
    printf("\nY = %d",Y);
}
