// 2D arrays
// compile time initialisation

#include<stdio.h>

int main()
{
    int a[2][2]={90,56,123,567};
    int i,j;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}