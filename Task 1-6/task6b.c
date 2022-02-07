/*
Write a C program to implement linear search.
Test Cases :

Input = 4
1 2 3 4
3
output = Search is successful element is found at position 3
         
Input = 4
1 2 3 4
5
output = Element not found
         

Input Format: Read the number of elements in array in first line, Enter the elements in second line separated by space, 
Enter the element to search in 3rd line
Output Format : The output is search successful element found at particular position based on search key.
// Start Writing your program from here..!!*/

#include<stdio.h>

int main()
{
    int a[100],search,i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
        scanf("%d",&search);
        for(i=0; i<n; i++)
        {
            if (a[i]==search)
            {
                printf("Search is successful element is found at position %d",++i);
                break;
            }
        }
    if(i==n)
        printf("Element not found");
    return 0;
}