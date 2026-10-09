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
    
    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] < largest) secondLargest = arr[i];
    }
   
    printf("The largest is %d\nThe second largest is %d", largest, secondLargest);
}