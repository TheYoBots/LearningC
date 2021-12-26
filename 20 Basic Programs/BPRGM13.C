// LSA, TSA and Volume of a Cuboid

#include<stdio.h>
#include<conio.h>

void main()
{
   int l,b,h; // l is length, b is breadth, h is height
   float la,ta,vol; // la is LSA, ta is TSA, vol is volume
   clrscr();
   printf("Enter Length: ");
   scanf("%d",&l);
   printf("Enter Breadth: ");
   scanf("%d",&b);
   printf("Enter Height: ");
   scanf("%d",&h);
   la=2*((h*l)+(h*b));
   ta=2*((l*b)+(b*h)+(l*h));
   vol=l*b*h;
   printf("LSA = %f \nTSA = %f \nVolume = %f",la,ta,vol);
   getch();
}