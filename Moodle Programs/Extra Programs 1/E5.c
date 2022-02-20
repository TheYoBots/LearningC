/*
Write  a C program to convert farenheit to celcius.



Test Cases :
Input = 54.2
output = 12.222223

Input = 34.5
output = 1.111111

Input Format: Read the input as float 
Output Format : display celsius in float 

*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    float oF,oC;
    scanf("%f",&oF);
    oC=(oF-32)*(5/(float)(9));
    printf("%f",oC);
    return 0;
}