#include <stdio.h>

int maximum(int a, int b)
{
    return (a > b) ? a : b;
}

int minimum(int a, int b)
{
    return (a < b) ? a : b;
}

void main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Maximum = %d\n", maximum(num1, num2));
    printf("Minimum = %d", minimum(num1, num2));
}