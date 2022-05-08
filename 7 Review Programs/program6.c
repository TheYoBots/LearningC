// C Program to seperate Positive and Negative Numbers of an Array

#include<stdio.h>

int main()
{
    int a[100],n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>0)
            printf("\n%d is Positive.",a[i]);
        else if(a[i]<0)
            printf("\n%d is Negative.",a[i]);
        else
            printf("\n%d is Neither Positive nor Negative.",a[i]);
    }
    return 0;
}