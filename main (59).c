#include <stdio.h>

struct Employee {
    int id;
    float salary;
};

int main() {
    struct Employee e[3];
    int i;
    float total = 0;

    for (i = 0; i < 3; i++) {
        printf("Enter employee ID: ");
        scanf("%d", &e[i].id);

        printf("Enter salary: ");
        scanf("%f", &e[i].salary);

        total += e[i].salary;
    }

    printf("\nEmployee Details\n");

    for (i = 0; i < 3; i++) {
        printf("ID: %d Salary: %.2f\n",
               e[i].id, e[i].salary);
    }

    printf("Total Salary = %.2f\n", total);

    return 0;
}