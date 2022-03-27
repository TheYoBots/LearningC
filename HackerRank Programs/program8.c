// 1D Arrays in C

#include <stdio.h>

int main() {
    int a[100000],n,sum=0,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}