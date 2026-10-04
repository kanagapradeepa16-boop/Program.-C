#include <stdio.h>
#include <stddef.h>

size_t filter_sensor_data(int *arr, size_t n,
                          int min_val, int max_val)
{
    int *write = arr;

    for (int *read = arr; read < arr + n; read++)
    {
        if (*read >= min_val && *read <= max_val)
        {
            *write = *read;
            write++;
        }
    }

    return write - arr;
}

int main()
{
    int arr[] = {10, 50, 120, 30, 200, 70};

    size_t n = filter_sensor_data(arr, 6, 20, 100);

    printf("Valid readings:\n");

    for (size_t i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}