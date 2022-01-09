/*
Write a C program to find the bigger of two numbers.

Test Cases :
Input = 2 3
output = 3 is big

Input = 5 3
output = 5 is big

Input Format : Read the input as two integers.
Output Format : The output is the biggest of two numbers.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a>b?a:b;
    printf("%d is big",c);
    //a>b?printf("%d is big,a"):
    //printf("%d is big",b);
    return 0;
}