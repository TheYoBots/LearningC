/*
Write a C program to find BMI of a person.

Test Cases :
Input = 50.00 1.6
output = 19.5312

Input = 40.00 1.44
output = 19.2901

Input Format : Read weight(in kg) and height(in m) values of a person.
Output Format : The output is the BMI, take %.4f for displaying four places after decimal.
NOTE: weight and height should be taken as floats.
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    float w,h,bmi;
    scanf("%f %f",&w,&h);
    bmi=w/(h*h);
    printf("%f",bmi);
    return 0;
}