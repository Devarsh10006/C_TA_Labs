#include <stdio.h>

void main() 
{
    int n;
    int sum = 0, total = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    // sum = n * (n + 1) * (n + 2) / 6;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
        total += sum;
    }

    printf("Sum = %d", sum);

    // printf("Sum = %d\n", sum);
}