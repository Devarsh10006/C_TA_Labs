#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        if (i % 2 == 0)
            sum = sum - i;
        else
            sum = sum + i;

        i++;
    }

    printf("Sum = %d", sum);

    return 0;
}