#include <stdio.h>

int main() {
    int a, b;
    int result = 0, i = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (i <= b) {
        result = result + a;
        i++;
    }

    printf("Multiplication = %d", result);

    return 0;
}