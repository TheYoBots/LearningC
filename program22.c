/*
C program to swap two numbers.
iii. Using bitwise operators
*/

#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter two numbers - a,b : ");
    scanf("%d %d",&a,&b);
    printf("\nBefore swaping a= %d and b = %d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nUsing bitwise operators after swaping a = %d and b = %d",a,b);
    return 0;
}