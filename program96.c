// C program to determoine if an entered character is an alpahabet or not.
// without ctype.h or ASCII values.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z' || ch>='a'&&ch<='z')
        printf("Yes");
    else
        printf("No");
}