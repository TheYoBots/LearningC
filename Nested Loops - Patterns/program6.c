// C program for printing pyramid of stars (*)

#include <stdio.h>

int main()
{
    int n,i,space,j;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(space=1;space<=n-i;space++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *  ");
        }
        printf("\n");
    }
    return 0;    
}