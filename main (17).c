#include <stdio.h>

void array_stats(const int *arr, size_t n,
                 int *out_min, int *out_max, long *out_sum)
{
    *out_min = arr[0];
    *out_max = arr[0];
    *out_sum = 0;

    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] < *out_min)
            *out_min = arr[i];

        if (arr[i] > *out_max)
            *out_max = arr[i];

        *out_sum += arr[i];
    }
}

int main()
{
    int arr[] = {10, 20, 5, 30, 15};
    int min, max;
    long sum;

    array_stats(arr, 5, &min, &max, &sum);

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
    printf("Sum = %ld\n", sum);

    return 0;
}