/*Write a c program to create a user defined header file to find sum, product and greatest of
two numbers 

Test Cases :

input= 3 5                                                                              
output=
Sum of 3 and 5 = 8
Product of 3 and 5 = 15
Maximum of 3 and 5 = 5


Input Format: Read two integer numbers
Output Format :Sum, Product and Maximum of 2 numbers displayed in separate lines.
Note: Students need to include the myheader.h header file in their program.
*/
// Start Writing your program from here..!!

#include<stdio.h>
#include "myheader.h"

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Sum of %d and %d = %d\n",a,b,sum(a,b));
    printf("Product of %d and %d = %d\n",a,b,product(a,b));
    printf("Maximum of %d and %d = %d\n",a,b,FindMax(a,b));
    return 0;
}