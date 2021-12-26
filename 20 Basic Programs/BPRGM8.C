// Area of a Triangle

#include<stdio.h>
#include<conio.h>

void main()
{
   int b,h; // b is base, h is height
   float ar; // ar is area
   clrscr();
   printf("Enter Base: ");
   scanf("%d",&b);
   printf("Enter Height: ");
   scanf("%d",&h);
   ar=(b*h)/2;
   printf("Area = %f",ar);
   getch();
}