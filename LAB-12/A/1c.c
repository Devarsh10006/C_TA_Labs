#include <stdio.h>

void main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = n; i != 0; i--)
    {
        for (int j = n; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}