// goto - Unconditional Jump Statements
// forward goto

#include <stdio.h>

int main()
{
    one:printf("\n1 : One");
    goto four;
    two:printf("\n2 : Two");
    three:printf("\n3 : Three");
    four:printf("\n4 : Four");
    end:printf("\nEnd");
    return 0;
}