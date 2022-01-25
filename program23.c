// Type conversion

#include <stdio.h>

int main()
{
    int a=5,b;
    float c=3.5,d;
    b=a+c; // output is 8
    d=a+c; // type conversion implicit happens - output is 8.5
    printf("\n b = %d ",b);
    printf("\n d = %.1f ",d);
    return 0;
}