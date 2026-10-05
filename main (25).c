#include <stdio.h>

int main()
{
    float temperature;

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    printf("Temperature = %.2f Celsius", temperature);

    return 0;
}