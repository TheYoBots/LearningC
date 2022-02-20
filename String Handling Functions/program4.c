// String handling functions
// strcmp

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[20],s2[20];
    printf("Enter two strings s1 and s2: ");
    scanf("%s %s",s1,s2);
    if(strcmp(s1,s2)==0)
        printf("s1 and s2 are Similar Strings!");
    else
        printf("s1 and s2 are not Similar Strings!");
    return 0;
}