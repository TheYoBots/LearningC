// Volume of a Cylinder

#include<stdio.h>
#include<conio.h>

#define pi 3.142

void main()
{
   int r,h; // r is radius, h is height
   float vol; // vol is volume
   clrscr();
   printf("Enter Radius: ");
   scanf("%d",&r);
   printf("Enter Height: ");
   scanf("%d",&h);
   vol=pi*r*r*h;
   printf("Volume = %f",vol);
   getch();
}