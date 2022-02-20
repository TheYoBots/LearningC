/*
Write a C program to implement Assignment Operators.
Take two integers and find the following.
a+=b;
a-=5;
b*=3;
a/=2;
b%=4;

Test Cases :
Input = 10 20
output = 30 25 60 12 0

Input = 2 4
output = 6 1 12 0 0

Input Format : Read two integers a and b as input.
Output Format : Display ten results of ten operations as mentioned in order each one seperated by a space.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d %d",&a,&b);
    c=a+=b;
    d=a-=5;
    e=b*=3;
    f=a/=2;
    g=b%=4;
    printf("%d %d %d %d %d",c,d,e,f,g);
    return 0;
}