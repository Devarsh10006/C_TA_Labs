#include <stdio.h>

float simpleInterest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    float principal, rate, time, interest;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    interest = simpleInterest(principal, rate, time);

    printf("Simple Interest = %.2f", interest);
}