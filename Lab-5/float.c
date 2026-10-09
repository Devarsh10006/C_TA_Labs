#include"stdio.h"

void main()
{
    int a,b,c;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    float ans = (a + b + c) / 3.0;

    printf("Ans is: %f", ans);
}