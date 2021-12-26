// Read height and weight and Calculate BMI

#include<stdio.h>
#include<conio.h>

void main()
{
   float h,w,bmi; // h is height, w is weight, bmi is BMI
   clrscr();
   printf("Enter Height in cm: ");
   scanf("%f",&h);
   printf("Enter Weight in kg: ");
   scanf("%f",&w);
   bmi=(w/(h*h))*10000;
   printf("BMI = %f",bmi);
   getch();
}