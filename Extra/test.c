#include"stdio.h"

// void main()
// {
//     int a = 5;

//     printf("Pre inc : %d\n", ++a);
//     printf("Post inc: %d\n", a++);
//     printf("Final   : %d\n", a);
    
//     for (int i = 0; i < 10;)
//     {
//         printf("%d ", i++);
//     }
    
//     printf("\n");

//     for (int i = 0; i < 10;)
//     {
//         printf("%d ", ++i);
//     }
// }


void main()
{
    int n; 
    printf("Enter a number: ");
    scanf("%d", n); // 3243

    int temp = n; //temp = 3243
    int divisor = 1;
    while (temp >= 10)
    {
        temp = temp / 10; // temp = 3
        divisor = divisor * 10; // divisor = 1000
    }
    

    printf("The digits are: ");

    int digit = 0;
    while (divisor > 0)
    {
        digit = n / divisor; // digit = 3
        printf("%d\n", digit);

        n = n % divisor; // 3243 % 1000 = 243 = n
        divisor = divisor / 10;
    }

}