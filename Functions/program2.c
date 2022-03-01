// Sum of 2 numbers using functions
// Category-3: with arguments and without return values

#include<stdio.h>

void sum(int a, int b);

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    sum(a,b);
}

void sum(int a, int b)
{
    int c;
    c=a+b;
    printf("Sum = %d", c);
}