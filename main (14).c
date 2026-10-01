#include <stdio.h>

struct Employee
{
    char name[20];
    float salary;
    float bonus;
};

int main()
{
    struct Employee e;
    float total;

    printf("Enter name: ");
    scanf("%s", e.name);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Enter bonus: ");
    scanf("%f", &e.bonus);

    total = e.salary + e.bonus;

    printf("Name = %s\n", e.name);
    printf("Total Salary = %.2f", total);

    return 0;
}