/*Write a C program using functions and pointers that compares two strings to see whether they are  identical. The function returns 1 if they are identical, 0 otherwise.

Test Cases :

Input = clanguage clanguage
output = 1
   
Input = java python
output = 0


Input Format: Read the two strings 
Output Format :result of the operation is int format of for ex: 1 or 0

1 -> Identical strings
0 -> Not Identical strings
*/
// Start Writing your program from here..!!

#include<stdio.h>

int StringCompare(char *s1, char *s2);

int main()
{
    int x;
    char str1[20],str2[20];
    scanf("%s",str1);
    scanf("%s",str2);
    x=StringCompare(str1,str2);
    if(x==1)
        printf("%d",1);
    else
        printf("%d",0);
    return 0;
}

int StringCompare(char *s1, char *s2)
{
    int i;
    for(i=0; *(s1+i)==*(s2+i) && *(s1+i)!='\0' && *(s2+i)!='\0'; i++);
    if(*(s1+i)=='\0' && *(s2+i)=='\0')
        return 1;
    else
        return 0;
}