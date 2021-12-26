// Find summation of first n Natural Numbers

#include<stdio.h>
#include<conio.h>

void main()
{
   int n,sn; // sn is summation of first n natural numbers
   clrscr();
   printf("Enter value of n: ");
   scanf("%d",&n);
   sn=(n*(n+1))/2;
   printf("Summation of first %d Natrural Numbers = %d",n,sn);
   getch();
}