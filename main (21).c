#include <stdio.h>
#include <stddef.h>

size_t custom_strnlen(const char *str, size_t max_cap)
{
    size_t i = 0;

    while (i < max_cap && str[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char str[] = "Embedded";

    size_t length = custom_strnlen(str, 20);

    printf("String length = %zu\n", length);

    return 0;
}