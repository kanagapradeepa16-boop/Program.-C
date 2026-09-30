#include <stdio.h>

struct Student
{
    char name[20];
    int age;
};

int main()
{
    struct Student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter age: ");
    scanf("%d", &s.age);

    printf("Name = %s\n", s.name);
    printf("Age = %d", s.age);

    return 0;
}