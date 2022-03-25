/*Create a structure student with name ,rollno,marks of 3 subjects as members . Write a c
program to sort student details based on total using structures and functions .

Test Cases :

Input = 3
101 satya
90 20 19

102 mugdha
45 50 80

103 ravi
90 70 38
Output: 
Rank    ROLLNO  STUDENT NAME    TOTAL MARKS
1       103     ravi            198
2       102     mudgha          175
3       101     satya           129
   


Input Format: Read number of students (integer) in first line, in second line read student roll no and name, in third line
read marks of 3 subject separated by space, repeat the process for n number of students.
Output Format: as given in the test case above.
*/
// Start Writing your program from here..!!

#include<stdio.h>

struct student{
    int rollno;
    char name[20];
    int marks[3];
    int total;
};

void StudentSort(struct student s[], int n);

int main()
{
    int i,j,n;
    struct student s[10];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %s",&s[i].rollno,s[i].name);
        s[i].total=0;
        for(j=0; j<3; j++)
        {
            scanf("%d",&s[i].marks[j]);
            s[i].total=s[i].total+s[i].marks[j];
        }
    }
    StudentSort(s,n);
    return 0;
}

void StudentSort(struct student s[], int n)
{
    struct student temp;
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(s[i].total<s[j].total)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("Rank\tROLLNO\tSTUDENT NAME\tTOTAL MARKS\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t%d\t%s\t\t%d\n",i+1,s[i].rollno,s[i].name,s[i].total);
    }
}