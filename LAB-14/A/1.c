#include"stdio.h"

void main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }
    
    printf("Normal order\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n Reverse Order\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}