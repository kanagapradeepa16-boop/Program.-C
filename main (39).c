#include <stdio.h>

int main()
{
    int n, *p;

    printf("Enter a number: ");
    scanf("%d", &n);

    p = &n;

    if(*p % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}