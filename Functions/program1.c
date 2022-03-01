// Sum of 2 numbers using functions
// Category-4: with arguments and with return values

#include<stdio.h>

int Sum(int x, int y);

int main()
{
    int a,b,sum;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    sum=Sum(a,b);
    printf("Sum = %d",sum);
    return 0;
}

int Sum(int x, int y)
{
    int sum;
    sum=x+y;
    return sum;
}