// arrays - collection of similar elements
// Compile time initialisation
// Initialising with more values than size


#include <stdio.h>

int main()
{
    int a[4]={10,20,30,40,50,60};
    printf("\na[0] = %d",a[0]);
    printf("\na[1] = %d",a[1]);
    printf("\na[2] = %d",a[2]);
    printf("\na[3] = %d",a[3]); // throws an error but gives result for first 4
    return 0;
}