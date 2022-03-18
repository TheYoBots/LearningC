#include<stdio.h>

int sum(int x, int y)
{
    return(x+y);
}

int big(int x, int y)
{
    if(x>y)
        return(x);
    else
        return(y);
}

void display()
{
    printf("\nHello World!");
}