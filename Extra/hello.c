#include<stdio.h>

// void forCheck();

int main()
{
    // forCheck();
    int n, i = 2;
    printf("Enter a num: ");
    scanf("%d", &n);

    while(i <= n/2)
    {
        if(n % i == 0)
        {
            printf("Not prime");
            return 0;
        }i++;
    }

    printf("Prime");
    return 0;
}

// void forCheck()
// {
//     int i = 0;

//     for (i = 0; i < 10; i++);

//     printf("%d...\n", i);

//     for (i = 0; i < 20; i++)
//     printf("%d ", i);
// }