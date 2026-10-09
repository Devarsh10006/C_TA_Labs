#include <stdio.h>

void main()
{
    
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int a[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter elements at idx {%d, %d}: \n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int b[rows][cols];
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter elements at idx {%d, %d}: \n", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    int sum[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of two matrices:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}