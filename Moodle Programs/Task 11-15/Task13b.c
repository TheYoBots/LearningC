/*Write a C program to sort list of numbers uing pointers.

Test Cases :

Input = 
5
2
4
6
3
1
output = 1 2 3 4 6
   
Input Format: Read the length "n" of the list and then read n number of integers.
Output Format :print sorted list of numbers separated by spaces.

*/
// Start Writing your program from here..!!

#include<stdio.h>

void sort(int *a, int n);
void display(int *a, int n);

int main()
{
    int i,n,a[20];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a, n);
    display(a, n);
    return 0;
}

void sort(int *a, int n)
{
    int i,j,temp;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(*(a+i)>*(a+j))
            {
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }
}

void display(int *a, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ",*(a+i));
    }
    printf("\n");
}