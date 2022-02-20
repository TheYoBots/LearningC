/*
Write a C program to find the distance traversed by an object with an initial velocity 'u' and moving with constant acceleration 'a' in time period 't'.

Test Cases :
Input = 3 10 5
output = 140

Input = 5 12 5
output = 175

Input Format : Read the initial velocity, acceleration and time period.
Output Format : The output is the distance traversed.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int u,a,t,S;
    scanf("%d %d %d",&u,&a,&t);
    S=(u*t)+((a*t*t)/2);
    printf("%d",S);
    return 0;
}