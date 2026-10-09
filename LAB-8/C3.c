#include <stdio.h>

int main() {
    int bigger, smaller;
    int quotient = 0, remainder;

    printf("Enter bigger number: ");
    scanf("%d", &bigger);

    printf("Enter smaller number: ");
    scanf("%d", &smaller);

    if (smaller <= 0 || bigger < smaller) {
        printf("Invalid input");
        return 0;
    }

    remainder = bigger;

    while (remainder >= smaller) {
        remainder = remainder - smaller;
        quotient++;
    }

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);

    return 0;
}