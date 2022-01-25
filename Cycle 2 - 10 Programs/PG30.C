/*
Write a C program to implement Special Operator - COMMA.
Program to add two numbers using COMMA operator.

Test this statement : c= (a=4,b=8,a+b);
Also test this statement : c= a=4,b=8,a+b;

output =
12
4

Input Format : None.
Output Format : The two results of the test expressions.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a,b,c,d;
    c=(a=4,b=8,a+b);
    d=a=4,b=8,a+b;
    printf("%d \n%d",c,d);
    return 0;
}