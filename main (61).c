#include <stdio.h>

struct Student {
    char name[30];
    int mark;
};

int main() {
    struct Student s[3];
    int i, highest = 0, position = 0;

    for (i = 0; i < 3; i++) {
        printf("Enter name: ");
        scanf("%29s", s[i].name);

        printf("Enter mark: ");
        scanf("%d", &s[i].mark);

        if (i == 0 || s[i].mark > highest) {
            highest = s[i].mark;
            position = i;
        }
    }

    printf("Highest Mark Student: %s\n",
           s[position].name);

    printf("Highest Mark: %d\n", highest);

    return 0;
}