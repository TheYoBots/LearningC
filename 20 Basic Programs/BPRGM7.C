// Area and Perimeter of a Rectangle

#include<stdio.h>
#include<conio.h>

void main()
{
   int l,b,ar,pr;
   /*
   l is length, b is breadth,
   ar is area, pr is perimeter.
   */
   clrscr();
   printf("Enter Length: ");
   scanf("%d",&l);
   printf("Enter Breadth: ");
   scanf("%d",&b);
   ar=l*b;
   pr=2*(l+b);
   printf("Area = %d \nPerimeter = %d",ar,pr);
   getch();
}