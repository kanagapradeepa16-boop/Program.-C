#include <stdio.h>

struct Student
{
    int mark1, mark2, mark3;
};

int main()
{
    struct Student s;
    int total;
    float average;

    printf("Enter 3 marks: ");
    scanf("%d %d %d", &s.mark1, &s.mark2, &s.mark3);

    total = s.mark1 + s.mark2 + s.mark3;
    average = total / 3.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f", average);

    return 0;
}