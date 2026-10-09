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

    int pos = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > 0) pos++;
        else neg++;
    }
    printf("Pos: %d\nNeg: %d", pos, neg);
}