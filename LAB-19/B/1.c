#include "stdio.h"

int power(int base, int exp)
{
    return (exp == 0)
        ? 1
        : base * power(base, exp - 1)
    ;
}

void main()
{
    int base, exp, result;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    result = power(base, exp);

    printf("Power = %d", result);
}