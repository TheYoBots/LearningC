// Nested loop.
// 4 start in 4 lines

#include<stdio.h>

int main()
{
    int n,i;
    for(n=1; n<=3; n++)
    {
        for(i=1; i<=4; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}