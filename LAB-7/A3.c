#include <stdio.h>

int main() {
    float a, b;
    char choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &choice);

    switch (choice) {
        case '+':
            printf("Result = %.2f", a + b);
            break;

        case '-':
            printf("Result = %.2f", a - b);
            break;

        case '*':
            printf("Result = %.2f", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero is not possible");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}