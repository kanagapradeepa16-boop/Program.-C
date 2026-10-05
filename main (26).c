#include <stdio.h>

int main()
{
    int ledPin = 13;

    printf("Enter the LED pin number: ");
    scanf("%d", &ledPin);

    printf("LED pin number = %d", ledPin);

    return 0;
}