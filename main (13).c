#include <stdio.h>

struct Student
{
    int mark1;
    int mark2;
};

void total(struct Student s)
{
    printf("Total = %d", s.mark1 + s.mark2);
}

int main()
{
    struct Student s;

    printf("Enter two marks: ");
    scanf("%d %d", &s.mark1, &s.mark2);

    total(s);

    return 0;
}