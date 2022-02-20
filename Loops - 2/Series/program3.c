// C program for sum of series 1^3+2^3+3^3+...+n^3

#include <stdio.h>
#include<math.h> // for pow()

int main()
{
    int n,sum=0,i;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+pow(i,3);
    }
    printf("Sum = %d",sum);
    return 0;
}