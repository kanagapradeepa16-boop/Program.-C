#include <stdio.h>

struct Product
{
    int id;
    int stock;
};

int main()
{
    struct Product p[3] = {
        {101, 10},
        {102, 20},
        {103, 30}
    };

    int id, newStock, i, found = 0;

    printf("Enter Product ID: ");
    scanf("%d", &id);

    for(i = 0; i < 3; i++)
    {
        if(p[i].id == id)
        {
            found = 1;

            printf("Enter new stock: ");
            scanf("%d", &newStock);

            if(newStock >= 0)
            {
                p[i].stock = newStock;
                printf("Stock updated successfully!\n");
                printf("Product ID: %d\n", p[i].id);
                printf("Stock: %d\n", p[i].stock);
            }
            else
            {
                printf("Invalid stock!\n");
            }

            break;
        }
    }

    if(found == 0)
        printf("Product not found!\n");

    return 0;
}