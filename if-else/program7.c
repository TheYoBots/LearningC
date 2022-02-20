/*
Write a C program to determine the grade of a student based on the following criteria:
Read marks out of 100 for three subjects and calculate the avg.

average range -  grade
100 - 90           O
89 - 75            A
74  - 60           B
59 - 40            C
Otherwise        Fail => default statEment
*/

#include<stdio.h>

int main()
{
    int a,b,c;
    float avg;
    printf("Enter the students marks in three subjects: ");
    scanf("%d %d %d",&a,&b,&c);
    avg=(a+b+c)/(float)(3);
    if(avg<=100 && avg>=90)
        printf("Grade O");
    else if(avg<=89 && avg>=75)
        printf("Grade A");
    else if(avg<=74 && avg>=60)
        printf("Grade B");
    else if(avg<=59 && avg>=40)
        printf("Grade C");
    else
        printf("Fail");
    return 0;
}