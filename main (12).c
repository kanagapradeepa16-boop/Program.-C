#include <stdio.h>

struct Book
{
    char title[30];
    char author[20];
    float price;
};

int main()
{
    struct Book b;

    printf("Enter title: ");
    scanf("%s", b.title);

    printf("Enter author: ");
    scanf("%s", b.author);

    printf("Enter price: ");
    scanf("%f", &b.price);

    printf("\nTitle = %s\n", b.title);
    printf("Author = %s\n", b.author);
    printf("Price = %.2f", b.price);

    return 0;
}