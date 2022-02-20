// Read and write arrays

#include<stdio.h>

int main()
{
    int a[5],i;
    printf("Enter 5 elements into array a: ");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array values are : ");
    for(i=0; i<5; i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}