#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of  an array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the ele: ");
        scanf("%d", &arr[i]);
    }

    // int *p = arr;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (*(p + i) > *(p + j))
    //         {
    //             int temp = *(p + i);
    //             *(p + i) = *(p + j);
    //             *(p + j) = temp;
    //         }
    //     }
    // }

    int *p = arr;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }
}