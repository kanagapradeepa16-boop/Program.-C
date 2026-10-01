#include <stdio.h>

struct Student
{
    int roll;
    char name[20];
    int mark;
};

int main()
{
    struct Student s[2];
    int i;

    for(i = 0; i < 2; i++)
    {
        printf("\nEnter student %d details:\n", i + 1);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Mark: ");
        scanf("%d", &s[i].mark);
    }

    printf("\nStudent Details:\n");

    for(i = 0; i < 2; i++)
    {
        printf("%d %s %d\n",
               s[i].roll, s[i].name, s[i].mark);
    }

    return 0;
}