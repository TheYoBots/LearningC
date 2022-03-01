// Swapping 2 numbers using functions
// Call by Reference

#include<stdio.h>

void swap(int *p, int *q);

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping: a=%d b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping: a=%d b=%d",a,b);
    return 0;
}

void swap(int *p, int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}