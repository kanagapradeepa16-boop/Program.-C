#include <stdio.h>

int main()
{
    int a, b, *p, *q;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p = &a;
    q = &b;

    if(*p < *q)
        printf("Minimum = %d", *p);
    else
        printf("Minimum = %d", *q);

    return 0;
}