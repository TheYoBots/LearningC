// Moodle task 5A(ii) fixed

#include <stdio.h>

int main()
{
    int n,i,space,j,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(space=1;space<=n-i;space++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" %2d  ",k++);
        }
        printf("\n");
    }
    return 0;    
}