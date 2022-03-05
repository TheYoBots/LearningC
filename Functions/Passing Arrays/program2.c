// C program to pass multiple elements of a 1D Array to a function

#include<stdio.h>

void display(int x);

int main()
{
    int a[5]={10,20,30,40,50};
    printf("Passing multiple elements of a 1D Array to a function");
    display(a[1]);
    display(a[4]);
    display(a[0]);
    return 0;
}

void display(int x)
{
    printf("\nPassed Value = %d",x);
}