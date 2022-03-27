// Sum of Digits of a Five Digit Number

#include <stdio.h>

int main()
{
    int sum=0,n,dig;
    scanf("%d",&n);
    while(n!=0)
    {
        dig=n%10;
        n=n/10;
        sum=sum+dig;
    }
    printf("%d",sum);
    return 0; // works for numbers of any numbers of digits
}