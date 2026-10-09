#include <stdio.h>

int main()
{
    float marks[5], total = 0, percentage;
    int i;

    printf("Enter marks of 5 subjects:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total = total + marks[i];
    }

    percentage = total / 5;

    printf("\nTotal Marks = %.2f", total);
    printf("\nPercentage = %.2f%%", percentage);

    if (percentage < 35)
    {
        printf("\nClass = Fail");
    }
    else if (percentage <= 45)
    {
        printf("\nClass = Pass Class");
    }
    else if (percentage <= 60)
    {
        printf("\nClass = Second Class");
    }
    else if (percentage <= 70)
    {
        printf("\nClass = First Class");
    }
    else
    {
        printf("\nClass = Distinction");
    }

    return 0;
}
