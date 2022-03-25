/*)Write a C program to merge two files into a third file.

Test Cases :

input=                                                                           
output=
The contents of merged file are:                                                
Welcome to GRIETThis is PPS Lab  


Input Format: read two input files a.txt and b.txt
Output Format :merge the content of 2 files
Note: file1.txt and file2.txt are predefined. Students need not enter any input..
*/
// Start Writing your program from here..!!

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f1,*f2,*f3;
    char ch;
    f1=fopen("file1.txt", "r");
    if(f1==NULL)
    {
        printf("\ncannot open, file doesn't exist");
        exit(0);
    }
    f3=fopen("merge.txt", "w");
    while((ch=getc(f1))!=EOF)
    {
        putc(ch, f3);
    }
    fclose(f1);
    f2=fopen("file2.txt", "r");
    while((ch=getc(f2))!=EOF)
    {
        putc(ch, f3);
    }
    fclose(f3);
    fclose(f2);
    printf("The contents of merged file are:\n");
    f3=fopen("merge.txt", "r");
    while((ch=getc(f3))!=EOF)
    {
        putchar(ch);
    }
    fclose(f3);
    return 0;
}