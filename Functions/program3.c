// Sum of 2 numbers using functions
// Category-2: without arguments and with return values

#include<stdio.h>

int sum();

int main()
{
    int c;
    c=sum();
    printf("Sum = %d",c);
}

int sum()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf ("%d %d",&a,&b);
    c=a+b;
    return c;
}