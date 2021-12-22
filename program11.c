// C program to find the area of a circle.
// method 2
// Define constants seperately.

#include<stdio.h>
#include<conio.h>

#define pi 3.142

void main()
{
    int r=15;
    float area=pi*r*r;
    clrscr();
    printf("area=%f",area);
    getch();
}