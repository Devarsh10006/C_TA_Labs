#include <stdio.h>

void main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;
    float avg;
    int count = 0;

    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    avg = (float)sum / n;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > avg)
        {
            count++;
        }
    }

    printf("Average = %.2f\n", avg);
    printf("Numbers higher than average = %d\n", count);
}