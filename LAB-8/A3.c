#include <stdio.h>

int main() {
    int start, end;

    printf("Enter two numbers: ");
    scanf("%d %d", &start, &end);

    while (start <= end) {
        if (start % 2 == 0)
            printf("%d ", start);

        start++;
    }

    return 0;
}