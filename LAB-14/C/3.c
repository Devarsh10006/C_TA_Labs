#include <stdio.h>

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter sorted array elements:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int k = 1;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[k] = nums[i];
            k++;
        }
    }

    printf("Number of unique elements = %d\n", k);

    printf("Array after removing duplicates:\n");

    for (int i = 0; i < k; i++)
    {
        printf("%d ", nums[i]);
    }
}