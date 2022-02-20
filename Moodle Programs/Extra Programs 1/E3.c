/*
Write  a C program to find the smallest of the three numbers.
Take three integers and find the smallest of the three



Test Cases :
Input = 10 20 30
output = 10

Input = 23 45 10
output = 10

Input Format: Read the inputs as three integers.
Output Format : The output is smallest number

*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a,b,c,small;
    scanf("%d %d %d",&a,&b,&c);
    small=a<b?(a<c?a:c):(b<c?b:c);
    printf("%d",small);
    return 0;
}