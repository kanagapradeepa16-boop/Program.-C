#include <stdio.h>

struct Consumer {
    int id;
    int units;
    float bill;
};

int main() {
    struct Consumer c[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter consumer ID: ");
        scanf("%d", &c[i].id);

        printf("Enter units: ");
        scanf("%d", &c[i].units);

        if (c[i].units <= 100) {
            c[i].bill = c[i].units * 1.5;
        } else {
            c[i].bill = 150 +
                (c[i].units - 100) * 2.5;
        }
    }

    printf("\nElectricity Bill Details\n");

    for (i = 0; i < 3; i++) {
        printf("ID: %d Bill: Rs.%.2f\n",
               c[i].id, c[i].bill);
    }

    return 0;
}