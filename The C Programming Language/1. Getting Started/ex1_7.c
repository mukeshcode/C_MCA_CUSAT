// Write a program to print the value of EOF.

#include <stdio.h>

int main()
{
    printf("%d", EOF);
    putchar(EOF);
    return 0;
}
// The value of EOF is printing as -1 when printed as integer.
// It is not printing any character when it is printed as a character.
/*
putchar() is used to print character but EOF is not a character and is used to
indicate the End Of File. Actually, it is a MACRO defined in stdio.h whose value is
-1.
*/