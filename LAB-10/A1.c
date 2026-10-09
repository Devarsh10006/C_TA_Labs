#include <stdio.h>

int main()
{
    int n, first, last, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }

    first = n;
    sum = first + last;

    printf("First digit = %d\n", first);
    printf("Last digit = %d\n", last);
    printf("Sum = %d", sum);

    return 0;
}