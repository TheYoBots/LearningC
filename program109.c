// Finding Strings length without string handling functions

#include <stdio.h>

int main()
{
    char s1[100];
    int len=0,i;
    scanf("%s",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        len++; // logic to find number of characters
    }
    printf("Length of string %s = %d",s1,len);
    return 0;
}