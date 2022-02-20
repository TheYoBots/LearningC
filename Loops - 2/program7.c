// Determine if a number is a Prime Number or not.

#include<stdio.h>

int main()
{
    int n,i,count=0;
    printf("Enter a number n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("\nfactor = %d",i);
            count++;
        }
    }
    if(count==2)
        printf("\n%d is a Prime Number",n);
    else
        printf("\n%d is not a Prime Number",n);
    return 0;
}