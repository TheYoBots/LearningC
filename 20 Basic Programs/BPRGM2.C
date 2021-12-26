// Add two integers

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,sum;
    clrscr();
    printf("Enter first integer: ");
    scanf("%d",&a);
    printf("Enter second integer: ");
    scanf("%d",&b);
    sum=a+b;
    printf("Sum = %d",sum);
    getch();
}