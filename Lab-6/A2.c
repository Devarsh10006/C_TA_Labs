#include <stdio.h>

int main()
{
    float basic;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    float hra, da;
    if (basic >= 30000)
    {
        hra = 0.30 * basic;
        da = 0.95 * basic;
    }
    else if (basic >= 20000)
    {
        hra = 0.25 * basic;
        da = 0.90 * basic;
    }
    else if (basic >= 10000)
    {
        hra = 0.20 * basic;
        da = 0.80 * basic;
    }
    else
    {
        hra = 0;
        da = 0;
    }

    float gross = basic + hra + da;

    printf("\nBasic Salary = %.2f", basic);
    printf("\nHRA = %.2f", hra);
    printf("\nDA = %.2f", da);
    printf("\nGross Salary = %.2f", gross);

    return 0;
}