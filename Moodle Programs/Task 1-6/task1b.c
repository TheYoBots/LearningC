/*
b)	Write a C program to find greatest and smallest among three numbers using conditional operator.
Test Cases :
Input = 3 9 1
output = 9 1
         
Input = 2 6 1
output = 6 1

Input Format: Read the inputs as three integers.
Output Format : The output is displaying greatest and smallest number
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a,b,c,big,small;
    scanf("%d %d %d",&a,&b,&c);
    big=a>b?(a>c?a:c):(b>c?b:c);
    small=a<b?(a<c?a:c):(b<c?b:c);
    printf("%d %d",big,small);
    return 0;
}