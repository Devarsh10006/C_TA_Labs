#include "stdio.h"

struct Student
{
    int id;
    float marks;
    char grade;
};

union StudentData
{
    int id;
    float marks;
    char grade;
};

int main()
{
    struct Student s;
    union StudentData u;

    // Structure
    s.id = 101;
    s.marks = 85.5;
    s.grade = 'A';

    printf("Structure:\n");
    printf("ID = %d\n", s.id);
    printf("Marks = %.2f\n", s.marks);
    printf("Grade = %c\n", s.grade);

    // Union
    u.id = 101;
    printf("\nUnion:\n");
    printf("ID = %d\n", u.id);

    u.marks = 85.5;
    printf("Marks = %.2f\n", u.marks);

    u.grade = 'A';
    printf("Grade = %c\n", u.grade);

    printf("\nSize of Structure = %zu bytes\n", sizeof(s));
    printf("Size of Union = %zu bytes\n", sizeof(u));

    return 0;
}
