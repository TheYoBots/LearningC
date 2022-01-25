// USING WIDTH IN PRINTING FOR INTEGERS.

#include <stdio.h>

int main()
{
    int a=1234;   // ORIGINAL WIDTH OF THIS INPUT IS 4
    printf("\n%d",a);  // OUTPUT => 1234
    printf("\n|%d|",a);  // OUTPUT => |1234|
    printf("\n|%2d|",a); // OUTPUT => |1234| => LESSER WIDTH IS OVERWRITTEN WITH ORIGINAL WIDTH
    printf("\n|%4d|",a); // OUTPUT => |1234|
    printf("\n|%7d|",a); // OUTPUT =>  |    1234|  LEADING SPACES +VE WIDTH
    printf("\n|%-7d|",a); // OUTPUT => |1234   |  TRAILING SPACES IS -vE WIDTH
    printf("\n|%07d|",a);  // OUTPUT => |0001234|
    printf("\n|%-07d|",a);  // OUTPUT => |1234   | => O IS IGNORED WHEN GOES WITH -vE WIDTH
    return 0;
}