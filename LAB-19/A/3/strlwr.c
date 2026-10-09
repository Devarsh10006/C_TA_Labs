#include <stdio.h>
#include <string.h>

void main()
{
    char str[50];

    printf("Enter a string: ");
    gets(str);

    strlwr(str);

    printf("Lowercase = %s", str);
}