// break - jump statement used to get the control out of switch or loop.

#include <stdio.h>

int main()
{
    int i;
    for(i=1; i<=5; i++)
    {
        printf("\ni = %d",i);
        if(i==3)
        break; // only prints till i = 3
    }
    printf("\nEnd");
    return 0;
}