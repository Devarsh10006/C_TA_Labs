#include <stdio.h>

void main()
{
    int a[20][2];

    printf("Enter Roll No and Marks of 20 students:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("Student %d:\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &a[i][0]);

        printf("Enter Marks: ");
        scanf("%d", &a[i][1]);
    }

    printf("\nRoll No\tMarks\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d\t%d\n", a[i][0], a[i][1]);
    }
}