/*
Write a C program to implement Special Operators.
Determine the size of the operator using size of operator.

Test Cases :

output = 4 1 4 8 16 8

Input Format : No input
Output Format : The sizes of the datatypes - int char float double long double and long int seperated by a space.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    printf("%d %d %d %d %d %d",sizeof(int),sizeof(char),sizeof(float),sizeof(double),sizeof(long double),sizeof(long));
    return 0;
}