#include "stdio.h"

struct Student
{
    int rollno;
    char name[50];
    int backlogs;
};

int main()
{
    struct Student s[100];
    FILE *fp;
    int n = 0, i, roll, found = 0;

    // Open file in read mode
    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    // Read all student records
    while (n < 100 &&
           fscanf(fp, "%d %49s %d",
                  &s[n].rollno,
                  s[n].name,
                  &s[n].backlogs) == 3)
    {
        n++;
    }

    fclose(fp);

    // Enter roll number to modify
    printf("Enter roll number to modify backlogs: ");
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
        return 0;
    }

    // Open file in write mode to store updated data
    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened for writing.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        fprintf(fp, "%d %s %d\n",
                s[i].rollno,
                s[i].name,
                s[i].backlogs);
    }

    fclose(fp);

    // Reopen file and display updated data
    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened for reading.\n");
        return 1;
    }

    printf("\nUpdated Student Data:\n");
    printf("Roll No\tName\tBacklogs\n");

    while (fscanf(fp, "%d %49s %d",
                  &s[0].rollno,
                  s[0].name,
                  &s[0].backlogs) == 3)
    {
        printf("%d\t%s\t%d\n",
               s[0].rollno,
               s[0].name,
               s[0].backlogs);
    }

    fclose(fp);

    return 0;
}