#include <stdio.h>

struct Student {
    char name[30];
    int marks;
};

int main() {
    struct Student s[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter student name: ");
        scanf("%29s", s[i].name);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\nStudent Details\n");

    for (i = 0; i < 3; i++) {
        printf("%s - %d\n", s[i].name, s[i].marks);
    }

    return 0;
}