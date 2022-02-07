// arrays - collection of similar elements
// Compile time initialisation
// initialising them induvidually


#include <stdio.h>

int main()
{
    // int a; // one data item
    int a[4]; // group of data item - collection/group of 5 integers
    a[0]=10;
    a[1]=20;
    a[2]=30;
    a[3]=40;
    printf("\na[0] = %d",a[0]);
    printf("\na[1] = %d",a[1]);
    printf("\na[2] = %d",a[2]);
    printf("\na[3] = %d",a[3]);
    return 0;
}