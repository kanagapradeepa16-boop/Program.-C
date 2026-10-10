#include <stdio.h>

int main()
{
    char str[] = "education";
    char *p = str;
    int count = 0;

    while (*p != '\0')
    {
        if (*p == 'a' || *p == 'e' ||
            *p == 'i' || *p == 'o' ||
            *p == 'u')
        {
            count++;
        }

        p++;
    }

    printf("Vowels = %d", count);

    return 0;
}