#include <stdio.h>
#include "mylibrary.h"

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    (isPrime(n))
        ? printf("%d is a Prime Number\n", n)
        : printf("%d is not a Prime Number\n", n)
    ;

    (isArmstrong(n))
        ? printf("%d is an Armstrong Number\n", n)
        : printf("%d is not an Armstrong Number\n", n)
    ;

    (isPerfect(n))
        ? printf("%d is a Perfect Number\n", n)
        : printf("%d is not a Perfect Number\n", n)
    ;
}