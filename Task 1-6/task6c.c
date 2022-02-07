/*
Write a C program to implement BINARY search.
Test Cases :

Input = 6
10 20 35 44 21 32
44
output = Search is successful element is found at position 4
         
Input = 4
1 4 5 6
Enter the element to search:10
output = Element not found
         

Input Format: Read the number of elements in array in first line, Enter the elements in second line separated by space, 
Enter the element to search in 3rd line
Output Format : The output is search successful element found at particular position based on search key.
// Start Writing your program from here..!!*/

#include<stdio.h>

int main()
{
    int i,first,last,middle,n,search,a[100];
    scanf("%d",&n);
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);
        scanf("%d",&search);
        first=0;
        last=n-1;
        middle=(first+last)/2;
        while(first<=last)
        {
            if(a[middle]<search)
                first=middle+1;
            else if(a[middle]==search)
            {
                printf("Search is successful element is found at position %d",middle+1);
                break;
            }
            else
                last=middle-1;
            middle=(first+last)/2;
        }
    if (first>last)
        printf("Element not found");
    return 0;
}