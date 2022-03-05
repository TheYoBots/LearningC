// Passing 2D Arrays - Individual Element
// call by reference

#include<stdio.h>

void display(int x);

int main()
{
    int a[2][3]={10,20,30,40,50,60};
    printf("Passing individual element of 2D arrays to a function");
    display(a[1][2]);
    display(a[0][0]);
    display(a[1][1]);
    return 0;
}

void display(int x)
{
    printf("\nValue = %d",x);
}