/*
Write a C program to find sum, average and minimum and maximum in a list of numbers

Test Cases :
Input = 4
10 20 30 40
Output: Sum = 100
Avg = 25.000000
Min element is 10 found at a[0]
Max element is 40 found at a[3]
         

Input Format:Read the size of the array in first line, Read the elements of array in second line.
Output Format : The output is Sum, Avg, Minimum and Maximum element of array printed in separate line.
// Start Writing your program from here..!!*/

#include<stdio.h>

int main()
{
    int a[100],i,n,sum=0;
    float avg;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        avg=(float)(sum)/n;
    }
    printf("\nSum = %d \nAvg = %f \nMin element is %d found at a[0] \nMax element is %d found at a[3]",sum,avg,a[0],a[3]);
    return 0;
}