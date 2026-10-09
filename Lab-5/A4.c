#include"stdio.h"

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("n is even");
    }
    else{
        printf("n is odd");
    }
}

// error: lvalue required as left operand of assignment
// In C, lvalue stands for locator value. It points to a memory location that can hold a value. An lvalue can go on the left side of an assignment