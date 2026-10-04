#include <stdio.h>

const int *find_element(const int *arr, size_t n, int key)
{
    const int *p = arr;

    while (p < arr + n)
    {
        if (*p == key)
            return p;

        p++;
    }

    return NULL;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;

    const int *result = find_element(arr, 5, key);

    if (result != NULL)
        printf("Element found = %d\n", *result);
    else
        printf("Element not found\n");

    return 0;
}