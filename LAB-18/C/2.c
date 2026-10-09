#include <stdio.h>

void convertToWords(int n)
{
    char *ones[] = {
        "", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine",
        "Ten", "Eleven", "Twelve", "Thirteen",
        "Fourteen", "Fifteen", "Sixteen",
        "Seventeen", "Eighteen", "Nineteen"
    };

    char *tens[] = {
        "", "", "Twenty", "Thirty", "Forty",
        "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
    };

    if (n == 0)
    {
        printf("Zero");
        return;
    }

    if (n >= 1000)
    {
        printf("%s Thousand ", ones[n / 1000]);
        n = n % 1000;
    }

    if (n >= 100)
    {
        printf("%s Hundred ", ones[n / 100]);
        n = n % 100;
    }

    if (n >= 1 && n <= 19)
    {
        printf("%s", ones[n]);
    }

    else if (n >= 20)
    {
        printf("%s", tens[n / 10]);

        if (n % 10 != 0)
        {
            printf("-%s", ones[n % 10]);
        }
    }
}

void main()
{
    int amount;

    printf("Enter amount: ");
    scanf("%d", &amount);

    if (amount < 0 || amount > 9999)
    {
        printf("Please enter an amount between 0 and 9999.");
    }
    else
    {
        printf("Amount in words: ");
        convertToWords(amount);
    }
}