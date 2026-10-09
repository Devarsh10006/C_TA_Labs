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

    if (a > b)
    {
        if (a > c)
        {
            printf("a is largest which is %d", a);
        }
        else{
            printf("c is largest which is %d", c);
        }
    }
    else{
        if (b > c)
        {
            printf("b is largest which is %d", b);
        }
        else{
            printf("c is largest which is %d", c);
        }
    }
}