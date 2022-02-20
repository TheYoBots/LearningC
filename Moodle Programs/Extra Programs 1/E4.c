/*
Write  a C program to find if the given year is a leap year.
If it is a leap year, print 1, else print 0.


Test Cases :
Input = 2000
output = 1

Input = 2315
output = 0

Input Format: Read the input an integer
Output Format : The output is either 0 or 1.

*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int year;
    scanf("%d",&year);
    if(year%4==0 && year%100!=0)
        printf("1");
    else if(year%100==0)
        if(year%400==0)
           printf("1");
        else
            printf("0");
    else
        printf("0");
    return 0;
}