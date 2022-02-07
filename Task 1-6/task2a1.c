/* Write a C program to swap two numbers Using third variable

Test Cases :
Input = 10 20
output = 20 10

Input = 100 150
output = 150 100

Input Format: Read the inputs as two integers.
Output Format : The output is to swap values
seperated by a space.
*/
// Start Writing your program from here..!!
/* swapping two numbers using thrid variable*/

#include<stdio.h>

int main()
{
    int a,b,temp;
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    return 0;
}