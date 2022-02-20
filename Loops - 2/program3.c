// Print digits in a number

#include <stdio.h>

int main()
{
    int sum,n,dig;
    printf("Enter a number n: ");
    scanf("%d",&n);
    while(n!=0)
    {
        dig=n%10;
        printf("\nDigit = %d and n = %d",dig,n);
        n=n/10;
    }
    return 0;
}