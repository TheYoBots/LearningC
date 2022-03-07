// Command Line Arguments
// Sum of two numbers
// To run this file, you need to compile and convert this file into an
// executable and then run `file_name.exe 1 2` (don't add `.exe` in linux)
// where `file_name` is replaced with the name of the file and `1` and `2`
// is replaced with the two numbers for which you want to find the sum.
// In the `Executable` dir you can find the respective file name for linux
// and windows to run and get the desired output.

#include<stdio.h>
#include<ctype.h> // for atoi()

int main(int argC, char* argv[])
{
    int a,b,sum;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    sum=a+b;
    printf("Sum = %d",sum);
    return 0;
}