// Nested loop.

#include<stdio.h>

int main()
{
    int n,j,i;
    printf("Enter n: ");
    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            printf("\t%d",j);
        }
        printf("\n");
    }
    return 0;
}