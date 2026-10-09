#include <stdio.h>

void main()
{
    int a = 10;
    int b = 20;
    int *p1 = &a, *p2 = &b;

    // int *p1, *p2;
    // p1 = &a;
    // p2 = &b;

    int sum = *p1 + *p2;

    printf("First number = %d\n", *p1);
    printf("Second number = %d\n", *p2);
    printf("Sum = %d\n", sum);
}