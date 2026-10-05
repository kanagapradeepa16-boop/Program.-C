#include <stdio.h>

int main()
{
    int length, width, area;

    printf("Enter the length: ");
    scanf("%d", &length);

    printf("Enter the width: ");
    scanf("%d", &width);

    area = length * width;

    printf("Area of rectangle = %d", area);

    return 0;
}