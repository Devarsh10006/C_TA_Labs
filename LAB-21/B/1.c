#include "stdio.h"

struct Student
{
    int rollNo;
    char name[50];
    float percentage;
};

int main()
{
    struct Student s = {101, "Devarsh Patel", 85.5};

    struct Student *ptr;

    ptr = &s;

    printf("Student Details:\n");
    printf("Roll Number: %d\n", ptr->rollNo);
    printf("Name: %s\n", ptr->name);
    printf("Percentage: %.2f%%\n", ptr->percentage);

    return 0;
}