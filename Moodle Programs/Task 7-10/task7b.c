/*Write a C program to implement matrix multiplication
Test Cases :

Input =3 2
2 3                                                                             
1 2 3 4 5 6                                                                     
9 7 5 3 2 1  
output =Resultant Matrix                                                                
  15  11   7                                                                    
  39  29  19                                                                    
  63  47  31 

Input =1 2
3 2
output =Matrix Multiplication is not Possible
   
Input Format: Read the inputs as below.
First line order of matrix A
Second line order of matrix B
Third line all the elements of matrix A
Fourth line all the  elements of matrix  B
Output Format :Print the "Resultant Matrix" - in matrix format using %4d and newline for each row or Print "Matrix Multiplication is not Possible" when order is not same.

*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a[5][5],b[5][5],c[5][5];
    int r1,r2,c1,c2,i,j,k;
    scanf("%d %d",&r1,&c1);
    scanf("%d %d",&r2,&c2);
    if(c1==r2)
    {
        for(i=0;i<r1;i++)
        {
            // Read Matrix A
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        // Redaing Matrix B
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
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
        // Print Product Matrix C
        printf("Resultant Matrix\n");
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
        printf("Matrix Multiplication is not Possible");
    }
    return 0;
}