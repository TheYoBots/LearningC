// Sum and Average of 'n' elements of an array

#include<stdio.h>

int main()
{
    int a[100],i,n,sum=0;
    float avg;
    printf("Enter the size of array n: ");
    scanf("%d",&n);
    printf("Enter %d elements into array a: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        avg=(float)sum/n;
    }
    printf("The array values are : ");
    for(i=0; i<n; i++)
    {
        printf("\na[%d] = %d",i,a[i]);
    }
    printf("\nSum of elements = %d \nAverage of elements = %f",sum,(float)(sum)/n);
    return 0;
}