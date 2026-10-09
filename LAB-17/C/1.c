#include <stdio.h>

void main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    char *p;
    p = str;

    int length = 0;
    while(*p != '\0')
    {
        length++;
        p++;
    }

    printf("Length of string = %d\n", length);
}