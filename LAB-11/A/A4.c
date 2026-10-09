#include"stdio.h"

void main()
{
    int base, power;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter power: ");
    scanf("%d", &power);

    int ans = 1;
    for (int i = 1; i <= power; i++)
    {
        ans *= base;
    }

    printf("ans: %d", ans);
}