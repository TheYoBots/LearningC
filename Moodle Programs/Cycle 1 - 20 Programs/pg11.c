/*
Write a C program to find the volume of a cube.

Volume: S*S*S

Test Cases :
Input = 5
output = 125

Input = 3
output = 27

Input Format : Read the side as an integer.
Output Format : The output is the volume of the cube which is an integer.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int s,vol;
    scanf("%d",&s);
    vol=s*s*s;
    printf("%d",vol);
    return 0;
}