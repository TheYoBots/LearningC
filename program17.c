// Determine Area of a triangle whose sides are a,b,c by type casting

#include<stdio.h>
#include<math.h> // for 'sqrt'

int main()
{
    int a,b,c;
    float s,ar2,ar;
    printf("Enter the values of three sides: ");
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/(float)(2); // semiperimeter
    ar2=(float)s*(s-a)*(s-b)*(s-c); // Area^2
    ar=sqrt(ar2); // Area
    // ar=sqrt(((a+b+c)/(float)(2))*(((a+b+c)/(float)(2))-a)*(((a+b+c)/(float)(2))-b)*(((a+b+c)/(float)(2))-c)); can also be done instead
    printf("Area of triangle = %f",ar);
    return 0;
}