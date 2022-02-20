/*
Write a C program to find the lateral surface area, total surface area and volume of a cube.

LSA: 4*(s^2)
TSA: 6*(s^2)
Volume: s^3

Test Cases :
Input = 3
outpur = 36 54 27

Input = 5
output = 100 150 125

Input Format : Read the side of the cube as an input.
Output Format : The output is three values: LSA, TSA, Volume seperated by space.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int s,lsa,tsa,vol;
    scanf("%d",&s);
    lsa=4*s*s;
    tsa=6*s*s;
    vol=s*s*s;
    printf("%d %d %d",lsa,tsa,vol);
    return 0;
}