// Chain of Pointers

#include<stdio.h>

void main()
{
    int a=5;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    int ****s=&r;
    printf("a = %d %d %d %d %d",a,*p,**q,***r,****s);
}