#include <stdio.h>

int main() 
{
    int n, p, result = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Enter power: ");
    scanf("%d", &p);

    for (int i = 1; i <= p; i++) 
    {
        int temp = result;
        result = 0;

        for (int j = 1; j <= n; j++) 
        {
            result = result + temp;
        }
    }

    printf("Answer = %d", result);

    return 0;
}