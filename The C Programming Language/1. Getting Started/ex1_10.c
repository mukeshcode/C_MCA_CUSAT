// Write a program to copy its input to its output, replacing each tab
// \t, each backspace by \b, and each backslash by \\. This makes
// tabs and backspaces visible in an unambiguous way.

#include <stdio.h>

int main()
{
    int string;
    int n = 0;

    while((string = getchar()) != EOF)
    {   
        if(string == '\t')
        {
            putchar('\\');
            putchar('t'); 
        }
        else if(string == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else if(string == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else
            putchar(string);
    }
    printf("No. of characters : %d", n);

    return 0;
}