#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], b[n];
    printf("Enter elements of first array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    int *p1, *p2;
    p1 = a;
    p2 = b;

    for(int i = 0; i < n; i++)
    {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;

        p1++;
        p2++;
    }

    printf("\nAfter swapping:\n");

    printf("First array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nSecond array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}