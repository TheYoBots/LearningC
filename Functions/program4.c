// Sum of 2 numbers using functions
// Category-1: without arguments and without return values

#include<stdio.h>

void sum();

int main()
{
    sum();
}

void sum ()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf ("%d %d", &a, &b);
    c=a+b;
    printf("Sum = %d",c);
}