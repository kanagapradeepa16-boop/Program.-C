#include <stdio.h>

#define SIZE 5

struct Buffer
{
    int data[SIZE];
    int writeIndex;
    int count;
    int overflow;
};

int main()
{
    struct Buffer b = {{0}, 0, 0, 0};
    int i, sample;

    for(i = 0; i < 7; i++)
    {
        printf("Enter sample: ");
        scanf("%d", &sample);

        if(b.count == SIZE)
            b.overflow++;
        else
            b.count++;

        b.data[b.writeIndex] = sample;

        b.writeIndex = (b.writeIndex + 1) % SIZE;
    }

    printf("\nBuffer Data:\n");

    for(i = 0; i < SIZE; i++)
        printf("%d ", b.data[i]);

    printf("\nWrite Index: %d\n", b.writeIndex);
    printf("Count: %d\n", b.count);
    printf("Overflow Count: %d\n", b.overflow);

    return 0;
}