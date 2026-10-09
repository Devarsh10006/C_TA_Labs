#include <stdio.h>

int main()
{
    int n, i = 1;
    long int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        factorial = factorial * i;
        i++;
    }

    printf("Factorial = %ld", factorial);

    return 0;
}