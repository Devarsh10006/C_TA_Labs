#include <stdio.h>

int main()
{
    int *p1, *p2, *p3;

    int a[2][2];
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Enter elements at idx {%d, %d}: \n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int b[2][2];
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Enter elements at idx {%d, %d}: \n", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    int sum[2][2];
    p1 = &a[0][0];
    p2 = &b[0][0];
    p3 = &sum[0][0];

    for(int i = 0; i < 4; i++)
    {
        *p3 = *p1 + *p2;

        p1++;
        p2++;
        p3++;
    }

    printf("\nSum of two matrices:\n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}