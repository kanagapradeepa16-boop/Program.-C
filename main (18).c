#include <stdio.h>

void reverse_array(int *arr, size_t n)
{
    int *left = arr;
    int *right = arr + n - 1;

    while (left < right)
    {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    reverse_array(arr, 5);

    for (int *p = arr; p < arr + 5; p++)
        printf("%d ", *p);

    return 0;
}