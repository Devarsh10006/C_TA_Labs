#include <stdio.h>
#include <string.h>

void main()
{
    char str1[50], str2[50];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    (strcmp(str1, str2) == 0)
        ? printf("Both strings are same")
        : printf("Strings are different")
    ;
}