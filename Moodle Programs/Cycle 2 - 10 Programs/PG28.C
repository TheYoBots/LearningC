/*
Write a C program to implement Bitwise Operators.
Take two integers and apply all bitwise operations in order -
& , | , ^ , ~ , << , >>

Test Cases :
Input = 4 8
output =
0
12
12
-5
16
2

Input = 10 5
output =
0
15
15
-11
40
1

Input Format : Read the inputs as two integers.
Output Format : The output is The Resultant of the expressions a&b,a|b,a^b,~a,a<<2,b>>2 seperated in a new line.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d %d",&a,&b);
    c=a&b;
    d=a|b;
    e=a^b;
    f=~a;
    g=a<<2;
    h=b>>2;
    printf("%d \n%d \n%d \n%d \n%d \n%d",c,d,e,f,g,h);
    return 0;
}