#include "stdio.h"

int main()
{
    FILE *fp;
    long pos;
    int ch;

    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    fseek(fp, 0, SEEK_END);

    pos = ftell(fp);

    printf("File contents in reverse order:\n");

    while (pos > 0)
    {
        pos--;
        fseek(fp, pos, SEEK_SET);
        ch = fgetc(fp);
        putchar(ch);
    }

    printf("\n");

    fclose(fp);

    return 0;
}