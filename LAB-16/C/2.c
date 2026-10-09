#include <stdio.h>

void main()
{
    int n;
    printf("Enter size of matrix: ");
    scanf("%d", &n);

    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter ele at idx {%d, %d}: \n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Upper Triangular Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            (i <= j)
            ? printf("%d ", mat[i][j])
            : printf("0 ");
        }
        printf("\n");
    }
}