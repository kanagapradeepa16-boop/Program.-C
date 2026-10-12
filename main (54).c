#include <stdio.h>

union Employee
{
    int id;
    float salary;
};

int main()
{
    union Employee e;

    e.id = 25;
    printf("Employee ID = %d\n", e.id);

    e.salary = 25000.75;
    printf("Salary = %.2f\n", e.salary);

    return 0;
}