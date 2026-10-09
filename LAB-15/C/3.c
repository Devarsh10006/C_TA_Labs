#include <stdio.h>

void main()
{
    int nums[100], n, val;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter value to remove: ");
    scanf("%d", &val);

    // Move elements which are not equal to val
    int j = 0, k;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != val)
        {
            nums[j] = nums[i];
            j++;
        }
    }
    k = j;

    printf("Number of elements not equal to %d = %d\n", val, k);

    printf("Array after removing %d:\n", val);
    for (int i = 0; i < k; i++)
    {
        printf("%d ", nums[i]);
    }
}