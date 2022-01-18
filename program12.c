// Smallest and Biggest of 3 numbers.

#include<stdio.h>

int main()
{
    int a,b,c,big,small;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    big=a>b?(a>c?a:c):(b>c?b:c);
    small=a<b?(a<c?a:c):(b<c?b:c);
    printf("BIG = %d \nSMALL = %d",big,small);
    return 0;
}