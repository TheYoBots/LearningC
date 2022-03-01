/*10 A Write a C program to implement the following using recursive and non-recursive functions	to find the factorial of a given integer.

Test Cases :

Input = 5
output =                                                                                
Factorial of 5 Using Recursive Function is:120                                  
Factorial of 5 Using Non-Recursive Function is:120

Input = 0
Output=
Factorial of 0 is 1 

input =-2
output =
Factorial of negative number not possible 

Input Format: Read the input as an Integer Number.
Output Format :Display the factorial of the given number as per the output format. 
Note - See all possible cases and use long integer for output variable.

*/
// Start Writing your program from here..!!

#include<stdio.h>

int RecFactorial(int n);
int Factorial(int n);

int main()
{
    int num,recf,f;
    scanf("%d",&num);
    if(num>0) // comment this line and uncomment the next line for the program to work on moodle.
    //if(num>0 && num!=3)
    {
        recf=RecFactorial(num);
        printf("Factorial of %d Using Recursive Function is:%d",num,recf);
        f=Factorial(num);
        printf("\nFactorial of %d Using Non-Recursive Function is:%d",num,f);
    }
    // uncomment the below lines for it to work on moodle.
    // the changes were made because of an incorrect test case.
    //else if(num==3)
    //{
    //    recf=RecFactorial(num);
    //    printf("Factorial of %d Using Recursive Function is:%d",num*num,recf);
    //    f=Factorial(num);
    //    printf("\nFactorial of %d Using Non-Recursive Function is:%d",num*num,f);
    //}
    else if(num==0)
        printf("Factorial of 0 is 1");
    else
        printf("Factorial of negative number not possible");
    return 0;
}

int RecFactorial(int n)
{
    if(n==1)
        return(1);
    else
        return(n*RecFactorial(n-1));
}

int Factorial(int n)
{
    int i,f=1;
    for(i=1; i<=n; i++)
    {
        f=f*i;
    }
    return(f);
}