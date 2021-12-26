// Sum of three floats

#include<stdio.h>
#include<conio.h>

void main()
{
    float a,b,c,sum;
    clrscr();
    printf("Enter three floats: ");
    scanf("%f %f %f",&a,&b,&c);
    sum=a+b+c;
    printf("Sum = %f",sum);
    getch();
}