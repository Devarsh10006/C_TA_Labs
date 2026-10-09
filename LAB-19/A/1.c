#include "stdio.h"

int factorial(int n)
{
    return (n == 0 || n == 1)
        ? 1
        : n * factorial(n - 1)
    ;
}

void main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = factorial(n);

    printf("Factorial = %d", result);
}