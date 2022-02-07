/*
Write a C program to find the roots of a quadratic equation using if-else


Test Cases :
Input = 1 -7 12
output = 
root1 = 4.000
root2 = 3.000

Input = 1 2 1
output = 
root1 = -1.000
root2 = -1.000

Input = 1 2 1
output = 
root1 = -1.000
root2 = -1.000

Input = 1 1 1
output = 
root1 = -0.500 + i 0.866
root2 = -0.500 - i 0.866

Input Format: Read the 3 input values of a,b and c 
Output Format : The output is root1 and root2 values based on the quadartic equation formulas.

*/
// Start Writing your program from here..!!

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,disc;
    float rt1,rt2,rel,img;
    scanf("%d %d %d",&a,&b,&c);
    disc=b*b-4*a*c;
    if(disc==0)
    {
        rt1=rt2=-b/(float)(2*a);
        printf("root1 = %.3f \nroot2 = %.3f",rt1,rt2);
    }
    else if(disc>=0)
    {
        rt1=(-b+sqrt(disc))/(float)(2*a);
        rt2=(-b-sqrt(disc))/(float)(2*a);
        printf("root1 = %.3f \nroot2 = %.3f",rt1,rt2);
    }
    else if(disc<=0)
    {
        rel=-b/(float)(2*a);
        img=sqrt(-disc)/(float)(2*a);
        printf("root1 = %.3f + i %.3f \nroot2 = %.3f - i %.3f",rel,img,rel,img);
    }
    return 0;
}