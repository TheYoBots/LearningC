/*
Write a C program to implement BINARY search.
Test Cases :

Input = 6
10 20 21 32 35 44
44
output = Search is successful element is found at position 6
         
Input = 4
1 4 5 6
10
output = Element not found
         

Input Format: Read the number of elements in array in first line, Enter the elements in second line separated by space, 
Enter the element to search in 3rd line
Output Format : The output is search successful element found at particular position based on search key.
// Start Writing your program from here..!!*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int a[15],i,n,x,lb,ub,mid;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    lb=0;
    ub=n-1;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(x==a[mid])
        {
            printf("Search is successful element is found at position %d",mid+1);
            exit(0);
        }
        else if(x<a[mid])
        {
            ub=mid-1;   
        }
        else if(x>a[mid])
        {
            lb=mid+1;   
        }
    }
    printf("Element not found");
    return 0;
}