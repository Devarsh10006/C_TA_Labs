#include "stdio.h"

int mystrncmp(char str1[], char str2[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }

        if(str1[i] == '\0')
        {
            return 0;
        }
    }

    return 0;
}

void mystrncpy(char str2[], char str1[], int n)
{
    int i;
    for(i = 0; i < n && str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }

    str2[i] = '\0';
}

void mystrncat(char str1[], char str2[], int n)
{
    int i = 0;
    int j = 0;

    // Find end of str1
    while(str1[i] != '\0')
    {
        i++;
    }

    // Add n characters of str2
    while(str2[j] != '\0' && j < n)
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

int main()
{
    char str1[100], str2[100], str3[100];
    int n, result;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("Enter number of characters to compare: ");
    scanf("%d", &n);

    result = mystrncmp(str1, str2, n);

    (result == 0)
        ? printf("\nFirst %d characters are same", n)
        : printf("\nFirst %d characters are different", n)
    ;

    // Clear input buffer
    getchar();

    // strncpy()
    printf("\n\nEnter a string for copying: ");
    gets(str1);

    printf("Enter number of characters to copy: ");
    scanf("%d", &n);

    mystrncpy(str3, str1, n);

    printf("Copied string = %s", str3);

    // Clear input buffer
    getchar();

    // strncat()
    printf("\n\nEnter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("Enter number of characters to join: ");
    scanf("%d", &n);

    mystrncat(str1, str2, n);

    printf("After joining = %s", str1);
}