// C program to determine whether a character is a vowel or a consonant.

#include <stdio.h>

int main()
{
    char x;
    printf("Enter any character: ");
    scanf("%c",&x);
    switch(x)
    {
        case 'A': printf("Vowel"); break;
        case 'E': printf("Vowel"); break;
        case 'I': printf("Vowel"); break;
        case 'O': printf("Vowel"); break;
        case 'U': printf("Vowel"); break;
        case 'a': printf("Vowel"); break;
        case 'e': printf("Vowel"); break;
        case 'i': printf("Vowel"); break;
        case 'o': printf("Vowel"); break;
        case 'u': printf("Vowel"); break;
        default: printf("Consonant"); break;
    }
    printf("\nEnd!");
    return 0;
}