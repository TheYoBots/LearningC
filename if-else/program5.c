// else if ladder - picks and executes one choice among multiple choices.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number from 1 to 4: ");
    scanf("%d",&num);
    if(num==1)
        printf("ONE");
    else if(num==2)
        printf("TWO");
    else if(num==3)
        printf("THREE");
    else if(num==4)
        printf("FOUR");
    else
        printf("INVALID INPUT!");
    return 0;
}