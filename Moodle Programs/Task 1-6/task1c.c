/*
Write  a C program to implement implicit and explicit type conversion

x = 1/(long int)+(int)*(float)-(double) without type casting
c = 1/(long int)+(int)*(float)-(double) with type casting to float

Test Cases :
Input = a 4 4.5 23.54 233
output = 97 x=-5 c=-5.535708

Input = X 2 2.5 16.11 154
output = 88 x=-11 c=-11.103506

Input Format: Read the inputs as one charcter, one integer,one float,one double,one long int.
Output Format : The output is ASCII value and solved expression values
seperated by a space.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    char a;
    int b,x;
    float c,y;
    double d;
    long e;
    scanf("%c %d %f %lf %ld",&a,&b,&c,&d,&e);
    x=1/e+b*c-d;
    y=1/(float)e+b*c-d;
    printf("%d x=%d c=%f",(int)a,x,y);
    return 0;
}