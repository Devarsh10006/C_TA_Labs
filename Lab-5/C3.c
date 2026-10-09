#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Multiply by 2 = %d\n", n << 1);
    printf("Divide by 2 = %d\n", n >> 1);

    return 0;
}

// strings B1.exe