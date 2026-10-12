#include <stdio.h>

union Device
{
    int device_id;
    float voltage;
    char status;
};

int main()
{
    union Device d;

    d.device_id = 101;
    printf("Device ID = %d\n", d.device_id);

    d.voltage = 12.5;
    printf("Voltage = %.1f V\n", d.voltage);

    d.status = 'A';
    printf("Status = %c\n", d.status);

    return 0;
}