#include <stdio.h>

int main()
{
    int n, digit, divisor = 1, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    printf("Divisor: %d\n", divisor);

    printf("Digits are: ");

    while (divisor > 0)
    {
        digit = n / divisor;
        printf("%d ", digit);

        n = n % divisor;
        divisor = divisor / 10;
    }

    return 0;
}