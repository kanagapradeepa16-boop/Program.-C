#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *start = a;
    int *end = a + 4;
    int temp, i;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}