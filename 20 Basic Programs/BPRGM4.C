// Sum and Average of three numbers

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,sum; // a,b,c are 3 numbers
   float avg;
   clrscr();
   printf("Enter three numbers: ");
   scanf("%d %d %d",&a,&b,&c);
   sum=a+b+c;
   avg=sum/3;
   printf("Sum = %d \nAverage = %f",sum,avg);
   getch();
}