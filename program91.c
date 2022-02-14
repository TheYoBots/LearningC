// Binary search
// unsorted

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int a[15],i,n,x,lb,ub,mid,temp,j;
    printf("Enter the size of the list n: ");
    scanf("%d",&n);
    printf("Enter %d elemenst into the array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter an element x to serach for: ");
    scanf("%d",&x);
    // sort unsorted list
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
    printf("The sorted list: ");  
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    // binary search
    lb=0;
    ub=n-1;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(x==a[mid])
        {
            printf("\nThe Binary Search is Successful. \n%d is found at a[%d]",x,mid);
            exit(0);
        }
        else if(x<a[mid])
        {
            ub=mid-1;   
        }
        else if(x>a[mid])
        {
            lb=mid+1;   
        }
    }
    if(lb>ub)
    printf("\nThe Binary Search is Unsuccessful. \n%d is not found.",x);
    return 0;
}