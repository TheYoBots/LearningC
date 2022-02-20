/*
C program to swap two numbers.
ii. Without using a third variable
*/

#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter two numbers - a,b : ");
    scanf("%d %d",&a,&b);
    printf("\nBefore swaping a= %d and b = %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nWithout using a third variable after swaping a = %d and b = %d",a,b);
    return 0;
}