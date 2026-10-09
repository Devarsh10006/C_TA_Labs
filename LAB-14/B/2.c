#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }

    float sum = 0;
    float product = 1;
    float reciprocalSum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        product = product * arr[i];
        reciprocalSum = reciprocalSum + (1.0 / arr[i]);
    }

    // Arithmetic Mean
    float average = sum / n;

    // Geometric Mean
    float geometricMean = pow(product, 1.0 / n);

    // Harmonic Mean
    float harmonicMean = n / reciprocalSum;

    printf("\nArithmetic Mean = %.2f\n", average);
    printf("Geometric Mean = %.2f\n", geometricMean);
    printf("Harmonic Mean = %.2f\n", harmonicMean);

    return 0;
}