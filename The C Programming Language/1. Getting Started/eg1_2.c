// Using getchar() and putchar() for file copying.
/*
read a character
while(character is not end-of-file indicator)
    output the character just read
    read a character
*/

#include <stdio.h> // standard i/o library

int main() // the program execution starts from here
{
    int c;
    /*
    The problem is distinguishing the end of the input from valid data. The
    solution is that getchar returns a distinctive value when there is no more
    input, a value that cannot be confused with any real character. This value is called
    EOF, for "end of file". We must declare 'c' to be a type big enough to hold
    any value that getchar returns. We can't use char since c must be nig enough to hold
    EOF in addition to any possible char. Therefore we used int.
    */

    c = getchar();
    putchar(c);
    while(c != EOF)  //EOF is an integer defined in <stdio.h>
    {
        putchar(c);
        c = getchar();
    }

    // copy input to output second version

    // while ((c = getchar()) != EOF)
    //     putchar(c);
    

    return 0; // to send the status of successful execution of the program
}