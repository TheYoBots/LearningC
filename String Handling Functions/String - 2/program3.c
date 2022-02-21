// Strings sorting in alphabetical order

#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main()
{
    int i,j,n;
    char str[10][20],temp[20];
    printf("Enter number of strings: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter a string: ");
        scanf("%s",str[i]);
    }
    printf("Unsorted List:");
    for(i=0;i<n;i++)
    {
        printf("\n%s",str[i]);
    }
    for (i =0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("\nSorted List:");
    for(i=0;i<n;i++)
    {
        printf("\n%s",str[i]);
    }
    return 0;
}