// Determine if a number is an armstrong number or not.

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
        sum=sum+dig*dig*dig;
    }
    if(temp==sum)
        printf("\n%d is an Armstrong Number.",temp);
    else
        printf("\n%d is not an Armstrong Number.",temp);
    return 0;
}