#include"stdio.h"

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("* ");
            }
        }
        else {
            for (int j = 1; j <= n; j++)
            {
                (j == 1 || j == n)
                   ? printf("* ")
                   : printf("  ")
                ;
            }
        }
        printf("\n");
    }
}