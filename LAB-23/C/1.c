#include "stdio.h"

struct Student
{
    int rollno;
    char name[50];
    int backlogs;
};

// Function declarations
void storeStudents();
void findBacklogs();
void modifyBacklogs();
void displayStudents();

int main()
{
    storeStudents();
    findBacklogs();
    modifyBacklogs();
    displayStudents();

    return 0;
}

// Function to store student data
void storeStudents()
{
    struct Student s;
    FILE *fp;
    int n, i;

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter Roll Number: ");
        scanf("%d", &s.rollno);

        printf("Enter Name: ");
        scanf("%49s", s.name);

        printf("Enter Backlogs: ");
        scanf("%d", &s.backlogs);

        fprintf(fp, "%d %s %d\n",
                s.rollno, s.name, s.backlogs);
    }

    fclose(fp);
    printf("\nStudent data stored successfully.\n");
}

// Function to find students having more than 5 backlogs
void findBacklogs()
{
    struct Student s;
    FILE *fp;
    int found = 0;

    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return;
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

    if (!found)
        printf("No student has more than 5 backlogs.\n");

    fclose(fp);
}

// Function to modify backlogs of one student to 3
void modifyBacklogs()
{
    struct Student s[100];
    FILE *fp;
    int n = 0, i, roll, found = 0;

    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return;
    }

    while (n < 100 &&
           fscanf(fp, "%d %49s %d",
                  &s[n].rollno,
                  s[n].name,
                  &s[n].backlogs) == 3)
    {
        n++;
    }

    fclose(fp);

    printf("\nEnter roll number to modify: ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++)
    {
        if (s[i].rollno == roll)
        {
            s[i].backlogs = 3;
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Student not found.\n");
        return;
    }

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened for writing.\n");
        return;
    }

    for (i = 0; i < n; i++)
    {
        fprintf(fp, "%d %s %d\n",
                s[i].rollno,
                s[i].name,
                s[i].backlogs);
    }

    fclose(fp);
    printf("Backlogs updated successfully.\n");
}

// Function to display updated student data
void displayStudents()
{
    struct Student s;
    FILE *fp;

    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return;
    }

    printf("\nUpdated Student Records:\n");
    printf("Roll No\tName\tBacklogs\n");

    while (fscanf(fp, "%d %49s %d",
                  &s.rollno, s.name, &s.backlogs) == 3)
    {
        printf("%d\t%s\t%d\n",
               s.rollno, s.name, s.backlogs);
    }

    fclose(fp);
}