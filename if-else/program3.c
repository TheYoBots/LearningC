// if else
// Print smaller of two numbers.

#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&x,&y);
    if(x<y)
    {
        printf("x = %d is smaller",x);  
    }
    else{   
        printf("\ny = %d is smaller",y);
    }
    printf("\nEND");  
    return 0;
}