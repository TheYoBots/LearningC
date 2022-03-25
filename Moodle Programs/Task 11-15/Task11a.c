/*11 a.Write a C program to implement transpose of a matrix using functions.

Test Cases :
Input =2 2
1 2 6 5 
output =
Original Matrix                                                                
   1  2                                                                        
   6  5 
  Transpose Matrix                                                                
   1   6                                                                        
   2   5  

Input = 2 3                                                                             
1 2 3 4 5 6  
output =
Original Matrix                                                                 
   1   2   3                                                                    
   4   5   6                                                                    
Transpose Matrix                                                                
   1   4                                                                        
   2   5                                                                        
   3   6  
Note : Fill in the misssing code of the "FUNCTIONS" Display and Transpose. 
Input Format: Read the inputs as below.
First line order of matrix A seperated by a space.
Second line all the elements of matrix A seperated by a space.
Output Format :
 Firstly Print the "Original Matrix" - in matrix format using %4d and newline for each row. 
then print "Transpose Matrix" - in matrix format using %4d and newline for each row.
*/
// Start Writing your program from here..!!

#include<stdio.h>

void Display(int x[][5],int r,int c);
void Transpose(int x[][5],int r,int c);

int main()
{
    int a[5][5],r1,c1,i,j;
    scanf("%d %d",&r1,&c1);
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Original Matrix\n");
    Display(a,r1,c1);
    Transpose(a,r1,c1);
    return 0;   
}    


void Display(int x[][5],int r,int c)
{
    int i,j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
}    

void Transpose(int x[][5],int r,int c)
{
    int b[5][5],i,j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            b[j][i]=x[i][j];
        }
    }
    printf("Transpose Matrix\n");
    Display(b,c,r);
}