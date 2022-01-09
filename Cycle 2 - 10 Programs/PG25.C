/*
Write a C program to implement conditional Operators.
Take two integers and find Largest of two numbers.

Test Cases :
Input = 10 20
output = "Big = 20"

Input = 23 45
output = "Big = 45"

Input = -76 8
output = "Big = 8"

Input Format : Read two integers as input.
Output Format : Display Big = Value of the bigger number.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a>b?a:b;
    printf("Big = %d",c);
    //a>b?printf("Big = %d",a):
    //printf("Big = %d",b);
    return 0;
}