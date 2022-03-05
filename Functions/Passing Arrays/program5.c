// Passing 2D Arrays - Entire Array
// call by reference
/*
An important thing to note when you pass entire 2d array to a function is
to definitely mention the column size or the size of second subscript.
*/

#include<stdio.h>

void display(int x[][3],int r,int c);

int main()
{
    int a[2][3]={10,20,30,40,50,60};
    printf("Passing entire 2D array to a function");
    display(a,2,3);
    return 0;
}

void display(int x[][3],int r,int c)
{
    int i,j;
    printf("Matrix X:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%4d",x[i][j]);
        }
        printf("\n");
    }
}