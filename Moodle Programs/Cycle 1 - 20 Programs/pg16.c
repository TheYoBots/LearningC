/*
Write a C program to find the sum of cubes of n natural numbers.

Formula: (n^2)*((n+1)^2)/4


Test Cases :
Input = 2
output = 9

Input = 3
output = 36

Input Format : Read the input as an integer.
Output Format : The output is the sum of cubes of the natural numbers till the given number.
*/
// Start Writing the program from here..!!

#include<stdio.h>

int main()
{
    int n,sn3;
    scanf("%d",&n);
    sn3=(n*n*(n+1)*(n+1))/4;
    printf("%d",sn3);
    return 0;
}