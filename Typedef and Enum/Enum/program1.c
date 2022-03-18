// Enum values for days of week.
// Enum automatically assigns values from 0 to n.

#include<stdio.h>

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

int main()
{
    enum week day;
    printf("Monday=%d",Mon);
    printf("\nTuesday=%d",Tue);
    printf("\nWednesday=%d",Wed);
    printf("\nThursday=%d",Thur);
    printf("\nFriday=%d",Fri);
    printf("\nSaturday=%d",Sat);
    printf("\nSunday=%d",Sun);
    return 0;
}