#include "stdio.h"
#include "string.h"

int main()
{
    char s[1000];
    int i, top = 0;

    printf("Enter a string: ");
    scanf("%999s", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '*')
        {
            if (top > 0)
            {
                top--;
            }
        }
        else
        {
            s[top] = s[i];
            top++;
        }
    }

    s[top] = '\0';

    printf("Result: %s\n", s);

    return 0;
}