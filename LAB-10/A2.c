#include <stdio.h>

int main()
{
    int n, count = 0, sum = 0;
    float average;

    printf("Enter numbers (-1 to stop):\n");

    scanf("%d", &n);

    while (n != -1)
    {
        sum = sum + n;
        count++;

        scanf("%d", &n);
    }

    if (count > 0)
    {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f", average);
    }
    else
    {
        printf("No numbers entered.");
    }

    return 0;
}