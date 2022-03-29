// Size of Structure = Sum of sizes of all its data members

#include<stdio.h>

struct Employee
{
    int id;
    char name[20];
    int sal;
};

void main()
{
    struct Employee e1;
    printf("Size of struct = %ld",sizeof(e1));
    printf("\nSize of struct = %ld",sizeof(struct Employee)); // second method
}