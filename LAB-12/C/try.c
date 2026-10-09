#include"stdio.h"

void main()
{
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i; j++)
        {
            printf(" ");
        }

        for (int j = 0, num = 1; j <= i; j++)
        {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
}