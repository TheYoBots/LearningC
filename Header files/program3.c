// Factorial and Sum of 2 numbers using header file.

#include<stdio.h>
#include"program3.h"

int main()
{
    int x,y,s;
    long res;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    s=sum(x,y);
    printf("Sum = %d",s);
    res=fact(x);
    printf("\nFactorial of %d = %ld",x,res);
    return 0;
}