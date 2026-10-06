#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 35, 60, 15};
    int max, min;
    int *p;

    p = a;

    min = *p;
    max = *p;

    for(int i = 0; i < 5; i++)
    {
        if(*(p + i) < min)
        {
            min = *(p + i);
        }

        if(*(p + i) > max)
        {
            max = *(p + i);
        }
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}