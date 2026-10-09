#include"stdio.h"

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }

    printf("ans: %d", ans);
}