#include <stdio.h>

int main()
{
    char name[50];
    char dept[30];
    char college[50];

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter department: ");
    scanf("%s", dept);

    printf("Enter college: ");
    scanf("%s", college);

    printf("\nName = %s", name);
    printf("\nDepartment = %s", dept);
    printf("\nCollege = %s", college);

    return 0;
}