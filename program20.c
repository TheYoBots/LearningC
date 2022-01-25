/*
C program to swap two numbers.
i. Using a third variable
*/

#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter two numbers - a,b : ");
    scanf("%d %d",&a,&b);
    printf("\nBefore swaping a= %d and b = %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nUsing a third variable after swaping a = %d and b = %d",a,b);
    return 0;
}