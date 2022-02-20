/*
c)	Write a c Program to check whether a given number is armstrong number or not.
Test Cases :
Input = 245
output = 245 is not an armstrong number
         
Input = 153
output = 153 is an armstrong number

Input Format: Read the inputs as one integer.
Output Format : The output is displaying a number is armstrong or not.
// Start Writing your program from here..!!*/

#include<stdio.h>

int main()
{
    int sum=0,n,dig,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        dig=n%10;
        n=n/10;
        sum=sum+dig*dig*dig;
    }
    if(temp==sum)
        printf("%d is an armstrong number",temp);
    else
        printf("%d is not an armstrong number",temp);
    return 0;
}