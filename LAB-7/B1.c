#include <stdio.h>

int main() {
    int a, b, c, largest, result;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b) ? a : b;

    result = largest * c;

    printf("Largest of first two numbers = %d\n", largest);
    printf("Result = %d", result);

    return 0;
}