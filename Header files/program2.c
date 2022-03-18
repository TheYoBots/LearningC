#include<stdio.h>
#include"program2.h"

int main()
{
    int x=10,y=20,res;
    display();
    printf("\nSum = %d",sum(x,y));
    printf("\nBigger of %d and %d = %d",x,y,big(x,y));
    display();
    return 0;
}