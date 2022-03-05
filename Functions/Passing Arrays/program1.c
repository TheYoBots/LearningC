// C program to pass individual element of a 1D Array to a function

#include<stdio.h>

void display(int x);

int main()
{
    int a[5]={10,20,30,40,50};
    printf("Passing individual element of a 1D Array to a function");
    display(a[2]); // to pass third element of array => a[2]
    return 0;
}

void display(int x)
{
    printf("\nPassed Value = %d",x);
}