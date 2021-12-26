// Find (a+b)^3

#include<stdio.h>
#include<conio.h>

void main()
{
   int a,b,ab3; // ab3 is (a+b)^3
   clrscr();
   printf("Enter value of a: ");
   scanf("%d",&a);
   printf("Enter value of b: ");
   scanf("%d",&b);
   ab3=(a+b)*(a+b)*(a+b);
   //ab3=(a*a*a)+(b*b*b)+(3*a*b*(a+b));
   printf("(a+b)^3 = %d",ab3);
   getch();
}