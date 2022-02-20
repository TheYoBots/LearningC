/*
c.	Write a C program to calculate the following Sum: 	Sum=1+x/1!+x^2/2!+x^3/3!+x^4/4!+…..xn/n!

Test cases:
Input = 3 2
output = 8.500

Test cases:
Input = 3.5 4
output = 24.023

Input Format: Read the two inputs as one float and integer.
Output Format : The output is displaying sum of the series.
// Start Writing your program from here..!!*/

#include<stdio.h>

int main()
{
    int i,n;
    float x,sum=1,row=1;
	scanf("%f %d",&x,&n);
	for (i=1;i<=n;i++)
	{
	    row=row*x/(float)i;
	    sum=sum+row;
	}
	printf("%.3f",sum);
    return 0;
}