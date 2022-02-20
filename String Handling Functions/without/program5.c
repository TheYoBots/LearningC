// Reverse a strings without string handling functions

#include <stdio.h>

int main()
{
    char s1[20],s2[10];
    int i,j,len;
    printf("Enter a strings s1: ");
    scanf("%s",s1);
    for(len=0;s1[len]!='\0';len++);
    for(i=len-1,j=0;i>=0;j++,i--)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';
    printf("Original string  s1  = %s \nReversed string s2 = %s",s1,s2);
    return 0;
}