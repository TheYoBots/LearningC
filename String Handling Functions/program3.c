// String handling functions
// strcat

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[20],s2[20];
    printf("Enter two strings s1 and s2: ");
    scanf("%s %s",s1,s2);
    strcat(s1," ");
    strcat(s1,s2);
    printf("Appended string s1 = %s \nString s2 = %s",s1,s2);
    return 0;
}