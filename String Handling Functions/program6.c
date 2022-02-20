// String handling functions
// strrev

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[20];
    printf("Enter one strings s1: ");
    scanf("%s",s1);
    strrev(s1);
    printf("Reverse string = %s",s1);
    return 0;
}