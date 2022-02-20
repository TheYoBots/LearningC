// C program to find the Area of a Triangle.
// Base is 5 and Height is 10. Find the Area.

#include<stdio.h>
#include<conio.h>

void main()
{
    int x,y,z;
    x=5; // Base of the Triangle 'x'.
    y=10; // Height of the Triangle 'y'.
    z=(x*y)/2; // Area of the Triangle 'z' = (1/2) * Base 'x' * Height 'y'
    clrscr();
    printf("Base of the triangle 'x' = %d \nHeight of the Triangle 'y' = %d \nArea of the Triangle 'z' = (1/2) * Base * Height \nArea of the Triangle 'z' = %d",x,y,z)
    getch();
}