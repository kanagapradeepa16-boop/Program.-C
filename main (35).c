#include <stdio.h>

void swap(int a, int b)
{
    int c;

    c = a;
    a = b;
    b = c;
}

int main()
{
    int a = 10;
    int b = 20;

    swap(a, b);

    printf("After swapping: %d %d", a, b);

    return 0;
}