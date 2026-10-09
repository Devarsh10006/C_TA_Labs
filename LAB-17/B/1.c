#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], b[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter the elements: ");
        scanf("%d", &a[i]);
    }

    int *p1, *p2;
    p1 = a;
    p2 = b;

    for(int i = 0; i < n; i++)
    {
        *p2 = *p1;

        p1++;
        p2++;
    }

    printf("Copied array is:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}