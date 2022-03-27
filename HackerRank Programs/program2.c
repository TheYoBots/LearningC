// Playing With Characters

#include <stdio.h>

int main() 
{
    char s1[100],s2[100],s3[100];
    gets(s1);
    gets(s2);
    gets(s3); // There's probably a simpler way to do this.
    printf("%s \n%s \n%s",s1,s2,s3);
    return 0;
}