#include "stdio.h"
#include "string.h"

void main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    char ch;
    printf("Enter a character to find: ");
    scanf("%c", &ch);

    int found = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            found = 1;
            break;
        }
    }

    (found == 1)
        ? printf("Character found")
        : printf("Character not found")
    ;
}