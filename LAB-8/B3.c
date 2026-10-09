#include <stdio.h>

int main() {
    int i = 1, count = 1;

    while (count <= 50) {
        printf("%d ", i);
        i = i + 3;
        count++;
    }

    return 0;
}