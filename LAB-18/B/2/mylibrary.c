#include "mylibrary.h"

int isPrime(int n)
{
    if (n <= 1) return 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) return 0;
    }

    return 1;
}

int isArmstrong(int n)
{
    int digits = 0;
    int temp = n;
    while (temp !=  0)
    {
        temp /= 10;
        digits++;
    }
    
    int sum = 0, original = n;
    while (n != 0)
    {
        int rem = n % 10;
        int cnt = 0, power = 1;
        while (cnt != digits)
        {
            power *= rem;
            cnt++;
        }
        sum += power;
        n /= 10;
    }

    return (sum == original) ? 1 : 0;
}

int isPerfect(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0) sum += i;
    }

    return (sum == n) ? 1 : 0;
}