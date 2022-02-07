/*
B)write a C program to generate the prime numbers between x and y where x and y are
starting and ending values to be supplied by the user.
Test Cases :
Input = 2 5
output = 2 3 5
         
Input = 2 10
output = 2 3 5 7 9

Input Format: Read the inputs as two integers.
Output Format : The output is displaying prime numbers in between two given integers.
// Start Writing your program from here..!!*/

#include<stdio.h>

int main()
{
    int a,b,i,j,count=0;
    scanf("%d %d",&a,&b);
    for (i=a;i<=b;i++)
    {
        count=0;
		for (j=1;j<=i;j++)
		{
		    if(i%j==0)
		    {
		        count++;
		    }
		}
		if(count==2)
		{
		    printf("%d ",i);
		}
    }
    return 0;
}