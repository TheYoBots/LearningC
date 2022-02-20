// String handling functions
// strcpy

#include<stdio.h>
#include<string.h>

int main()
{
    char str[20],dup[20];
    printf("Enter a string: ");
    scanf("%s",str);
    strcpy(dup,str);
    printf("Original string = %s \nDuplicate/Copied string = %s",str,dup);
    return 0;
}