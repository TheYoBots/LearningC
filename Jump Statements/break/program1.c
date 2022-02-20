// break - jump statement used to get the control out of switch or loop.

#include <stdio.h>

int main()
{
    int i;
    for(i=1; i<=5; i++)
    {
        printf("\ni = %d",i);
        break; // only prints i = 1
    }
    printf("\nEnd");
    return 0;
}