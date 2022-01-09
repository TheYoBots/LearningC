/*
Write a C program to implement Arithmetic Operators.
Take two integers and find their sum, difference, product, quotient and remainder.

Test Cases :
Input = 2 3
output = 5 -1 6 0 2

Input = 10 5
output = 15 5 50 2 0

Input Format : Read the inputs as two integers.
Output Format : The output is sum, difference, product, quotient and remainder seperated by a space.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d %d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    printf("%d %d %d %d %d",c,d,e,f,g);
    return 0;
}