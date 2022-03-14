// Pointers
// Access the value of a pointer

#include<stdio.h>

void main()
{
    int a=5,*p;
    p=&a;
    printf("a = %d",a);
    printf("\n&a = %d",&a);
    printf("\nAddress of p = %d",p);
    printf("\nValue of p = %d",*p);
}