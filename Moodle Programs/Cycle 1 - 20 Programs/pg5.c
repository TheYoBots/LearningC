/*
Write a C program to find area and perimeter of a square.

Test Cases :
Input : 4
output : 16 16

Input : 6
output : 36 24

Input Format : Read one input as integer.
Output Format : The output is two values area and perimeter seperated by a space.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int l,a,p;
    scanf("%d",&l);
    a=l*l;
    p=4*l;
    printf("%d %d",a,p);
}