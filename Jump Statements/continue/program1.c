// continue - jump statement used in loops only.
// skips the current iteration and proceed with the next iteration.
// statements present after continue are not executed and loop procedes with next value with inc/dec.

#include <stdio.h>

int main()
{
    int i;
    for(i=1; i<=5; i++)
    {
        printf("\nStart \t"); // runs for 5 times.
        continue; // skips i = %d.
        printf("i = %d",i);
    }
    printf("\nEnd");
    return 0;
}