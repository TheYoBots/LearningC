/*
Write a C program to add two integer numbers.

Test Data and Expected Output :

Input : 2 5
output : 7

Input : 10 50
output : 60

Input : 2 -5
output : -3

*/
// start writing your program from here ..!!

#include<stdio.h>

int main()
{
    int a,b,s;
    scanf("%d %d",&a,&b);
    s=a+b;
    printf("%d",s);
    return 0;
}