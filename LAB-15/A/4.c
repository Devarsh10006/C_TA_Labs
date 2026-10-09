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
    
    int find;
    printf("Enter the element, that u wanna find: ");
    scanf("%d", &find);
    
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == find) 
        {
            idx = i;
            break;
        }
    }
    
    printf("Your entered num is at %dth index.", idx);
}