/*
Write  a C program to Check whether Character or not.

Test Cases :
Input = a
output = a is a character

Input = f
output = f is a character

Input = 7
output = 7 is not a character


Input Format: Read the input as char
Output Format : display whether given input is character or not.

*/
// Start Writing your program from here..!!

#include <stdio.h>

int main()
{
    char x;
    scanf(" %c",&x);
    if((x>='A'&&x<='Z') || (x>='a'&&x<='z'))
    {
        printf("%c is a character",x);
    }
    else
    {
        printf("%c is not a character",x);
    }
}