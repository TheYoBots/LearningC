// C program for sum of series 1+x+x^2+x^3+...+x^n

#include <stdio.h>
#include<math.h>

int main()
{
    int x,n,sum=0,i,term=1;
    printf("Enter x and n: ");
    scanf("%d %d",&x,&n);
    for(i=1;i<=n;i++)
    {
        // term=term*x;
        // sum=sum+term;
        sum=sum+pow(x,i);
    }
    printf("\n Sum = %d",sum);    
    return 0;    
}