#include <stdio.h>

union Student
{
    int rollno;
    float mark;
};

int main()
{
    union Student s;

    s.rollno = 101;
    printf("Roll Number = %d\n", s.rollno);

    s.mark = 85.5;
    printf("Mark = %.2f\n", s.mark);

    return 0;
}