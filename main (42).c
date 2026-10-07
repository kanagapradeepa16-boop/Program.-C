#include <stdio.h>

int main()
{
    int a[5], *p, i, count = 0;

    printf("Enter 5 numbers: ");

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    p = a;

    for(i = 0; i < 5; i++)
    {
        if(*(p + i) > 0)
            count++;
    }

    printf("Positive numbers = %d", count);

    return 0;
}