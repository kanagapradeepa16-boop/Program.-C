#include <stdio.h>

struct Sensor {
    int id;
    float reading;
    int enabled;
    int fault;
};

int main() {
    struct Sensor s[3];
    int i;
    float min, max;

    for (i = 0; i < 3; i++) {
        printf("\nEnter Sensor ID: ");
        scanf("%d", &s[i].id);

        printf("Enter Reading: ");
        scanf("%f", &s[i].reading);

        printf("Enabled (1-Yes, 0-No): ");
        scanf("%d", &s[i].enabled);

        printf("Fault (1-Yes, 0-No): ");
        scanf("%d", &s[i].fault);
    }

    min = s[0].reading;
    max = s[0].reading;

    printf("\n--- Sensor Report ---\n");

    for (i = 0; i < 3; i++) {
        if (s[i].reading < min)
            min = s[i].reading;

        if (s[i].reading > max)
            max = s[i].reading;

        if (s[i].fault == 1)
            printf("Faulty Sensor ID: %d\n", s[i].id);
    }

    printf("Minimum Reading: %.2f\n", min);
    printf("Maximum Reading: %.2f\n", max);

    return 0;
}