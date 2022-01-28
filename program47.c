// Switch case - C program to print numbers from 1 to 3

#include <stdio.h>

int main()
{
    int x;
    printf("Enter any number from 1 to 3: ");
    scanf("%d",&x);
    switch(x)
    {
        case 1: printf("One!"); break;
        case 2: printf("Two!"); break;
        case 3: printf("Three"); break;
        default: printf("Invalid Input!!"); break;
    }
    printf("\nEnd!");
    return 0;
}