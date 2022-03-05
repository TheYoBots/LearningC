// Static variables are initialised only once and can never be re-initialised.

#include<stdio.h>

void fun();

int main()
{
    printf("Static Storage Class:");
    fun();
    fun();
    fun();
    return 0;
}

void fun()
{
    static int p=1;
    printf("\nP = %d",p); // P's value gets stored and is incremented
    p++;
}