// Functions in C

#include <stdio.h>

int MaxOfFour(int a, int b, int c, int d);

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int ans=MaxOfFour(a,b,c,d);
    printf("%d",ans);
    return 0;
}

int MaxOfFour(int a,int b,int c,int d)
{
    int max4;
    max4=(a>b?(a>c?a:c):(b>c?b:c))>d?(a>b?(a>c?a:c):(b>c?b:c)):d; // this can be improved
    return(max4);
}