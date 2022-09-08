// Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

int main()
{
    int c, nl, nb, nt; // nl = no. of lines, nb = no. of blanks, nt = no. of  tabs

    nl = nt = nb = 0;

    while((c = getchar()) != EOF)
    {
        // printf("In the loop\n");
        if(c == '\n')
            nl++;
        else if(c == ' ')
            nb++;
        else if(c == '\t')
            nt++;
           
    }
    printf("Lines : %d\n", nl);
    printf("Tabs : %d\n", nt);
    printf("Spaces : %d\n", nb);

    
    return 0;
}

/*
Standard C input functions only start processing what you type once you press the Enter
Key. Every key you press adds a character to the system buffer. Then when the line is complete
(i.e. you press Enter), these characters are moved to the C standard  buffer. getchar() reads the
first character in the buffer, which also removes it from the buffer. Each successive call
to the getchar(), reads and removes the next char and so on. If you don't read every character
that you have typed into the keyboard buffer, but instead enter another line of text, then the
next call to getchar() after that will continue reading the characters left over from the previous
line; you will usually witness this as the program blowing past your second input.
*/