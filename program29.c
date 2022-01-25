// Simple if
// Print Hello World when x = 5

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a value for x: ");
    scanf("%d",&x);
    if(x==5)
    {
        printf("Hello World");
    }
    printf("\nEND");
    return 0;
}