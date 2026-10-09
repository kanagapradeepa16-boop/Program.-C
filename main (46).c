#include <stdio.h>

struct Student
{
    char name[20];
    int mark;
};

int main()
{
    struct Student s[3];
    int i, high = 0;

    for(i = 0; i < 3; i++)
    {
        printf("Enter name and mark: ");
        scanf("%s %d", s[i].name, &s[i].mark);
    }

    for(i = 1; i < 3; i++)
    {
        if(s[i].mark > s[high].mark)
            high = i;
    }

    printf("Highest Mark = %d\n", s[high].mark);
    printf("Student = %s", s[high].name);

    return 0;
}