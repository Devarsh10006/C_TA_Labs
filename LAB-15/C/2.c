#include"stdio.h"

void main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the first element: ");
        scanf("%d", &arr[i]);
    }
    
    int newVal;
    printf("Enter the number that u wanna incert: ");
    scanf("%d", &newVal);

    int pos = 0;
    while(pos < n && arr[pos] < newVal) { pos++; }

    // Shift elements to the right
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert new value
    arr[pos] = newVal;
    n++;

    printf("Array after insertion:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}