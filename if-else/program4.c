// Nested if else
// Print smaller of  3 numbers

#include <stdio.h>

int main ()
{
    int x,y,z;
    printf ("Enter 3 numbers: ");
    scanf ("%d %d %d",&x,&y,&z);
    if (x < y)
    {
        if (x < z)
        {
            printf ("x = %d is smaller",x);
        }
        else
        {
            printf ("z = %d is smaller",z);
        }
    }
    else
    {
        if (y < z)
        {
            printf ("y = %d is smaller",y);
        }
        else
        {
            printf ("z = %d is smaller",z);
        }
    }
    printf ("\nEND");
    return 0;
}