#include <stdio.h>

int mystrlen(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}

void mystrcpy(char str2[], char str1[])
{
    int i = 0;

    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';
}

int mystrcmp(char str1[], char str2[])
{
    int i = 0;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }

        i++;
    }

    return str1[i] - str2[i];
}

void main()
{
    char str1[100], str2[100], str3[100];
    int length, result;

    printf("Enter first string: ");
    gets(str1);

    length = mystrlen(str1);
    printf("\nLength of string = %d", length);

    mystrcpy(str2, str1);
    printf("\nCopied string = %s", str2);

    printf("\n\nEnter second string: ");
    gets(str3);

    result = mystrcmp(str1, str3);

    (result == 0)
        ? printf("Both strings are same")
        : printf("Strings are different")
    ;
}