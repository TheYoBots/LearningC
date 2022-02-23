/*Write a C program to read first name , middle name and last name of a student and display
a string full name without using string handling functions.


Test Cases :

input =Aditya                                                                          
Roy                                                                             
Kapoor                                                                          
output = 
Full Name:Aditya Roy Kapoor
 
Input Format: Read the input as 3 strings.
Output Format :Print the Full Name.
Note - Display Full Name:%s
*/
// Start Writing your program from here..!!


#include <stdio.h>

int main()
{
    char s1[20],s2[10],s3[20];
    int i,j;
    scanf("%s %s %s",s1,s2,s3);
    for(i=0;s1[i]!='\0';i++);
    s1[i]=' ';
    for(i=i+1,j=0;s2[j]!='\0';j++,i++)
    {
        s1[i]=s2[j];
    }
    s1[i]='\0';
    s1[i]=' ';
    for(i=i+1,j=0;s3[j]!='\0';j++,i++)
    {
        s1[i]=s3[j];
    }
    s1[i]='\0';
    printf("Full Name:%s",s1);
    return 0;
}