#include <stdio.h>

void main()
{
    int r1, c1, r2, c2;

    printf("Enter rows of first matrix: ");
    scanf("%d", &r1);

    printf("Enter columns of first matrix: ");
    scanf("%d", &c1);

    printf("Enter rows of second matrix: ");
    scanf("%d", &r2);

    printf("Enter columns of second matrix: ");
    scanf("%d", &c2);

    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible.");
        return 0;
    }
    
    int a[r1][c1];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    int b[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    int ans[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
}