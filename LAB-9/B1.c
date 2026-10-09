#include <stdio.h>

int main()
{
    char ch = 'A';

    printf("Uppercase alphabets:\n");

    while (ch <= 'Z')
    {
        printf("%c ", ch);
        ch++;
    }

    ch = 'a';

    printf("\n\nLowercase alphabets:\n");

    while (ch <= 'z')
    {
        printf("%c ", ch);
        ch++;
    }

    return 0;
}