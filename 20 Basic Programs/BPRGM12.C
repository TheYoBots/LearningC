// LSA, TSA and Volume of a Cube

#include<stdio.h>
#include<conio.h>

void main()
{
   int a; // a is length of each side
   float la,ta,vol; // la is LSA, ta is TSA, vol is volume
   clrscr();
   printf("Enter Length of each side: ");
   scanf("%d",&a);
   la=4*a*a;
   ta=6*a*a;
   vol=a*a*a;
   printf("LSA = %f \nTSA = %f \nVolume = %f",la,ta,vol);
   getch();
}