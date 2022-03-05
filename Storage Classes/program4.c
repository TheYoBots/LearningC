// external (extern) storage class

#include<stdio.h>

void fun();
extern int p=1;

int main()
{
    printf("External Storage Class:");
    fun();
    fun();
    fun();
    return 0;
}

void fun()
{
    printf("\nP = %d",p);
    p++;
}