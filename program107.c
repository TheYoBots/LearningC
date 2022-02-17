// Matrix Multiplication

#include<stdio.h>

int main()
{
    int a[5][5],b[5][5],c[5][5];
    int r1,r2,c1,c2,i,j,k;
    printf("Enter order of Matrix A: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter order of Matrix B: ");
    scanf("%d %d",&r2,&c2);
    if(c1==r2)
    {
        printf("Matrix Multiplication is Possible!\n");
        for(i=0;i<r1;i++)
        {
            // Read Matrix A
            for(j=0;j<c1;j++)
            {
                printf("Enter a Value into Matrix A: ");
                scanf("%d",&a[i][j]);
            }
        }
        // Redaing Matrix B
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("Enter a Value into Matrix B: ");
                scanf("%d",&b[i][j]);
            }
        }
        // Matrix multiplication
        for(i=0;i<r1;i++) 
        {
            for(j=0;j<c2;j++) 
            {
                c[i][j]=0;
                for(k=0;k<c1;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
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
        printf("Matrix B:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%4d",b[i][j]);
            }
            printf("\n");
        }
        // Print Product Matrix C
        printf("Product Matrix C:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%4d",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix Multiplication is not Possible!");
    }
    return 0;
}