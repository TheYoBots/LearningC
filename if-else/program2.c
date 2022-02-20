// if - else
// Print Hello World when x = 5 otherwise Print Hi World.

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
    else{
        printf("Hi World");
    }
    printf("\nEND");
    return 0;
}