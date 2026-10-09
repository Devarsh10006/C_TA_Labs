#include <stdio.h>

void main()
{
    int a = 10;
    int b = 20;

    int *p1 = &a;
    int *p2 = &b;

    printf("Before swapping:\n");
    printf("a = %d\n", *p1);
    printf("b = %d\n", *p2);

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("\nAfter swapping:\n");
    printf("a = %d\n", *p1);
    printf("b = %d\n", *p2);
}