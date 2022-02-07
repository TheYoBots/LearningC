/*Write  a C program to check whether a given no is perfect number or not 

Test Cases :
Input = 2
output =2 is not a perfect number
         
Input = 6
output =6 is a perfect number

Input= 11
output=11 is not a perfect number

Input Format: Read the inputs as one integer.
Output Format :Print the result as perfect number or not a perfect number
*/
// Start Writing your program from here..!!

#include<stdio.h>

int main()
{
    int a,i,rem,sum=0;
    scanf("%d",&a);
    for(i=1; i<a; i++)
    {
        rem=a%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(sum==a)
        printf("%d is a perfect number",a);
    else
        printf("%d is not a perfect number",a);
    return 0;
}