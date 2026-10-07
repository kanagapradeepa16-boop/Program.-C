#include <stdio.h>

int main()
{
    int a[5], *p, i;

    printf("Enter 5 numbers: ");

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    p = a;

    printf("Odd numbers: ");

    for(i = 0; i < 5; i++)
    {
        if(*(p + i) % 2 != 0)
            printf("%d ", *(p + i));
    }

    return 0;
}