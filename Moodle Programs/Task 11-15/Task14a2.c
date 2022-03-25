/*Write a c program to implement pre-processor ifdef
Note: use macro name as GRIET and assign the value 500

Test Cases :

input= no input                                                                               
output=
value of GRIET=500  


Input Format: no input
Output Format :print the macro value if it is defined.
*/
// Start Writing your program from here..!!

#include<stdio.h>

#ifdef GRIET
  #undef GRIET
  #define GRIET 0
#else
  #define GRIET 500
#endif

int main()
{
    printf("value of GRIET=%d",GRIET);
    return 0;
}