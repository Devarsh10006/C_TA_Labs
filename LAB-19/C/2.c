#include "stdio.h"

int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

void main()
{
    int n, r;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);

    if(r > n)
    {
        printf("Invalid input! r should be less than or equal to n.");
    }
    else
    {
        int nCr, nPr;

        // nCr = n! / (r! * (n-r)!)
        nCr = factorial(n) / (factorial(r) * factorial(n - r));

        // nPr = n! / (n-r)!
        nPr = factorial(n) / factorial(n - r);

        printf("\nnCr = %d", nCr);
        printf("\nnPr = %d", nPr);
    }
}