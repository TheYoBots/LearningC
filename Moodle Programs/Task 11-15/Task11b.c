/*11 b.	Write a C program to display binary equivalent of a given decimal number.

Test Cases :
Input =34                                                                              
output =Decimal Number=34 its Binary equivalent=100010 

Input =213                                                                             
output =Decimal Number=213 its Binary equivalent=11010101
 
Note : Fill in the misssing code of the "FUNCTION" - "decimaltobinary" . 
Input Format: Read the inputs as an integer for number n.
Output Format :Dispaly the decimal number and its binary equivalent in the below format.
Decimal Number=34 its Binary equivalent=100010 
*/
// Start Writing your program from here..!!

#include <math.h>
#include <stdio.h>

long long decimaltobinary(int n);

int main()
{
    int n;
    long long res;
    scanf("%d",&n);
    printf("Decimal Number=%d",n);
    res=decimaltobinary(n);
    printf(" its Binary equivalent=%lld",res);
    return 0;
}

long long decimaltobinary(int n)
{
    long long bin=0;
    int rem,i=1;
    while(n!=0)
    {
        rem=n%2;
        n=n/2;
        bin=bin+rem*i;
        i=i*10;
    }
    return bin;
}