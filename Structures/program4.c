// Array of Structures
// Read and display details of n employees

#include<stdio.h>

struct Employee
{
    int id;
    char name[20];
    int sal;
};

void main()
{
    struct Employee e[20];
    int i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %s %d",&e[i].id,e[i].name,&e[i].sal);
    }
    printf("ID\tNAME\t\tSALARY");
    for(i=0; i<n; i++)
    {
        printf("\n%d\t%s\t\t%d",e[i].id,e[i].name,e[i].sal);
    }
}