// defaults for storage classes

#include<stdio.h>

extern int p;

int main()
{
    auto int a;
    register int b;
    static int c;
    int p;
    printf("Default values of storage class variables:");
    printf("\nauto a=%d \nregister b=%d \nstatic c=%d \nextern p=%d",a,b,c,p);
    return 0;
}