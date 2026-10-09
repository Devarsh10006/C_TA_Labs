#include"stdio.h"

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a = 0, b = 1;

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        int c = a + b;
        a = b;
        b = c;
    }
}