#include"stdio.h"

void squre(int *arr, int n);

void main()
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

    squre(arr, n);
    
    printf("The end!");
}

void squre(int *arr, int n)
{
    int sqr[n];
    printf("The squred array would return\n");
    for (int i = 0; i < n; i++)
    {
        sqr[i] = *(arr + i) * *(arr + i);
        printf("Ele: %d\n", sqr[i]);
    }
}

// *arr[] means array of pointer