// Passing character arrays to a function

#include<stdio.h>

void display(char s1[]);

int main()
{
    char string[15]="Hello World!";
    printf("Passing character array");
    display(string);
    return 0;
}

void display(char s1[])
{
    printf("\nString = %s",s1);
}