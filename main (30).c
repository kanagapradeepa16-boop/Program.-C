#include <stdio.h>

int main()
{
    float sensor1, sensor2, sensor3, average;

    printf("Enter three sensor readings: ");
    scanf("%f %f %f", &sensor1, &sensor2, &sensor3);

    average = (sensor1 + sensor2 + sensor3) / 3;

    printf("Average sensor reading = %.2f", average);

    return 0;
}