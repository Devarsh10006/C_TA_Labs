#include "stdio.h"

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    int rollNo;
    char name[50];
    float percentage;
    struct Date dob;
};

int main()
{
    struct Student s = {101, "Devarsh Patel", 85.5, {15, 8, 2005}};

    printf("Student Details:\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Percentage: %.2f%%\n", s.percentage);

    printf("Date of Birth: %02d/%02d/%d\n",
        s.dob.day, s.dob.month, s.dob.year
    );

    return 0;
}
