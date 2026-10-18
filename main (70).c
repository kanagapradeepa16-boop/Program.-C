#include <stdio.h>

int main()
{
    int a = 5;

    if (a & (1 << 2))
        printf("Bit is SET");
    else
        printf("Bit is CLEAR");

    return 0;
}