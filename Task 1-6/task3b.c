/*
The program should request the user to input two numbers and display one of the
following as per the desire of user. (1). Sum of numbers (2) difference of numbers (3)
product of the numbers (4)division of the numbers. Write a C program using switch
statement to accomplish the above task.


Test Cases :
Input = 2 3
1
output = 5

Input = 5 1
2
output = 4
Input Format: Read the choice from 1 to 4 second line  and two integer numbers (except 0) in first line
Output Format : The output is single integer value based on arithmatic expression.
If it reads a value that is not from 1 to 4 in the second line the display wrong choice.

*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("\n%d %d",&b,&c);
    scanf("%d",&a);
    switch(a)
    {
        case 1: printf("%d",b+c); break;
        case 2: printf("%d",b-c); break;
        case 3: printf("%d",b*c); break;
        case 4: printf("%d",b/c); break;
        default:printf("wrong choice"); break;
    }
    return 0;
}