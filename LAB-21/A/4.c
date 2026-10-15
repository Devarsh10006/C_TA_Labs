#include "stdio.h"

struct Student
{
    char name[50];
    float percentage;
    int age;
};

int main()
{
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Percentage: ");
        scanf("%f", &s[i].percentage);

        printf("Enter Age: ");
        scanf("%d", &s[i].age);
    }

    printf("\n--- Student Details ---\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Percentage: %.2f%%\n", s[i].percentage);
        printf("Age: %d\n", s[i].age);
    }

    return 0;
}
