#include <stdio.h>

void main() 
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 0; i <= 9; i++)
    {
        int temp = n;
        int count = 0;

        while (temp > 0)
        {
            int digit = temp % 10;
            if (digit == i)
            {
                count++;
            }
            temp /= 10;          
        }
        
        printf("%d = %d\n", i, count);
    }
}