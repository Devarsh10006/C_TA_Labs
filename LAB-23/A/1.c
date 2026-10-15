#include "stdio.h"

struct Student
{
    int rollno;
    char name[50];
    int backlogs;
};

int main()
{
    struct Student s;
    FILE *fp;
    int n, i, found = 0;

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s.rollno);

        printf("Enter Name: ");
        scanf(" %49[^\n]", s.name);

        printf("Enter Backlogs: ");
        scanf("%d", &s.backlogs);

        fprintf(fp, "%d %s %d\n",
                s.rollno, s.name, s.backlogs);
    }

    fclose(fp);

    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened for reading.\n");
        return 1;
    }

    printf("\nStudents having more than 5 backlogs:\n");

    while (fscanf(fp, "%d %49s %d",
        &s.rollno, s.name, &s.backlogs) == 3)
    {
        if (s.backlogs > 5)
        {
            printf("Roll Number: %d\n", s.rollno);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("No student has more than 5 backlogs.\n");
    }

    fclose(fp);

    return 0;
}