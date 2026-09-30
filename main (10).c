#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct Employee e;

    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter name: ");
    scanf("%s", e.name);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("\nID = %d\n", e.id);
    printf("Name = %s\n", e.name);
    printf("Salary = %.2f", e.salary);

    return 0;
}