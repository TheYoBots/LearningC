// arrays - collection of similar elements
// Compile time initialisation
// Initialising with all 0s
// DON'T


#include <stdio.h>

int main()
{
    int a[4];
    a={1,2,3,4}; // error. cannot initialise a bulk of values after declaration using arrays
    printf("\na[0] = %d",a[0]);
    printf("\na[1] = %d",a[1]);
    printf("\na[2] = %d",a[2]);
    printf("\na[3] = %d",a[3]);
    return 0;
}