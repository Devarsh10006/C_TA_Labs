#include "stdio.h"
#include "stdlib.h"

struct Student
{
    int rollNo;
    char name[50];
    float percentage;
};

int main()
{
    struct Student *ptr;

    ptr = (struct Student *)malloc(sizeof(struct Student));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter roll number: ");
    scanf("%d", &ptr->rollNo);

    printf("Enter name: ");
    scanf(" %49[^\n]", ptr->name);

    printf("Enter percentage: ");
    scanf("%f", &ptr->percentage);

    printf("\n--- Student Details ---\n");
    printf("Roll Number = %d\n", ptr->rollNo);
    printf("Name = %s\n", ptr->name);
    printf("Percentage = %.2f\n", ptr->percentage);

    free(ptr);

    printf("\nMemory de-allocated successfully.\n");

    return 0;
}