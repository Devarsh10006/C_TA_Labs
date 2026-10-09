#include <stdio.h>

int main()
{
    float num1, num2, result;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("\nChoose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        result = num1 + num2;
        printf("Addition = %.2f", result);
    }
    else if (choice == 2)
    {
        result = num1 - num2;
        printf("Subtraction = %.2f", result);
    }
    else if (choice == 3)
    {
        result = num1 * num2;
        printf("Multiplication = %.2f", result);
    }
    else if (choice == 4)
    {
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Division = %.2f", result);
        }
        else
        {
            printf("Division by zero is not possible.");
        }
    }
    else
    {
        printf("Invalid choice.");
    }

    return 0;
}