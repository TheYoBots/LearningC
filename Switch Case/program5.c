// Multiple case labels having a common statement block
// C program to determine whether a character is a vowel or a consonant.

#include <stdio.h>

int main()
{
    char x;
    printf("Enter any character: ");
    scanf("%c",&x);
    switch(x)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("Vowel"); break;
        default: printf("Consonant"); break;
    }
    printf("\nEnd!");
    return 0;
}