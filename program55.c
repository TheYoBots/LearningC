// goto - Unconditional Jump Statements
// backward goto
// Infinite loop!!

#include <stdio.h>

int main()
{
    one:printf("\n1 : One");
    two:printf("\n2 : Two");
    three:printf("\n3 : Three");
    four:printf("\n4 : Four");
    goto two;
    end:printf("\nEnd");
    return 0;
}