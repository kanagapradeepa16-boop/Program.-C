#include <stdio.h>

int main()
{
    int n, *p;

    printf("Enter a number: ");
    scanf("%d", &n);

    p = &n;

    printf("Cube = %d", (*p) * (*p) * (*p));

    return 0;
}