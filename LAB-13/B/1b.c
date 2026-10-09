#include"stdio.h"
#include"stdbool.h"

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    bool num = true;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++, num = !num)
        {
            printf("%d ", num);
        }
        printf("\n");
    }
    
}