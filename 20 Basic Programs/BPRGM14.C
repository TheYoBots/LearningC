// Distance S=ut+1/2*at^2

#include<stdio.h>
#include<conio.h>

void main()
{
   float u,a,t,S; // u is initial velocity, a is Acceleration, t is time, S is Distance Travelled
   clrscr();
   printf("Enter Initial Velocity: ");
   scanf("%f",&u);
   printf("Enter Acceleration: ");
   scanf("%f",&a);
   printf("Enter Time: ");
   scanf("%f",&t);
   S=(u*t)+((a*t*t)/2);
   printf("Distance Travelled S = %f",S);
   getch();
}