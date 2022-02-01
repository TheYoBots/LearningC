// Nested loop.

#include<stdio.h>

int main()
{
    int n,j,i,v=1;
    printf("Enter n: ");
    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=j; i++)
        {
            printf("%4d",v++);
        }
        printf("\n");
    }
    return 0;
}