// arrays - collection of similar elements
// Compile time initialisation
// Partial initialisation


#include <stdio.h>

int main()
{
    int a[4]={10,20};
    printf("\na[0] = %d",a[0]);
    printf("\na[1] = %d",a[1]);
    printf("\na[2] = %d",a[2]);
    printf("\na[3] = %d",a[3]); // uninitialised values become 0
    return 0;
}