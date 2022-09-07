// Verify that the expression getchar() != EOF is 0 or 1.

#include <stdio.h>

int main()
{
    
    printf("%d", getchar() != EOF);

    return 0;
}

// here, the output will be 0 or 1 as either the character would be either the
// EOF or not the EOF. So, if it is not the end of file then it outputs 1 and if it
// is the end of file, it outputs 0. 