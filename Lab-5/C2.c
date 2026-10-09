#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n & 1)
        printf("Odd number");
    else
        printf("Even number");

    return 0;
}