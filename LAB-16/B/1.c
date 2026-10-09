#include <stdio.h>

void main()
{
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int mat[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter the element at idx {%d, %d}: \n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Transpose of matrix:\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }
}