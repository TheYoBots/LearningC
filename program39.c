// for Loops
// Print Hello World 500 times.

#include <stdio.h>

int main()
{
    int i;
    for(i=1; i<=500; i++) //  1.initilization ;  2. condition ;  4. inc /dec 
    {
        printf("\nHello World"); // 3. stattement block -- body fo the loop
    } 
    printf("\nEND"); // this gets executed when the loop condition is false -- statement x - next stmt 
    return 0;
}