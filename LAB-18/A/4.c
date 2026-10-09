#include <stdio.h>

float maximum(float a, float b, float c)
{
    return (a > b && a > c) 
        ? a
        : (b > c) 
            ? b 
            : c
        ;
}

void main()
{
    float num1, num2, num3, max;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter third number: ");
    scanf("%f", &num3);

    max = maximum(num1, num2, num3);

    printf("Maximum = %.2f", max);
}