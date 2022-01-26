// C program for multiplication table of a given number till 20.

#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nMultiplication table of %d till 20: \n",n);
    for(i=1; i<=20; i++)
    {
        printf("\n%d * %d = %d",n,i,n*i);
    }
    printf("\nEND");
    return 0;
}