// Determine whether a number is even or odd.

#include<stdio.h>

int main()
{
    int n,EoO;
    printf("Enter a number: ");
    scanf("%d",&n);
    EoO=n%2==0?printf("%d is Even",n):printf("%d is Odd",n);
    return 0;
}