// Read and Write Structures

#include<stdio.h>

struct Student
{
    char name[20];
    int rollno;
    int age;
    int marks;
    int rank;
};

void main()
{
    struct Student s1;
    scanf("%s %d %d %d %d",s1.name,&s1.rollno,&s1.age,&s1.marks,&s1.rank);
    printf("Details of Student:\nNAME: %s\nROLL NO: %d\nAGE: %d\nMARKS: %d\nRANK: %d",s1.name,s1.rollno,s1.age,s1.marks,s1.rank);
}