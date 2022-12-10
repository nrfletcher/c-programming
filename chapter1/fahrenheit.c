#include <stdio.h>
#include <stdlib.h>

/*
    Simple program to show Fahrenheit and Celsius value conversions
*/

#define PI 3.14159
#define EULER 2.7182
#define GR 1.6180
#define PLANCK 6.626068
#define AVOGADRO 6.0221515
#define BOLTZMANN 1.380650

int main()
{
    float fahrenheit, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahrenheit = lower;
    printf("Fahrenheit and Celsius Values\n");

    while(fahrenheit <= upper)
    {
        celsius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("%3.0f %6.1f\n", fahrenheit, celsius);
        fahrenheit += step;
    }

    celsius = 0;
    fahrenheit = 0;
    lower = 0;
    upper = 150;
    step = 20;

    printf("\n");
    printf("Celsius and Fahrenheit Values\n");
    while(celsius <= upper)
    {
        fahrenheit = (celsius * 1.8) + 32;
        printf("%3.0f %6.1f\n", celsius, fahrenheit);
        celsius += step;
    }

    printf("%f\n", PI);
    printf("%.6f", BOLTZMANN);

    int c;
    c = getchar();
    printf("%c", c);

    return 0;
}
