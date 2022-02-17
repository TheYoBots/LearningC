// C program for sum of series 1+x/1-x^2/2+x^3/3-...+x^n/n
// an alternate + and - series

#include <stdio.h>
#include<math.h>

int main()
{
    int x,n,i,term=1,sign;
    float sum=1;
    printf("Enter x and n: ");
    scanf("%d %d",&x,&n);
    for(i=1,sign=0;i<=n;i++,sign++)
    {
        //term=term*-x;
        //sum=sum+term/(float)i;
        sum=sum+pow(-1,sign)*pow(x,i)/i;  
    }
    printf("Sum = %f",sum);    
    return 0;    
}