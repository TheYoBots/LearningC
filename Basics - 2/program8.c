// Using width in printing formats for group of caharcters => strings.
// %s => %w.ps  => w is width (tot spaces) , p => precesion => no of  chars to be printed from the given string.

#include <stdio.h>

int main()
{
    char a[10]="Hello"; // To declare and initialise a string.
    printf("\n%s",a);        // Hello
    printf("\n|%s|",a);      // |Hello|
    printf("\n|%10s|",a);    // |    Hello|
    printf("\n|%-10s|",a);   // |Hello    |
    printf("\n|%.2s|",a);    // |He|
    printf("\n|%10.3s|",a);  // |      Hel|
    printf("\n|%-10.3s|",a); // |Hel       | 
    return 0;
}