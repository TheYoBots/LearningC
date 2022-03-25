/*Write a c program to implement pre-processor ifndef
Note: use macro name as GRIET and assign the value 800

Test Cases :

input= no input                                                                               
output=
value of GRIET=800 


Input Format: no input
Output Format :print the macro value if it is not defined 

*/
// Start Writing your program from here..!!

#include<stdio.h>

#ifndef GRIET
  #define GRIET 800
#endif

int main()
{
    printf("value of GRIET=%d",GRIET);
    return 0;
}