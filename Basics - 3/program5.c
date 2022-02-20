// C program to display the ASCII value of a given character

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    ch=getchar();
    printf("ASCII value of %c = %d",ch,(int)ch);
}