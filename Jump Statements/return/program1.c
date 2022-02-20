// return - get the program out of a function

#include <stdio.h>
#include <stdlib.h> // for exit

int main()
{
    int i;
    for(i=1; i<=5; i++)
    {
        printf("\n%d",i);
        if(i==3)
        {
            return(0);
        }
    }
    printf("\nEnd");
    return 0;
}