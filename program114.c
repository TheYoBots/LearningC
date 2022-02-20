// String handling functions
// strlen

#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int len;
    printf("Enter a string: ");
    gets(str);
    len=strlen(str);
    printf("Length of %s = %d",str,len);
    return 0;
}