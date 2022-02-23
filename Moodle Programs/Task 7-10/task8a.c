/*Write a C program to implement the following string handling functions.
(i) strlen() (ii) strcpy() (iii)strcmp() (iv) strcat()

Test Cases :

input =PPS
LAB
output =
Length of String PPS=3                                                          
Original String PPS and Copied String PPS                                       
Strings PPS and LAB are not identical                                           
Concatenated String=PPSLAB 
   

Input Format: Read the input as 2 strings s1 and s2.
Output Format :Print length of the string, original string, copied string, identical and concatenated strings as given in the test case format.
Note : Follow the Test case format and print every output statement in new line e xcept first.

*/
// Start Writing your program from here..!!

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[20],s2[20],cpy[20];
    int len;
    scanf("%s %s",s1,s2);
    len=strlen(s1);
    printf("Length of String %s=%d",s1,len);
    strcpy(cpy,s1);
    printf("\nOriginal String %s and Copied String %s",s1,cpy);
    if(strcmp(s1,s2)==0)
        printf("\nStrings %s and %s are identical",s1,s2);
    else
        printf("\nStrings %s and %s are not identical",s1,s2);
    strcat(s1,s2);
    printf("\nConcatenated String=%s",s1);
    return 0;
}