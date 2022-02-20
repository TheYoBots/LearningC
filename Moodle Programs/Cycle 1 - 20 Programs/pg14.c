/*
Write a C program to find the summation of n numbers.

Test Cases :
Input = 113
output = 6441

Input = 100
output = 5050

Input Format : Read the value for n.
Output Format : The output is summation of n numbers.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int n,sn;
    scanf("%d",&n);
    sn=(n*(n+1))/2;
    printf("%d",sn);
    return 0;
}