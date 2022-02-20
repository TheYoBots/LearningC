// Append two strings without string handling functions

#include <stdio.h>

int main()
{
    char s1[20],s2[10];
    int i,j;
    printf("Enter 2 strings s1 and s2: ");
    scanf("%s %s",s1,s2);
    for(i=0;s1[i]!='\0';i++);
    s1[i]=' ';
    for(i=i+1,j=0;s2[j]!='\0';j++,i++)
    {
        s1[i]=s2[j];
    }
    s1[i]='\0';
    printf("s1  = %s \ns2 = %s",s1,s2);
    return 0;
}