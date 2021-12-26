// Find summation of first n^2 Natural Numbers

#include<stdio.h>
#include<conio.h>

void main()
{
   int n,sn2; // sn2 is summation of first n^2 natural numbers
   clrscr();
   printf("Enter value of n: ");
   scanf("%d",&n);
   sn2=(n*(n+1)*((2*n)+1))/6;
   printf("Summation of squares of first %d Natrural Numbers = %d",n,sn2);
   getch();
}