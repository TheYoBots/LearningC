// Area and Perimeter of a Circle

#include<stdio.h>
#include<conio.h>

#define pi 3.142

void main()
{
    int r; // r is the radius
   float ar,pr; //ar is area and pr is perimeter
   clrscr();
   printf("Enter the Radius: ");
   scanf("%d",&r);
   ar=pi*r*r;
   pr=2*pi*r;
   printf("Area = %f \nPerimeter = %f",ar,pr);
   getch();
}