#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter the elements: ");
        scanf("%d", &a[i]);
    }

    int *p;
    p = a;

    printf("Array elements are:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *p);
        p++;
    }
}