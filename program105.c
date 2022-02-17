// C program for matrix addition

#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10];
    int r1,r2,c1,c2,i,j;
    printf("Enter order of matrix A: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter order of matrix B: ");
    scanf("%d %d",&r2,&c2);
    if(r1==r2&&c1==c2)
    {
        printf("Matrix Adidition is Possible!");
        // Reading Matrix A
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("\nEnter a Value into Matrix A: ");
                scanf("%d",&a[i][j]);
            }
        }
        // Reading Matrix B
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("\nEnter a Value into Matrix B: ");
                scanf("%d",&b[i][j]);
            }
        }
        // Matrix addition
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
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
        // Print Sum of Matrix A and Matrix B, Matrix C
        printf("Sum Matrix C:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%4d",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix Adidition is not Possible!");
    }
    return 0;
}