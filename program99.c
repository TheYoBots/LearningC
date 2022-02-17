// C program for sum of series 1^2+2^2+3^2+...+n^2

#include <stdio.h>
#include<math.h> // for pow()

int main()
{
    int n,sum=0,i;
    printf("Enter n: ");
    scanf("%d",&n);
    // sum=(n*((2*n)+1)*(n+1))/6;
    for(i=1;i<=n;i++)
    {
       // sum=sum+i*i; // without math.h
       sum=sum+pow(i,2);
    }
    printf("Sum = %d",sum);
    return 0;
}