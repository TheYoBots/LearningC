// Sort elements in a 1D array

#include <stdio.h>

int main()
{
    int a[15],i,n,j,temp;
    printf("Enter the size of the list n: ");
    scanf("%d",&n);
    printf("Enter %d elemenst into the array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The unsorted list is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n-1;i++) 
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nThe sorted list is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}