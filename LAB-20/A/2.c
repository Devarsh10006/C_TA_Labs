#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    char *p;
    p = str;

    int i = 0;
    while(*p != '\0')
    {
        if((*p >= 'A' && *p <= 'Z') ||
           (*p >= 'a' && *p <= 'z') ||
           (*p >= '0' && *p <= '9'))
        {
            str[i] = *p;
            i++;
        }

        p++;
    }

    str[i] = '\0';

    printf("String after removing spaces and special characters: \n");
    printf("%s", str);
}