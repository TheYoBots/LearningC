// Swapping 2 numbers using functions
// Call by Value

#include<stdio.h>

void swap(int a,int b);

int main()
{
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping a=%d and b=%d",a,b);
    swap(a,b);
    printf("\nAfter swapping in main function a=%d and b=%d",a,b); 
}

void swap(int a,int b) 
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping in function swap a=%d and b=%d",a,b); // doesn't get swapped because no return value
}