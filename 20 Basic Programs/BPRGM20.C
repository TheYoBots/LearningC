// Find summation of first n^3 Natural Numbers

#include<stdio.h>
#include<conio.h>

void main()
{
   int n,sn3; // sn3 is summation of first n^3 natural numbers
   clrscr();
   printf("Enter value of n: ");
   scanf("%d",&n);
   sn3=((n*(n+1))/2)*((n*(n+1))/2);
   printf("Summation of cubes of first %d Natrural Numbers = %d",n,sn3);
   getch();
}