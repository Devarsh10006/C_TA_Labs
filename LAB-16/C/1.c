#include <stdio.h>

void main()
{
    int rows, cols;
    int zero = 0, nonZero = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int mat[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter the ele at idx {%d, %d}: \n", i, j);
            scanf("%d", &mat[i][j]);

            if (mat[i][j] == 0) zero++;
            else nonZero++;
        }
    }

    printf("Number of zero elements = %d\n", zero);
    printf("Number of non-zero elements = %d\n", nonZero);

    (zero > nonZero)
    ? printf("Matrix is a Sparse Matrix.")
    : printf("Matrix is not a Sparse Matrix.");
}