/*
Write a C program to find the sum of squares of n natural numbers.

Formula: n(n+1)(2n+1)/6


Test Cases :
Input = 2
output = 5

Input = 6
output = 91

Input Format : Read the input as an integer.
Output Format : The output is the sum of squares of the natural numbers till the given number.
*/
// Start writing your program from here..!!

#include<stdio.h>

int main()
{
    int n,sn2;
    scanf("%d",&n);
    sn2=(n*(n+1)*((2*n)+1))/6;
    printf("%d",sn2);
    return 0;
}