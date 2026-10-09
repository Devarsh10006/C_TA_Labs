#include <stdio.h>

void main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0], min = arr[0];
    int sum = 0;
    float avg = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];

        sum += arr[i];
    }
    
    avg = (float)sum / n;

    printf("\nMaximum = %d\n", max);
    printf("Minimum = %d\n", min);
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
}