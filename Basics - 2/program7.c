// Read and write a string.

#include<stdio.h>

int main()
{
    char str[10];
    printf("\nEnter a string: ");
    scanf("%s",str); // Note that it isn't &str
    printf("\nThe string is: %s",str);
    return 0;
}