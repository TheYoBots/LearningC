// C program to determine if an entered character is an alpahabet or not.
// with isalpha()

#include <stdio.h>
#include<ctype.h>
// isaplha(ch),isalnum(ch),ispunct(),islower(),isupper(),tolower(),toupper()

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(isalpha(ch))
        printf("Yes");
    else
        printf("No");
}