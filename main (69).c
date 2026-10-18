#include <stdio.h>

int main()
{
    int a = 7;

    a = a & ~(1 << 1);

    printf("Result = %d", a);

    return 0;
}