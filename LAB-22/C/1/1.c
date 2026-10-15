#include "stdio.h"
#include "ctype.h"

int main()
{
    FILE *fp;
    int ch;
    int newWord = 1;

    fp = fopen("student.txt", "r+");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (newWord && isalpha((unsigned char)ch))
        {
            fseek(fp, -1L, SEEK_CUR);
            fputc(toupper((unsigned char)ch), fp);
            newWord = 0;
        }
        else if (isspace((unsigned char)ch))
        {
            newWord = 1;
        }
        else
        {
            newWord = 0;
        }
    }

    fclose(fp);

    printf("First letter of every word capitalized successfully.\n");

    return 0;
}