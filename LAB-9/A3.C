#include <stdio.h>

int main()
{
    int x, y, i = 1;
    long int result = 1;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    while (i <= y)
    {
        result = result * x;
        i++;
    }

    

    printf("%d^%d = %ld", x, y, result);

    return 0;
}