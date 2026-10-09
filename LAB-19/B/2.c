#include "stdio.h"
#include "string.h"
#include "ctype.h" // C header file that provides functions for working with characters

void convertUpper(char str[])
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
}

void main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    convertUpper(str);

    printf("Uppercase string = %s", str);
}


// toupper()	Convert character to uppercase
// tolower()	Convert character to lowercase
// isalpha()	Check whether character is alphabet
// isdigit()	Check whether character is a digit
// isspace()	Check whether character is a space
// isalnum()	Check whether character is alphabet or number