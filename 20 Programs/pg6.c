/*
Write a C program to find area and perimeter of a circle

Test Cases :
Input = 4
output = 50.24 25.12

Input = 6
output = 113.04 37.68

Input Format : Read one input as integer.
Output Format : The output is two values area and perimeter seperated by a space.
Note: take pi value as 3.14, use %.2f for displaying two digits after decimal.
*/
// Start Writing your program from here..!!

#include<stdio.h>

#define PI 3.14

int main()
{
    int r;
    float a,p;
    scanf("%d",&r);
    a=PI*r*r;
    p=2*PI*r;
    printf("%.2f %.2f",a,p);
    return 0;
}