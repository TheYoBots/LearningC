/*
Write a C program to implement Increment and Decrement Operators.
Take two integers and find the following.
c = a++
d = b--
e = ++b
f = --a

Test Cases :
Input = 10 20
output =
Post Increment c = 11 and a = 10
Post Decrement d = 19 and b = 20
Pre Increment e = 20 and and b = 20
Pre Decrement f = 10 and a = 10

Input = 0 0
output =
Post Increment c = 1 and a = 0
Post Decrement d = -1 and b = 0
Pre Increment e = 0 and b = 0
Pre Decrement f = 0 and a = 0

Input Format : Read two integers a and b as input.
Output Format : Display the results of the operations as mentioned in order each one seperated by a space.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Post Increment c = %d and a = %d",a,a++);
    printf("\nPost Decrement d = %d and b = %d",b,b--);
    printf("\nPre Increment e = %d and b = %d",b,++b);
    printf("\nPre Decrement f = %d and a = %d",a,--a);
    return 0;
}