//Modify the temperature conversion program to print a heading
//above the table.

#include <stdio.h>

int main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = 0.0;

    printf("Fahrenheit      Celsius\n");
    while(fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%10.2f  %11.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}