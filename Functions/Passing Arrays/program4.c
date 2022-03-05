// C program to pass all elements of a 1D Array to a function
// method 2
// Call by Reference

#include<stdio.h>

void display(int x[],int n);

int main()
{
    int a[5]={10,20,30,40,50};
    printf("Passing all elements of a 1D Array to a function");
    display(a,5); // To pass an entire array it's enough to pass arary name and its size
    return 0;
}

void display(int x[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nx[%d] = %d",i,x[i]);
    }
}