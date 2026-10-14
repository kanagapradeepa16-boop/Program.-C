#include <stdio.h>

int digitSum(int n)
{
    int sum = 0;

    while(n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int main()
{
    printf("Sum = %d", digitSum(1234));
    return 0;
}