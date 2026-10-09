#include "stdio.h"

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    char oldChar, newChar;
    printf("Enter character to replace: ");
    scanf("%c", &oldChar);

    printf("Enter new character: ");
    scanf(" %c", &newChar);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == oldChar)
        {
            str[i] = newChar;
        }
    }

    printf("New string = %s", str);
}