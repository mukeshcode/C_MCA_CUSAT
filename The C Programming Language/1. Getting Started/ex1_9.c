// Write a program to copy its input to its output, replacing each string 
// of one or more blanks by a single blank.
// The code fails if you use \t

#include <stdio.h>

int main()
{
    int string;
    int prev_blank;

    while((string = getchar()) != EOF)
    {
        if(!(prev_blank == 1 && string == ' '))
        {
            if(string == ' ') // if the current character is a blank, then for the
                prev_blank = 1;  //next time, we must show, that previously we had blank
            else // if the current character is not a blank, then for the next time
                prev_blank = 0; // we must show, that previously there was no blank
            putchar(string);
        }
    }

    return 0;
}