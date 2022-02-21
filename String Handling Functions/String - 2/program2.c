// Search in strings

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    char str[10][20],name[20];
    printf("Enter number of strings n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter a string: ");
        scanf("%s",str[i]);
    }
    printf("Enter a string to search for: ");
    scanf("%s",name);
    for (i =0;i <n;i++)
    {
        if(strcmp(str[i],name)==0)
        {
            printf("%s is found in the list of strings at str[%d].",name,i);
            exit(0);
        }
    }
    printf("%s is not found in the list of strings.",name);
    return 0;
}