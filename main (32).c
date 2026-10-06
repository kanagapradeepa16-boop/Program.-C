#include <stdio.h>

struct employee
{
    int id;
    char name[20];
    int salary;
};

int main()
{
    struct employee employee1 = {101, "Kavi", 95000};

    printf("%d\n", employee1.id);
    printf("%s\n", employee1.name);
    printf("%d\n", employee1.salary);

    return 0;
}