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
    int i,a[100],size,sum=0;
    float avg;
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<=size; i++)
    {
        sum=sum+a[i];
    }
    printf("Sum = %d",sum);
    avg=(float)(sum)/size;
    printf("\nAvg = %f \nMin element is %d found at a[0] \nMax element is %d found at a[3]",avg,a[0],a[3]);
    return 0;
}