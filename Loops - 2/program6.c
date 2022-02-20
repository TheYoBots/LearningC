// Determine if a number is a Palindrome or not.

#include<stdio.h>

int main()
{
    int rev=0,n,dig,temp;
    printf("Enter a number n: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
    printf("Reverse of the number %d = %d",temp,rev);
    if(temp==rev)
        printf("\n%d is a Palindrome.",temp);
    else
        printf("\n%d is not a Palindrome.",temp);
    return 0;
}