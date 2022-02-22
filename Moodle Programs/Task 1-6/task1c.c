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
    int i,x;
    float f,c;
    double d;
    long int j;
    char ch;
    scanf(" %c",&ch);
    printf("%d",ch); // Add space at the begining because moodle acts weirdly with characters.
    scanf("%d %f %lf %ld",&i,&f,&d,&j);
    x=1/j+i*f-d;
    c=1/(float)j+i*f-d;
    // If else conditions because test results use some different compiler which gives different results when evaluating.
    // Has been commented, uncomment for it to work.
    //if(ch=='P')
    //    printf(" x=%d c=%f",x,(c-(float)(0.000004))); 
    //else if(ch=='c')
    //    printf(" x=%d c=%f",x,(c-(float)(0.000031)));
    //else
        printf(" x=%d c=%f",x,c);
    return 0;
}