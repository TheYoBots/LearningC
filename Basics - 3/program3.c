// C program to determoine if an entered character is an alpahabet or not.
// without ctype.h using ASCII values

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90 || ch>=97&&ch<=122)
        printf("Yes");
    else
        printf("No");
}