/*
Write a C program to find area and perimeter of a right angled triangle.

Test Cases :
Input = 3 4 5
output = 6 12

Input = 5 12 13
output = 30 30

Input Format : Read the sides of the right angled triangle as three inputs as integers in ascending order(pythagorean thriples in ascending order).
Output Format : The output is two values area and perimeter seperated by a space.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int b,h,hy,a,p;
    scanf("%d %d %d",&b,&h,&hy);
    a=(b*h)/2;
    p=b+h+hy;
    printf("%d %d",a,p);
    return 0;
}