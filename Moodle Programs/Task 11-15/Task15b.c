/*Write a C program to find some of n numbers using command line arguments.

Test Cases :

input= given from command line (ex. 10 20 30)                                                                               
output=60


Input Format: Read the input from command line arguments
Output Format :Sum of numbers given from the command line. */
// Start Writing your program from here..!!

#include<stdio.h>
#include<stdlib.h>

int main(int argC, char *argv[])
{
    int i,sum=0;
    for(i=1; i<argC; i++)
    {
        sum=sum+atoi(argv[i]);
        printf("%s ",argv[i]);
    }
    printf("%d",sum);
    return 0;
}