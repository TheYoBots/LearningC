/*
Write  a C program to implement INCREMENT AND DECREMENT Operators.
Take two integers a and b and find the following.
C= a++;
d= b--;
e= ++b;
f= --a;

Test Cases :
Input = 10 20
output =
Post Increment c = 10 and a = 11
Post Decrement d = 20 and b = 19
Pre Increment  e = 20 and b = 20
Pre Decrement  f = 10 and a = 10

CASE - 2:

input = 0 0
output =
Post Increment c = 0 and a = 1                                                  
Post Decrement d = 0 and b = -1                                                 
Pre Increment e = 0 and b = 0                                                   
Pre Decrement f = 0 and a = 0


Input Format : Read two integers a and b as input
Output Format : Dispaly the results of the operations as mentioned in order each one seperated by a space.

*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d",&a,&b);
    c=a++;
    printf("Post Increment c = %d and a = %d",c,a);
    d=b--;
    printf("\nPost Decrement d = %d and b = %d",d,b);
    e=++b;
    printf("\nPre Increment e = %d and b = %d",e,b);
    f=--a;
    printf("\nPre Decrement f = %d and a = %d",f,a);
    return 0;
}