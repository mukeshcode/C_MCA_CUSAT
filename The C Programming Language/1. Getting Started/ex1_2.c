// Experiment to find out what happens when printf's argument string contains 
// \c, where c is some character not listed above.

#include <stdio.h>

int main()
{
    printf("The string contains \c for the experiment");
    
    return 0;
}

/*
The compilation presents a warning stating "unknown escape sequence : \c"
The string is displayed as it is in the output removing the '\' character from '\c'
*/