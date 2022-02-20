// Roots of Quadratic Equation

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,disc;
    float rt1,rt2,rel,img;
    printf("Enter the value of the coefficients - a, b, c : ");
    scanf("%d %d %d",&a,&b,&c);
    disc=b*b-4*a*c;
    if(disc==0)
    {
        printf("\nThe roots are Real and Equal.");
        rt1=rt2=-b/(float)(2*a);
        printf("\nRoot 1 = %.2f and Root 2 = %.2f",rt1,rt2);
    }
    else if(disc>=0)
    {
        printf("The roots are Real and Distinct");
        rt1=(-b+sqrt(disc))/(float)(2*a);
        rt2=(-b-sqrt(disc))/(float)(2*a);
        printf("Root 1 = %.2f and Root 2 = %.2f",rt1,rt2);
    }
    else if(disc<=0)
    {
        printf("The roots are Imaginary and Complex");
        rel=-b/(float)(2*a);
        img=sqrt(-disc)/(float)(2*a);
        printf("Root 1 = %.2f + i%.2f and Root 2 = %.2f - i%.2f",rel,img,rel,img);
    }
    return 0;
}