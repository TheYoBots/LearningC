// Switch case - Character Case Labels

#include <stdio.h>

int main()
{
    char x;
    printf("Enter any character from Capital A to C: ");
    scanf("%c",&x);
    switch(x)
    {
        case 'A': printf("A"); break;
        case 'B': printf("B"); break;
        case 'C': printf("C"); break;
        default: printf("Invalid Input!!"); break;
    }
    printf("\nEnd!");
    return 0;
}