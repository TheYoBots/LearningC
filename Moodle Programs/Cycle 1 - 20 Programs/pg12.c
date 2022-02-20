/*
Write a C program to find the volume of a cone.

Test Cases :
Input = 3 6
output = 56.52

Input = 5 12
output = 314.00

Input Format : Read the radius and height of the cone.
Output Format : The output is the volume.
Note: take pi value as 3.14, use %.2f for displaying 2 places after decimal.
*/
// Start Writing your program from here..!!

#include<stdio.h>

#define PI 3.14

int main()
{
    int r,h;
    float vol;
    scanf("%d %d",&r,&h);
    vol=(PI*r*r*h)/3;
    printf("%.2f",vol);
    return 0;
}