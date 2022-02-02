// Determine if a number is an Palindrome or not.

#include<stdio.h>

int main()
{
    int sum=0,n,dig,temp;
    printf("Enter a number n: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        dig=n%10;
        sum=(sum*10)+dig;
        n=n/10;
    }
    if(temp==sum)
        printf("\n%d is a Palindrome.",temp);
    else
        printf("\n%d is not a Palindrome",temp);
    return 0;
}