// Character counting program
// Use Ctrl + z to show that you are done with your input
#include <stdio.h>

//count characters in input, 1st version
int main()
{
    long nc;

    nc = 0;
    while(getchar() != EOF)
    {   
        nc = nc + 1;
        printf("NC = %d", nc);
    }
    printf("%ld\n", nc);

    return 0;
}