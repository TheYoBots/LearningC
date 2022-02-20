/*
4b.	Write a C Program check whether a given number is palindrome number or not.

Test Cases :
Input = 12
output = 12 is not a Palindrome. 

Input = 11
output = 11 is a Palindrome. 

Input Format: Read the input as one positive integer.
Output Format : The output is text determining whether the given number is palindrome or not.

*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int rev=0,n,dig,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
    if(temp==rev)
        printf("%d is a Palindrome.",temp);
    else
        printf("%d is not a Palindrome.",temp);
    return 0;
}