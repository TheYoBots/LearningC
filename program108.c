// Matrix Transpose

#include<stdio.h>

int main()
{
    int a[5][5],b[5][5];
    int r1,c1,i,j;
    printf("Enter order of Matrix A: ");
    scanf("%d %d",&r1,&c1);
    // Read Matrix A
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Enter a Value into Matrix A: ");
            scanf("%d",&a[i][j]);
        }
    }
    // Transpose Matrix B
    for(i=0;i<r1;i++) 
    {
        for(j=0;j<c1;j++) 
        {
            b[j][i]=a[i][j];
        }
    }
    // Print Matrix A
    printf("Matrix A:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    // Print Matrix B
    printf("Transpose Matrix B:\n");
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}