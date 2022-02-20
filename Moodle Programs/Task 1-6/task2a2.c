/*
2A2)Write a C program to swap two numbers Without using third variable
Test Cases :
Input = 2 5
output = 5 2

Input = -5 -10
output = -10 -5

Input = -2 10
output = 10 -2

Input = 23 -16
output = -16 23

Input Format: Read the inputs as two integers.
Output Format : The output is displaying given numbers by swapping 
// Start Writing your program from here..!!*/

#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
    return 0;
}