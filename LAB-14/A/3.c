#include"stdio.h"

void main()
{
    int n;
    printf("Enter a size of an array n: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[i]);
    }

    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even: %d\nOdd: %d", even, odd);
}