#include <stdio.h>

union Data
{
    int number;
    char letter;
};

int main()
{
    union Data d;

    d.letter = 'A';
    printf("Character = %c\n", d.letter);

    d.number = 100;
    printf("Number = %d\n", d.number);

    return 0;
}