#include <stdio.h>
#include <stdlib.h>

int* square(int *arr, int n);

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the num: ");
        scanf("%d", &arr[i]);
    }


    int *sqr = square(arr, n);

    printf("\nSquared array:\n");
    for (int i = 0; i < n; i++) { printf("%d ", sqr[i]); }
    free(sqr);

    return 0;
}

int* square(int *arr, int n)
{
    // Heap mein n integers ki memory
    int *sqr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        *(sqr + i) = *(arr + i) * *(arr + i);
    }

    // Poore array ka address return
    return sqr;
}