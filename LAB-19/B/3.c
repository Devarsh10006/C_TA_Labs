#include "stdio.h"

void swapArrays(int a[], int b[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

int main()
{
    int a[5], b[5];
    int i;

    printf("Enter 5 integer elements of first array:\n");
    for(i = 0; i < 5; i++)
    {
        if(scanf("%d", &a[i]) != 1)
        {
            printf("Invalid input! Please enter integers only.\n");
            return 0;
        }
    }

    printf("Enter 5 integer elements of second array:\n");
    for(i = 0; i < 5; i++)
    {
        if(scanf("%d", &b[i]) != 1)
        {
            printf("Invalid input! Please enter integers only.\n");
            return 0;
        }
    }

    printf("\nBefore swapping:\n");

    printf("First array: ");
    for(i = 0; i < 5; i++) printf("%d ", a[i]);

    printf("\nSecond array: ");
    for(i = 0; i < 5; i++) printf("%d ", b[i]);

    swapArrays(a, b, 5);

    printf("\n\nAfter swapping:\n");

    printf("First array: ");
    for(i = 0; i < 5; i++) printf("%d ", a[i]);

    printf("\nSecond array: ");
    for(i = 0; i < 5; i++) printf("%d ", b[i]);

    return 0;
}