/*
Write a C program to implement Special Operator - COMMA.
Program to add two numbers using COMMA operator.

Test this statement : c= (a=10,b=8,a+b);
Also test this statement : c= a=10,b=8,a+b;

output =
18
10

Input Format : None.
Output Format : The two results of the test expressions.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("%d \n%d",c= (a=10,b=8,a+b),c= a=10,b=8,a+b);
    return 0;
}