// Write a program to print the corresponding Celsius to
// Fahrenheit table.

#include <stdio.h>

int main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = 0, upper = 300, step = 20;

    celsius = lower;

    printf("Celsius    Fahrenheit\n");
    while(celsius <= upper)
    {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%7.1f %13.1f\n", celsius, fahr);
        celsius = celsius + 20.0;
    }
    return 0;
}