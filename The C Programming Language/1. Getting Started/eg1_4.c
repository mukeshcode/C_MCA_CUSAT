// Character counting program using a for loop and the counter variable as a double datatype
// The programs should act intelligently when given zero length input.
#include <stdio.h>

int main()
{
    double nc;

    for(nc = 0; getchar() != EOF; ++nc)
        ;

    printf("%.0lf\n", nc);
    //.0f suppresses printing of the decimal point and the fraction part, which is zero. 
    return 0;
}

/*
The body of this for loop is empty, because all the work is done in the test and incremental parts.
But the grammatical rules of C require that a for statement have a body. The isolated semicolon, called
a null statement, is there to satisfy that requirement. We put it on a separate line to make
it visible.
*/