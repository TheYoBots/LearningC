// Convert Celsius to Fahrenheit by type casting.

#include<stdio.h>

int main()
{
    int oF;
    float oC;
    printf("Enter temperature in degrees Fahrenheit: ")
    scanf("%d",&oF);
    oC=(float)(oF-32)*((float)(5)/9);
    printf("Temperature in degrees Celsius: %f",oC);
    return 0;
}