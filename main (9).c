#include <stdio.h>

struct Student
{
    int roll;
    int mark;
};

int main()
{
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter mark: ");
    scanf("%d", &s.mark);

    printf("Roll Number = %d\n", s.roll);
    printf("Mark = %d", s.mark);

    return 0;
}
