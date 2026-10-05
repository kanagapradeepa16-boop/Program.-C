#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    printf("\nSum = %d", a + b);
    printf("\nSubtraction = %d", a - b);
    printf("\nMultiplication = %d", a * b);
    printf("\nDivision = %d", a / b);
    printf("\nModulus = %d", a % b);

    return 0;
}