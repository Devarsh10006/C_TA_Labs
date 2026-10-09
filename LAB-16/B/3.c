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
            printf("Enter the ele at idx {%d, %d}: \n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Diagonal elements are:\n");
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j)
            {
                printf("%d ", mat[i][j]);
                sum += mat[i][j];
            }
        }
    }
    printf("\nSum of diagonal elements = %d", sum);
}