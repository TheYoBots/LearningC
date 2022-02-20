// Sum of digits in a number

#include <stdio.h>

int main()
{
    int sum=0,n,dig,temp;
    printf("Enter a number n: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        dig=n%10;
        n=n/10;
        printf("\nDigit = %d and n = %d",dig,n);
        sum=sum+dig;
    }
    printf("\nSum of Digits of number %d = %d",temp,sum);
    return 0;
}