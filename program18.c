/*
Rules of expressions in c.
As per BODMAS the answer should be 7, but as per the rules of expressions in c the answer is 8
*/

#include <stdio.h>

int main()
{
    int i;
    i=2*3/4+4/4+8-2+5/8;
    printf("%d",i);
    return 0;
}