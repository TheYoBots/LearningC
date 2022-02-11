// 2D arrays
// run time initialisation
// array size 10 by 10

#include<stdio.h>

int main()
{
    int a[10][10];
    int i,j,r,c;
    printf("Enter the row and column values: ");
    scanf("%d %d",&r,&c);
    printf("Enter %d elements: ",r*c);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Displaying %d elements: \n",r*c);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}