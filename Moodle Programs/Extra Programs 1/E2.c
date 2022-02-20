/*
Write  a C program to convert given days into months and days
Take one integer and find the number of months and days
Take 30 as number of days in a month

Test Cases :
Input = 100
output = 3 months,10 days 

Input = 45
output = 1 month,15 days

Input Format: Read the inputs as one integer.
Output Format : The output is terms of months and days
seperated by a comma.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int day,month,dayinm;
    scanf("%d",&day);
    month=day/30;
    dayinm=day%30;
    printf("%d months,%d days",month,dayinm);
    return 0;
}