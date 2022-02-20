/*
Write a C program to find the sum of two float numbers upon 4 decimals.

Test Cases :
Input = 2.1 3.2
output = 5.3000

Input = 3.7 1.2
output = 4.9000

Input Format : Read the input as two floats.
Output Format : The output is the sum of the given float numbers till 4 decimals.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a,b,s;
    scanf("%f %f",&a,&b);
    s=a+b;
    printf("%.4f",s);
    return 0;
}