#include <stdio.h>

struct employee
{
    int id;
    char name[20];
    int salary;
};

int main()
{
    struct employee emp1;

    printf("Enter employee id: ");
    scanf("%d", &emp1.id);

    printf("Enter employee name: ");
    scanf("%s", emp1.name);

    printf("Enter employee salary: ");
    scanf("%d", &emp1.salary);

    printf("ID = %d\n", emp1.id);
    printf("Name = %s\n", emp1.name);
    printf("Salary = %d\n", emp1.salary);

    return 0;
}