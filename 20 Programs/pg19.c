/*
Write a C program to find the square of sum of two numbers.

Formula: a^2 + 2ab + b^2

Test Cases :
Input = 2 3
output = 25

Input = 3 1
output = 16

Input Format : Read the input as two integers.
Output Format : The output is the square of sum of two numbers.
*/
// Start Wriring your program from here..!!

#include<stdio.h>

int main()
{
    int a,b,ab2;
    scanf("%d %d",&a,&b);
    ab2=(a*a)+(2*a*b)+(b*b);
    printf("%d",ab2);
    return 0;
}