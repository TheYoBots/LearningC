// Switch Case - A multi way decision making statement

#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number from 1 to 4: ");
    scanf("%d",&num);
    switch(num)
    {
        case 1: printf("ONE"); break;
        case 2: printf("TWO"); break;
        case 3: printf("THREE"); break;
        case 4: printf("FOUR"); break;
        default:printf("INVALID INPUT!!"); break;
    }
    printf("\nEND");
    return 0;
}