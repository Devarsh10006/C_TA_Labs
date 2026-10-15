#include "stdio.h"

int main()
{
    int n, i;
    int last = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int bits[n];

    printf("Enter binary array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &bits[i]);
    }

    i = 0;
    while (i < n - 1)
    {
        i += (bits[i] == 1) ? 2 : 1;
    }

    if (i == n - 1) last = 1;

    (last == 1)
        ? printf("true\n")
        : printf("false\n")
    ;

    return 0;
}