#include"stdio.h"

void main()
{
    char ch;
    printf("Enter a char: ");
    scanf("%c", &ch);

    // char c;
    // printf("%c is this\n", c);
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        printf("%c is character is vowel", ch);
    }
    else{
        printf("%c isn't", ch);
    }
}