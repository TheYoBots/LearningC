/*9b)Write a C program to sort the names of n students in the alphabetical order.

Test Cases :

Test Cases :
input =4                                                                               
Raghu                                                                           
Tiya                                                                            
Nitya                                                                           
Divya                                                                           

UNSORTED LIST                                                                   
Raghu                                                                           
Tiya                                                                            
Nitya                                                                           
Divya                                                                           
SORTED LIST                                                                     
Divya                                                                           
Nitya                                                                           
Raghu                                                                           
Tiya 

Input Format: Read number of strings in first line followed by individual student names each in a new line.
Output Format :Display the UNSORTED LIST seperated by newline.
then Display the SORTED LIST seperated by newline.

*/
// Start Writing your program from here..!!

#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main()
{
    int i,j,n;
    char str[10][20],temp[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    printf("UNSORTED LIST");
    for(i=0;i<n;i++)
    {
        printf("\n%s",str[i]);
    }
    for (i =0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("\nSORTED LIST");
    for(i=0;i<n;i++)
    {
        printf("\n%s",str[i]);
    }
    return 0;
}