/*
Write a C program to implement Relational Operators.
Take two integers and find their relations.

In the order (greater than, greater than or equal to, less than, less than or equal to, equal to, not equal to)

Test Cases :
Input = 10 20
output = 0 0 1 1 0 1

Input = 23 45
output = 0 0 1 1 0 1

Input Format : Read the inputs as two integers.
Output Format : The output is either 0 or 1 seperated by a space.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d %d",&a,&b);
    c=a>b;
    d=a>=b;
    e=a<b;
    f=a<=b;
    g=a==b;
    h=a!=b;
    printf("%d %d %d %d %d %d",c,d,e,f,g,h);
    return 0;
}