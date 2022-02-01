// Nested loop.
// patterns. right angled triangle

#include<stdio.h>

int main()
{
    int n,j,i;
    printf("Enter n: ");
    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=j; i++)
        {
            printf("\t%d",i);
        }
        printf("\n");
    }
    return 0;
}