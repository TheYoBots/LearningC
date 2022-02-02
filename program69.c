// First 'n' terms Fibanocci series

#include <stdio.h>

int main()
{
    int i,n,a=0,b=1,c;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("Fibanocci series: %d, %d",a,b);
    for(i=1; i<=n; i++)
    {
        c=a+b;
        printf(", %d",c);
        a=b;
        b=c;
    }
    return 0;
}