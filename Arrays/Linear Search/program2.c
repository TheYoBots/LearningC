// Linear search
// Searching in order/sequentially.
// using break instead of exit.

#include<stdio.h>

int main()
{
    int a[100],i,n,x;
    printf("Enter size of the list n: ");
    scanf("%d",&n);
    printf("\nEnter %d elements into the array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter an element x to search for: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("The Linear Search is successful. \n%d is found at a[%d]",x,i);
            break;
        }
    }
    if(i==n)
    {
        printf("Linear Search is unsuccessful. \n%d is not found",x);
    }
    return 0;
}