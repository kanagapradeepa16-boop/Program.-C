#include <stdio.h>

struct Device
{
    int id;
    int speed;
};

int main()
{
    struct Device d = {101, 50};
    struct Device *ptr = &d;

    printf("Before Update:\n");
    printf("Device ID: %d\n", d.id);
    printf("Speed: %d\n", d.speed);

    ptr->speed = 100;

    printf("\nAfter Update:\n");
    printf("Device ID: %d\n", d.id);
    printf("Speed: %d\n", d.speed);

    return 0;
}