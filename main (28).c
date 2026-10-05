#include <stdio.h>

int main()
{
    float s1, s2, s3, average;

    printf("Enter the sensor readings: ");
    scanf("%f %f %f", &s1, &s2, &s3);

    average = (s1 + s2 + s3) / 3;

    printf("Average = %.2f", average);

    return 0;
}