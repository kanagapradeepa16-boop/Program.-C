#include <stdio.h>

struct Product {
    int id;
    int quantity;
    float price;
};

int main() {
    struct Product p[3];
    int i;
    float total;

    for (i = 0; i < 3; i++) {
        printf("Enter product ID: ");
        scanf("%d", &p[i].id);

        printf("Enter quantity: ");
        scanf("%d", &p[i].quantity);

        printf("Enter price: ");
        scanf("%f", &p[i].price);
    }

    total = 0;

    for (i = 0; i < 3; i++) {
        total += p[i].quantity * p[i].price;
    }

    printf("Total Bill = %.2f\n", total);

    return 0;
}