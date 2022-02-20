/*
Write  a C program to find the biggest of the three numbers.
Take three integers and find the biggest of the three


Test Cases :
Input = 10 20 30
output = 30 

Input = 23 45 10
output = 45

Input Format: Read the inputs as three integers.
Output Format : The output is the biggest number.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a,b,c,big;
    scanf("%d %d %d",&a,&b,&c);
    big=a>b?(a>c?a:c):(b>c?b:c);
    printf("%d",big);
    return 0;
}