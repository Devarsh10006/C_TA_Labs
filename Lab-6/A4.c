#include <stdio.h>

int main()
{
    int num, lastDigit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    if (lastDigit % 2 == 0)
    {
        printf("The last digit is Even.");
    }
    else
    {
        printf("The last digit is Odd.");
    }

    return 0;
}