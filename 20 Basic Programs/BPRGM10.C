// Volume of a Sphere

#include<stdio.h>
#include<conio.h>

#define pi 3.142

void main()
{
   int r; // r is radius
   float vol; // vol is volume
   clrscr();
   printf("Enter Radius: ");
   scanf("%d",&r);
   vol=(4*pi*r*r*r)/3;
   printf("Volume = %f",vol);
   getch();
}