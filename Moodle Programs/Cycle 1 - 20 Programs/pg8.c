/*
Write a C program to find lsa, tsa and volume of a cuboid.

Test Cases :
Input = 5 2 11
output = 154 174 110

Input = 5 3 4
output = 64 94 60

Input Format : Read length, breadth, height from the user in integer format.
Output Format : Print lsa, tsa and volume of the cuboid respectively.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int l,b,h,lsa,tsa,vol;
    scanf("%d %d %d",&l,&b,&h);
    lsa=2*((h*l)+(h*b));
    tsa=2*((l*b)+(b*h)+(h*l));
    vol=l*b*h;
    printf("%d %d %d",lsa,tsa,vol);
    return 0;
}