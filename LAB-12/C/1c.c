#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        int num = 1;

        // spaces
        for (int j = 0; j < n - i; j++)
            printf(" ");

        // numbers
        for (int j = 0; j <= i; j++) 
        {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }
}