// C Program to find the Number of Elements in an Array from the index
// also print the value at each index

#include<stdio.h>

int main()
{
    int a[100],i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
    printf("Size: %d",i);
}