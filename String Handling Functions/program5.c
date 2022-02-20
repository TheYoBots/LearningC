// String handling functions
// strstr

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[20],s2[20];
    printf("Enter two strings s1 and s2: ");
    scanf("%s %s",s1,s2);
    if(strstr(s1,s2)!=NULL)
        printf("s2 is found in s1!");
    else
        printf("s2 is not found in s1!");
    return 0;
}