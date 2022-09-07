// Using putchar() and getchar()
/*
getchar() = Each time the getchar() function is called
it reads the next input character from a text stream and
returns that as its value.
*/
/*
putchar() = The function putchar() prints a character
each time it is called.
*/

#include <stdio.h>

int main()
{
    char c;

    c = getchar();
    
    putchar(c);

    return 0;
}