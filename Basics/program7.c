// C program to find the Area of a Rectangle.
// Length is 5 and Breadth is 10. Find the Area.

#include<stdio.h>
#include<conio.h>

void main()
{
    int x,y,z;
    x=5; // Length of the Rectangle 'x'.
    y=10; // Breadth of the Rectangle 'y'.
    z=x*y; // Area of the Rectangle 'z' = Length 'x' * Breadth 'y'
    clrscr();
    printf("Length of the Rectangle 'x' = %d \nBreadth of the Rectangle 'y' = %d \n Area of the Rectangle 'z' = Length 'x' * Breadth 'y' \nArea of the Rectangle = %d",x,y,z);
    getch();
}