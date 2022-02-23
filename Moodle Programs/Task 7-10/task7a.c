/*Write a C program to implement Matrix Addition

Test Cases :

Input =2 2
2 2
1 2 6 5
6 5 8 9
output =Resultant Matrix                                                                
   7   7                                                                        
  14  14  

Input = 2 3
3 3
output =Matrix Addition is not Possible
  
Input Format: Read the inputs as below.
First line order of matrix A
Second line order of matrix B
Third line all the elements of matrix A
Fourth line all the  elements of matrix  B
Output Format :Print the "Resultant Matrix" - in matrix format using %4d and newline for each row or Print "Matrix Addition is not Possible" when order is not same.

*/
// Start Writing your program from here..!!


#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10];
    int r1,r2,c1,c2,i,j;
    scanf("%d %d",&r1,&c1);
    scanf("%d %d",&r2,&c2);
    if(r1==r2&&c1==c2)
    {
        // Reading Matrix A
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        // Reading Matrix B
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
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
        // Print Sum, Matrix C
        printf("Resultant Matrix\n");
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
        printf("Matrix Addition is not Possible");
    }
    return 0;
}