#include <stdio.h>

int main()
{
    int n, i = 2, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        flag = 1;
    }
    else
    {
        while (i <= n / 2)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }

            i++;
        }
    }

    if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}