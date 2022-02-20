// Read and write arrays of size n

#include<stdio.h>

int main()
{
    int a[100],i,n;
    printf("Enter the size of array n: ");
    scanf("%d",&n);
    printf("Enter %d elements into array a: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array values are : ");
    for(i=0; i<n; i++)
    {
        printf("\na[%d] = %d",i,a[i]);
    }
    return 0;
}