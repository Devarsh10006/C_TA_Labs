#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter the element at idx {%d, %d}: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(arr[i][j] == 0) zero++;
            else if (arr[i][j] > 0) pos++;
            else neg++;
        }
    }

    printf("+ve are: %d\n-ve are: %d\nzeroes are: %d", pos, neg, zero);
}