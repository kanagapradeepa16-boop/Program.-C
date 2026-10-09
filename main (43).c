#include <stdio.h>

struct Address
{
    char city[20];
    int pincode;
};

struct Student
{
    char name[20];
    int age;
    struct Address address;
};

int main()
{
    struct Student s;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter age: ");
    scanf("%d", &s.age);

    printf("Enter city: ");
    scanf("%s", s.address.city);

    printf("Enter pincode: ");
    scanf("%d", &s.address.pincode);

    printf("\nName = %s\n", s.name);
    printf("Age = %d\n", s.age);
    printf("City = %s\n", s.address.city);
    printf("Pincode = %d", s.address.pincode);

    return 0;
}