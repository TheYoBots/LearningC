// String Palindrome

#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int i,j,l;
    printf("Enter a string: ");
    scanf("%s",str);
    for(l=0; str[l]!='\0'; l++);
    for(i=0,j=l-1; i<=j; i++,j--)
    {
        if(str[i]!=str[j])
        {
            printf("%s is not a Palindrome.",str);
            break;
        }
    }
    if(i>j)
        printf("%s is a Palindrome.",str);
    return 0;
}