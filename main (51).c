#include <stdio.h>

int difference(int *a, int *b)
{
    return *a - *b;
}

int main()
{
    int x = 75, y = 25;
    int result;

    result = difference(&x, &y);

    printf("Difference = %d", result);

    return 0;
}