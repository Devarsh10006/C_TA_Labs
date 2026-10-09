#include "stdio.h"

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    printArray(arr, 5);
}