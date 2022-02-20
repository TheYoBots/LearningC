// Compare two strings without string handling functions

#include <stdio.h>

int main()
{
    char s1[100],s2[100];
    int i;
    scanf("%s %s",s1,s2);
    for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            break;
        }
    }
    if(s1[i]=='\0'&&s2[i]=='\0')
        printf("s1 and s2 are similar.");
    else
        printf("s1 and s2 are not similar.");
    return 0;
}