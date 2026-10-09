#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100], str2[50];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    strcat(str1, str2);

    printf("Joined string = %s", str1);
}