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

int RecGcd(int n1, int n2);
int Gcd(int n1, int n2);

int main()
{
    int n1,n2,res1,res2;
    scanf("%d %d",&n1,&n2);
    res1=RecGcd(n1,n2);
    printf("GCD of %d and %d Using Recursive Function is:%d",n1,n2,res1);
    res2=Gcd(n1,n2);
    printf("\nGCD of %d and %d Using Non-Recursive Function is:%d",n1,n2,res2);
    return 0;
}

int RecGcd(int n1, int n2)
{
    if(n2>n1)
    {
       return(RecGcd(n2,n1));
    }
    else if(n2==0)
    {
        return(n1);
    }
    else
    {
        return(RecGcd(n2,n1%n2));
    }
}

int Gcd(int n1, int n2)
{
    int temp;
    while(n2!=0)
    {
        temp=n1%n2;
        n1=n2;
        n2=temp;
    }
    return(n1);
}