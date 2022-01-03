/*
Write a C program to find (a+b)^3

Test Cases :
Input = 2 3
output = 125

Input = 10 20
output = 27000

Input Format : Read the value of a,b.
Output Format : The output is (a+b)^3.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a,b,ab3;
    scanf("%d %d",&a,&b);
    ab3=(a+b)*(a+b)*(a+b);
    printf("%d",ab3);
    return 0;
}