#include <stdio.h>

int main() 
{
    int n;
    printf("Enter te num: ");
    scanf("%d", &n);

    int last = n % 10;

    int temp = n;
    int place = 1;
    while (temp >= 10)
    {
        temp /= 10;
        place *= 10;
    }
    int first = temp;

    n = n - first * place - last;
    n = n + last * place + first;
    
    printf("The swapped  num is: %d", n);

    return 0;
}