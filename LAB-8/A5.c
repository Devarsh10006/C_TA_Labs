#include <stdio.h>

int main() {
    int i = 1, num;
    int odd = 0, even = 0;

    while (i <= 10) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0)
            even++;
        else
            odd++;

        i++;
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d", odd);

    return 0;
}