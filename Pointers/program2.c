// Pointers
// Read and write 1D arrays

#include<stdio.h>

void main()
{
    int a[100],i,n;
    int *p;
    p=&a[0];
    printf("Enter number of integers n: ");
    scanf("%d",&n);
    printf("Enter %d integers: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",(p+i));
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n",*(p+i)); // write all elements read
    }
}