/*
Write a C program to find area and perimeter of a rectangle.

Test Cases :
Input = 2 3
output = 6 10

Input = 6 8
output = 48 28

Input Format : Read length, breadth from the user in integer format.
Output Format : The output has two values area and perimeter of a rectangle seperated by a space.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int l,b,a,p;
    scanf("%d %d",&l,&b);
    a=l*b;
    p=2*(l+b);
    printf("%d %d",a,p);
    return 0;
}