// Enum values for days of week.
// Enum automatically assigns values from 0 to n.

#include<stdio.h>

enum week{Mon=1, Tue, Wed, Thur, Fri, Sat, Sun};

int main()
{
    enum week day;
    for(day=Mon;day<=Sun;day++)
    {
        printf("\nDay = %d",day);
    }
    return 0;
}