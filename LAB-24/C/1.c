#include "stdio.h"

int main()
{
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    int nums[n];
    int ans[2 * n];

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++)
    {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }

    printf("Concatenated array: ");

    for (i = 0; i < 2 * n; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}