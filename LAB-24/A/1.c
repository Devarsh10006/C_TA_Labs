#include "stdio.h"
#include "stdlib.h"

int main()
{
    int *ip;
    char *cp;
    float *fp;

    // Allocate memory dynamically
    ip = (int *)malloc(sizeof(int));
    cp = (char *)malloc(sizeof(char));
    fp = (float *)malloc(sizeof(float));

    if (ip == NULL || cp == NULL || fp == NULL)
    {
        printf("Memory allocation failed.\n");

        free(ip);
        free(cp);
        free(fp);

        return 1;
    }

    // Read values
    printf("Enter an integer: ");
    scanf("%d", ip);

    printf("Enter a character: ");
    scanf(" %c", cp);

    printf("Enter a float value: ");
    scanf("%f", fp);

    // Display values
    printf("\nInteger = %d\n", *ip);
    printf("Character = %c\n", *cp);
    printf("Float = %.2f\n", *fp);

    // De-allocate memory
    free(ip);
    free(cp);
    free(fp);

    printf("\nMemory de-allocated successfully.\n");

    return 0;
}