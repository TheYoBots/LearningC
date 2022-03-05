// C program to pass all elements of a 1D Array to a function

#include<stdio.h>

void display(int x);

int main()
{
    int a[5]={10,20,30,40,50};
    int i;
    printf("Passing all elements of a 1D Array to a function");
    for(i=0;i<5;i++)
    {
        display(a[i]);
    }
    return 0;
}

void display(int x)
{
    printf("\nPassed Value = %d",x);
}