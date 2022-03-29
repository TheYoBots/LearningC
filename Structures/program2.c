// Read and Write Structures

#include<stdio.h>

struct Employee
{
    char name[20];
    int id;
    int salary;
    float experience;
    char dept[20];
    char designation[20];
};

void main()
{
    struct Employee e1;
    scanf("%s %d %d %f %s %s",e1.name,&e1.id,&e1.salary,&e1.experience,e1.dept,e1.designation);
    printf("Details of Student:\nNAME: %s\nID: %d\nSALARY: %d\nEXPERIENCE: %.2f\nDEPARTMENT: %s\nDESIGNATION: %s",e1.name,e1.id,e1.salary,e1.experience,e1.dept,e1.designation);
}