/*Write a c program to implement pre-processor define

Test Cases :

input=7                                                                               
output=Area of Circle=167.188004   


Input Format: Read radius value of circle
Output Format :Area of circle

*/
// Start Writing your program from here..!!

#include<stdio.h>

#define PI 3.412 // Value of PI is wrong it should be 3.142

int main()
{
    int r;
    float a;
    scanf("%d",&r);
    a=PI*r*r;
    printf("Area of Circle=%f",a);
    return 0;
}