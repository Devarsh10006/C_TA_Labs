#include"stdio.h"

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        
        int num = 1;
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%d ", num++);
            }
            else printf("%c ", ch++);
        }
        printf("\n");
    }
}