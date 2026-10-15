#include "stdio.h"
#include "stdlib.h"

int main()
{
    int n, i, sum = 0;
    int *ptr;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number.\n");
        return 1;
    }

    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
        sum = sum + ptr[i];
    }

    printf("Sum = %d\n", sum);

    free(ptr);

    return 0;
}