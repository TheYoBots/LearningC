// Binary search
// without ecit using break
// sorted

#include <stdio.h>

int main()
{
    int a[15],i,n,x,lb,ub,mid;
    printf("Enter the size of the list n: ");
    scanf("%d",&n);
    printf("Enter %d elements into the array in sorted order only: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter an element x to serach for: ");
    scanf("%d",&x);
    lb=0;
    ub=n-1;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(x==a[mid])
        {
            printf("The Binary Search is Successful. \n%d is found at a[%d]",x,mid);
            break;
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
    printf("The Binary Search is Unsuccessful. \n%d is not found.",x);
    return 0;
}