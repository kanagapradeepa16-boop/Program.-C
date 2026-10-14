#include <stdio.h>

void checkNumber(int n)
{
    if(n > 0)
        printf("Positive Number");
    else if(n < 0)
        printf("Negative Number");
    else
        printf("Zero");
}

int main()
{
    checkNumber(-5);
    return 0;
}