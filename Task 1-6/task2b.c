/*
2B)Write a c program to add two numbers without using arithmetic operators in c.
Test Cases :
Input = 2 5
output = 7

Input = -5 -10
output = -15

Input = -2 10
output = 8


Input Format: Read the inputs as two integers.
Output Format : The output is displaying sum of two numbers
// Start Writing your program from here..!!*/

#include<stdio.h>

int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    if(b>=0)
        for(i=1; i<=b; i++)
        {
            a++;
        }
    else
        for(i=0; i>b; i--)
        {
            a--;
        }
    printf("%d",a);
    return 0;
}