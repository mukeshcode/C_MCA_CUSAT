// In C, any assignment, is an expression and has a value,
// which is the value of the left hand side after the assignment.

#include <stdio.h>

int main()
{
    int a;

    if(a=65)
        putchar(a);
    else
        putchar(0);

    return 0;
}