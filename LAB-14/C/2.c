#include <stdio.h>

void main()
{
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Missing numbers are: ");

    int expected = 1;

    for (int i = 0; i < n; i++)
    {
        while (expected < arr[i])
        {
            printf("%d ", expected);
            expected++;
        }

        expected++;
    }

    printf("\n");
}