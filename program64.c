// Nested loop.
// a * in b lines.

#include<stdio.h>

int main()
{
    int a,b,n,i;
    printf("Print a stars in b lines. Give the value of a and b: ");
    scanf("%d %d",&a,&b);
    for(n=1; n<=b; n++)
    {
        for(i=1; i<=a; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}