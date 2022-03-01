/*10 b) Write a c program to implement the following using recursive and non-recursive functions
to find the GCD (greatest common divisor) of two given integers

Test Cases :

input =24 56
output =
GCD of 24 and 56 Using Recursive Function is:8                                  
GCD of 24 and 56 Using Non-Recursive Function is:8

Input Format: Read the two integer numbers.
Output Format :Display the GCD of two numbers separated by a new line as per the Test case Format. 
*/
// Start Writing your program from here..!!

#include<stdio.h>

int recgcd(int x, int y);
int gcd(int x, int y);

int main()
{
    int n1,n2,res1,res2;
    scanf("%d %d",&n1,&n2);
    res1=recgcd(n1,n2);
    printf("GCD of %d and %d Using Recursive Function is:%d",n1,n2,res1);
    res2=gcd(n1,n2);
    printf("\nGCD of %d and %d Using Non-Recursive Function is:%d",n1,n2,res2);
    return 0;
}

int recgcd(int x, int y)
{
    if(y == 0)
    {
       return(x);
    }
    else
    {
        return(recgcd(y, x%y));
    }
}

int gcd(int x, int y)
{
    int z;
    while(x%y!=0)
    {
        z=x%y;
        x=y;
        y=z;
    }
    return(y);
}