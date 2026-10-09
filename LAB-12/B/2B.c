#include <stdio.h>

void main()
{
    int n;
    float e = 1, fact = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        fact *= i;
        e += 1.0 / fact;
    }

    printf("%f", e);

    printf("Value of e = %f", e);
}