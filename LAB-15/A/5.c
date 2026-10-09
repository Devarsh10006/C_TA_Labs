#include <stdio.h>

void main()
{
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("String = %s\n", str);

    int i = 0;
    while (str[i] != '\0')
    {
        length++;
        i++;
    }

    printf("Length = %d", length);
}