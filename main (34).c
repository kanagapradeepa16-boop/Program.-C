#include <stdio.h>

void count()
{
    static int a = 0;

    a++;
    printf("%d\n", a);
}

int main()
{
    count();
    count();
    count();

    return 0;
}