#include"stdio.h"

void main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }
    
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < 0) count++;
    }
    
    printf("Total -ve nums are: %d", count);
}