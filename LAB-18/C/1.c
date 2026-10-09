#include <stdio.h>

// Function to find length of string
int my_strlen(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

// Function to copy one string into another
void my_strcpy(char dest[], char src[])
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

// Function to concatenate two strings
void my_strcat(char str1[], char str2[])
{
    int i = 0, j = 0;

    // Find end of first string
    while (str1[i] != '\0')
    {
        i++;
    }

    // Add second string
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

// Function to compare two strings
int my_strcmp(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }

        i++;
    }

    return str1[i] - str2[i];
}

// Function to reverse a string
void my_strrev(char str[])
{
    int i = 0;
    int j = my_strlen(str);
    char temp;

    j--;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    int choice, result;
    char str1[100], str2[100];

    do
    {
        printf("\n\n===== MY STRING.H LIBRARY =====");
        printf("\n1. Find String Length");
        printf("\n2. Copy String");
        printf("\n3. Concatenate Strings");
        printf("\n4. Compare Strings");
        printf("\n5. Reverse String");
        printf("\n6. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter a string: ");
                scanf(" %[^\n]", str1);

                printf("Length = %d", my_strlen(str1));
                break;

            case 2:
                printf("\nEnter source string: ");
                scanf(" %[^\n]", str1);

                my_strcpy(str2, str1);

                printf("Copied string = %s", str2);
                break;

            case 3:
                printf("\nEnter first string: ");
                scanf(" %[^\n]", str1);

                printf("Enter second string: ");
                scanf(" %[^\n]", str2);

                my_strcat(str1, str2);

                printf("Concatenated string = %s", str1);
                break;

            case 4:
                printf("\nEnter first string: ");
                scanf(" %[^\n]", str1);

                printf("Enter second string: ");
                scanf(" %[^\n]", str2);

                result = my_strcmp(str1, str2);

                if (result == 0)
                    printf("Both strings are equal.");
                else if (result > 0)
                    printf("First string is greater than second string.");
                else
                    printf("First string is smaller than second string.");

                break;

            case 5:
                printf("\nEnter a string: ");
                scanf(" %[^\n]", str1);

                my_strrev(str1);

                printf("Reversed string = %s", str1);
                break;

            case 6:
                printf("\nExiting program...");
                break;

            default:
                printf("\nInvalid choice! Please try again.");
        }

    } while (choice != 6);
}