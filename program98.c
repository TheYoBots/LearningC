// C program for sum of series 1+2+3+...+n

#include <stdio.h>

int main()
{
    int n,sum=0,i;
    printf("Enter n: ");
    scanf("%d",&n);
    // sum=n*(n+1)/2;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum = %d",sum);
    return 0;
}