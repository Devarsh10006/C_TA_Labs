#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("The character is Uppercase.");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("The character is Lowercase.");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("The character is a Digit.");
    }
    else
    {
        printf("The character is a Special Character.");
    }
    
    return 0;
}