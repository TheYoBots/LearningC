// Find (a+b)^2

#include<stdio.h>
#include<conio.h>

void main()
{
   int a,b,ab2; // ab2 is (a+b)^2
   clrscr();
   printf("Enter value of a: ");
   scanf("%d",&a);
   printf("Enter value of b: ");
   scanf("%d",&b);
   ab2=(a+b)*(a+b);
   //ab2=(a*a)+(b*b)+(2*a*b);
   printf("(a+b)^2 = %d",ab2);
   getch();
}