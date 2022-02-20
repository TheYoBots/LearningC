// Factorial

#include <stdio.h>

int main()
{
    int i,n,res=1;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        res=res*i;
    }
    printf("%d! = %d",n,res);
    return 0;
}