// Command Line Arguments
// Sum of n numbers
// To run this file, you need to compile and convert this file into an
// executable and then run `file_name.exe 1 2 3 ... n` (don't add `.exe`
// in linux) where `file_name` is replaced with the name of the file and
// `1`,`2`,`3` till `n` is replaced with the numbers for which you want to
// find the sum. In the `Executable` dir you can find the respective file
// name for linux and windows to run and get the desired output.

#include<stdio.h>
#include<ctype.h> // for atoi()

int main(int argC, char* argv[])
{
    int a,sum=0,i;
    for(i=1; i<argC; i++)
    {
        a=atoi(argv[i]);
        sum=sum+a;
    }
    printf("Sum = %d",sum);
    return 0;
}