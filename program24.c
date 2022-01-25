// Explicit type conversion or type casting or forced or manual conversion.

#include <stdio.h>

int main()
{
    int a=5,b=2;
    float c,d;
    c=a/b;        // integer arithmetic opeartion => int/int => int So output is 2
    d=(float)a/b; // type cast operator is used => forced conversion => type casting happens. Output is 2.5
    // a gets temporarily converted to float then float a/int b => type conbersion happens now , float a/float b => float
    printf("c = %.1f \nd = %.1f",c,d);
    return 0;
}