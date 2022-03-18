// Enum values for days of week.
// Enum automatically assigns values from 0 to n.

#include<stdio.h>

enum week{Mon, Tue, Wed, Thur=6, Fri, Sat, Sun};

int main()
{
    enum week day;
    printf("Monday=%d",Mon); // 0
    printf("\nTuesday=%d",Tue); // 1
    printf("\nWednesday=%d",Wed); // 2
    printf("\nThursday=%d",Thur); // 6
    printf("\nFriday=%d",Fri); // 7
    printf("\nSaturday=%d",Sat); // 8
    printf("\nSunday=%d",Sun); // 9
    return 0;
}