/*9a)Write a C program to read a string and find it is palindrome or not.

Test Cases :


Input =madam
output =madam is a Palindrome.
   
Input =griet
output =griet is not a Palindrome.


Input Format: Read a string .
Output Format :Display whether the string is palindrome or not.
Note - %s is a Palindrome. 

*/
// Start Writing your program from here..!!

#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int i,j,l,flag=0;
    scanf("%s",str);
    for(l=0; str[l]!='\0'; l++);
    for(i=0,j=l-1; i<=j; i++,j--)
    {
        if(str[i]!=str[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%s is a Palindrome.",str);
    else
        printf("%s is not a Palindrome.",str);
    return 0;
}