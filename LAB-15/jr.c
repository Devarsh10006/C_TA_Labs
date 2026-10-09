#include <stdio.h>
void main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter %dth element of array:", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n / 2; i++)
    {
        arr[i] = arr[n - i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}