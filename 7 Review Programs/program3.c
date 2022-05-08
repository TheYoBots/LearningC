// C Program to print an Alphabet Triangle

#include <stdio.h>

int main()
{
    int n,i,s,j,k=65;
    scanf("%d",&n);
    if(n<7)
    {
        for(i=1;i<=n;i++)
        {
            for(s=1;s<=n-i;s++)
            {
                printf("  ");
            }
            for(j=1;j<=i;j++)
            {
                printf(" %c  ",k++);
            }
            printf("\n");
        }
    }
    else
        printf("Invalid input! \nThere are only 26 alphabets.");
    return 0;    
}