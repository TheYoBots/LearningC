// C Program to generate a Fibonacci Series

#include<stdio.h>

int main()
{
    int n,i,a=0,b=1,c;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=1; i<=n-2; i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}