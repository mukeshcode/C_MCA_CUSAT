// Modify the temperature conversion program to print the table
// in reverse order, that is, from 300 degrees to 0.

#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main()
{
    float celsius, fahr;

    printf("Fahrenheit    Celsius\n");
    for(fahr=UPPER; fahr>=LOWER; fahr= fahr-STEP)
    {
        celsius = 5.0/9.0 * (fahr - 32);
        printf("%10.1f %10.1f\n", fahr, celsius);
    }
    return 0;
}