// Product of 2 numbers using functions

#include<stdio.h>

int Product(int x, int y);

int main()
{
    int a,b,product;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    product=Product(a,b);
    printf("Product = %d",product);
    return 0;
}

int Product(int x, int y)
{
    int product;
    product=x*y;
    return product;
}