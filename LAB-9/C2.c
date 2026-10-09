#include <stdio.h>

int main()
{
    int n, remainder, binary = 0, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Binary = 0");
        return 0;
    }

    while (n > 0)
    {
        remainder = n % 2;
        binary = binary + remainder * place;
        n = n / 2;
        place = place * 10;
    }

    printf("Binary = %d", binary);

    return 0;
}