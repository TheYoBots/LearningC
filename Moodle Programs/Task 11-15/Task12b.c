/*Write a C program that uses structures and functions to perform the following operations:
i. Addition of two complex numbers
ii. subtraction of two complex numbers
iii. Multiplication of two complex numbers

Test Cases :
Input = 
2 3                                                                             
4 5                                                                             
output=
Complex Number C1:                                                              
2.00 + i 3.00                                                                   
Complex Number C2:                                                              
4.00 + i 5.00                                                                   
                                                                                
Sum of Complex Numbers C1 and C2:                                               
6.00 + i 8.00                                                                   
                                                                                
Difference of Complex Numbers C1 and C2:                                        
-2.00 - i 2.00                                                                  
                                                                                
Product of Complex Numbers C1 and C2:                                           
-7.00 + i 22.00  
   


Input Format: Read complex number c1 in first line (real and imaginary values)
read complex number c2 in second line.
Output Format: Display complex number C1 in first line.
Display complex number C2 in second line.
Display Sum, Difference and Product of Complex numbers C1 and C2 separated by new line.
*/
// Start Writing your program from here..!!

#include<stdio.h>

typedef struct
{
    float rel;
    float img;
}complex;

complex add(complex x1, complex c2);
complex subtract(complex c1, complex c2);
complex multiply(complex c1, complex c2);
void display(complex c);
void read(complex *c);

int main()
{
    int i;
    complex c1,c2,res;
    read(&c1);
    read(&c2);
    printf("\nComplex Number C1:\n");
    display(c1);
    printf("\nComplex Number C2:\n");
    display(c2);
    res=add(c1,c2);
    printf("\nSum of Complex Numbers C1 and C2:\n");
    display(res);
    res=subtract(c1,c2);
    printf("\nDifference of Complex Numbers C1 and C2:\n");
    display(res);
    res=multiply(c1,c2);
    printf("\nProduct of Complex Numbers C1 and C2:\n");
    display(res);
    return 0;
}

complex add(complex c1, complex c2)
{
    complex c;
    c.rel=c1.rel+c2.rel;
    c.img=c1.img+c2.img;
    return(c);
}

complex subtract(complex c1, complex c2)
{
    complex c;
    c.rel=c1.rel-c2.rel;
    c.img=c1.img-c2.img;
    return(c);
}

complex multiply(complex c1, complex c2)
{
    complex c;
    c.rel=c1.rel*c2.rel-c1.img*c2.img;
    c.img=c1.rel*c2.img+c1.img*c2.rel;
    return(c);
}

void display(complex c)
{
    if(c.img<0)
        printf("%.2f - i %.2f",c.rel,-c.img);
    else
        printf("%.2f + i %.2f",c.rel,c.img);
}

void read(complex *c)
{
    scanf("%f %f",&c->rel,&c->img);
}