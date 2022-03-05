// register storage class
// execution is faster
// machine decides whether to treat as register or not - if not register it is made auto internally

#include<stdio.h>

void fun();

int main()
{
    printf("Register Storage Class:");
    fun();
    fun();
    fun();
    return 0;
}

void fun()
{
    register int p=1;
    printf("\nP = %d",p);
    p++;
}