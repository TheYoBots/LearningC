// Area and Perimeter of a Square

#include<stdio.h>
#include<conio.h>

void main()
{
   int a,ar,pr; // a is the length of each side, ar is area, pr is perimeter
   clrscr();
   printf("Enter the length of each side: ");
   scanf("%d",&a);
   ar=a*a;
   pr=4*a;
   printf("Area = %d \nPerimeter = %d",ar,pr);
   getch();
}