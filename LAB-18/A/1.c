#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("Inside the function a is %d & b is %d\n\n: ", *a, *b);
}

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Before function a is %d & b is %d\n\n: ", num1, num2);

    swap(&num1, &num2);

    printf("After function a is %d & b is %d\n\n: ", num1, num2);

    return 0;

}