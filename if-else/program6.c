// else if ladder - picks and executes one choice among multiple choices.
/*
Wacp to determine the grade of a student based on the following criteria:
Read marks out of 100.
Marks range  -   grade
100 - 90           O
89 - 75            A
74 - 60            B
59 - 40            C
Otherwise        Fail  => default statment
*/

#include<stdio.h>

int main()
{
    int marks;
    printf("Enter marks of the student: ");
    scanf("%d",&marks);
    if(marks<=100 && marks>=90)
        printf("Grade O");
    else if(marks<=89 && marks>=75)
        printf("Grade A");
    else if(marks<=74 && marks>=60)
        printf("Grade B");
    else if(marks<=59 && marks>=40)
        printf("Grade C");
    else
        printf("Fail");
    return 0;
}