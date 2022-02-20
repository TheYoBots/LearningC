/*
Write  a C program to print patterns

Test Cases :
Input = 3
output =  1
          2 3
          4 5 6
         
Input = 2
output =  1
          2 3

Input Format: Read the inputs as one integer.
Output Format : The output is one value in first line,2 values in second line and so on and
the numbers are strarting from from 1 and incremented by 1 everytime.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int n,j,i,v=1;
    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=j; i++)
        {
            printf("%d ",v++);
        }
        printf("\n");
    }
    return 0;
}