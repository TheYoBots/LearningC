/*Write a c program to implement pre-processor undef
Note: define the macro as GRIET and assign value to 500.
using undef macro, remove the value and redefine it to 100
Test Cases :

input=                                                                               
output=value of GRIET=100  


Input Format: no input
Output Format :redefined value of macro using undef as given in the test case.

*/
// Start Writing your program from here..!!

#include<stdio.h>

#define GRIET 500
#undef GRIET
#define GRIET 100

int main()
{
    printf("value of GRIET=%d",GRIET);
    return 0;
}