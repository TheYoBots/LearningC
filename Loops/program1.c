// While Loops
// Print Hello World 500 times.

#include<stdio.h>

int main()
{
    int i;
    i=1; // Initialization : start-up value/value to start counting from.
    while(i<=500) // Condition
    {
        printf("\nHello World!"); // Statement block - body of the loop.
        i++; // i=i+1; // inc or dec
    }
    printf("\nEnd Loop!"); // Statement x - next statement. Gets executed when the loop statement is false.
    return 0;
}