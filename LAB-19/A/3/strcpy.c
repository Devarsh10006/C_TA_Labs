#include <stdio.h>
#include <string.h>

void main()
{
    char str1[50], str2[50];

    printf("Enter a string: ");
    gets(str1);

    strcpy(str2, str1);

    printf("Copied string = %s", str2);
}