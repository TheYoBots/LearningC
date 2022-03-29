// Implement Unions
// It's almost the same as structures

#include<stdio.h>

union Test
{
    int x;
    int y;
};

void main()
{
    int sum;
    union Test t1;
    printf("Size of Union = %ld\n",sizeof(t1)); // sizeof(union Test)
    scanf("%d",&t1.x);
    sum=t1.x;
    scanf("%d",&t1.y);
    sum=sum+t1.y; // Unions don't get stored so value of x is stored in 'sum'
    printf("x = %d\ny = %d\nsum = %d",t1.x,t1.y,sum); // x and y take the value of the last read union
}