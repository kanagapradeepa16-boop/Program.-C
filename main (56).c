#include <stdio.h>

union Temperature
{
    float celsius;
    float fahrenheit;
};

int main()
{
    union Temperature t;

    t.celsius = 37.5;
    printf("Celsius = %.1f\n", t.celsius);

    t.fahrenheit = 98.6;
    printf("Fahrenheit = %.1f\n", t.fahrenheit);

    return 0;
}