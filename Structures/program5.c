// Arrays within Structures
// Read and write details of a student

#include<stdio.h>

struct Student
{
    int rollno;
    char name[20];
    int marks[3];
};

void main()
{
    struct Student s1;
    int tot=0,i;
    scanf("%d %s",&s1.rollno,s1.name);
    for(i=0; i<3; i++)
    {
        scanf("%d",&s1.marks[i]);
        tot=tot+s1.marks[i];
    }
    printf("ROLL NO\t\tNAME\t\tTOTAL\n");
    printf("%d\t\t%s\t\t%d",s1.rollno,s1.name,tot);
}