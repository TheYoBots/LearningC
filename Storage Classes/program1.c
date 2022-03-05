// auto storage class

#include<stdio.h>

void func();

int main()
{
    printf("Auto Storage Class:");
    func();
    func();
    func();
    return 0;
}

void func()
{
    auto int p=1;
    printf("\nP = %d",p);
    p++; // incremented value doesn't get stored. P remains 1.
}