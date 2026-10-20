#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[30];
    char phone[15];
};

int main()
{
    struct Contact c[3];
    char searchName[30];
    int i, found = 0;

    for(i = 0; i < 3; i++)
    {
        printf("Enter name: ");
        scanf("%29s", c[i].name);

        printf("Enter phone number: ");
        scanf("%14s", c[i].phone);
    }

    printf("\nEnter name to search: ");
    scanf("%29s", searchName);

    for(i = 0; i < 3; i++)
    {
        if(strcmp(c[i].name, searchName) == 0)
        {
            printf("\nContact Found!\n");
            printf("Name: %s\n", c[i].name);
            printf("Phone: %s\n", c[i].phone);

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Contact not found!\n");

    return 0;
}