// C program to print all numbers from 1 to 30 without multiples of three

#include <stdio.h>

int main()
{
    int i;
    for(i=1; i<=30; i++)
    {
        if(i%3!=0)
        printf("\n%d",i);
    }
    printf("\nEnd of loop!");
    return 0;
}