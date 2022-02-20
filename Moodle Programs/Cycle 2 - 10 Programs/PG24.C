/*
Write a C program to implement Logical Operators.
Take two integers a,b and find the truthness of the following expressions.

Logical AND - a>5 && b!=3
Logical OR  - a==7 || b<=10
Logical NOT - !(a==b)
Logicla NOT - !(1)
Logical NOT - !(0)

Test Cases:
Input = 10 20
output = 1 0 1 1 0

Input = 3 5
output = 0 1 1 1 0

Input = 2 2
output = 0 1 0 1 0

Input Format : Read the inputs as two integers into a,b.
Output Format : The output is either 0 Or 1 in order asked seperated by a space.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d %d",&a,&b);
    c=a>5&&b!=3;
    d=a==7||b<=10;
    e=!(a==b);
    f=!(0);
    g=!(1);
    printf("%d %d %d %d %d",c,d,e,f,g);
    return 0;
}