
#include "stdio.h"

int main()
{
    FILE *fp;
    char ch;
    int chars = 0, spaces = 0, tabs = 0, newlines = 0;

    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        chars++;

        if (ch == ' ')
            spaces++;
        else if (ch == '\t')
            tabs++;
        else if (ch == '\n')
            newlines++;
    }

    fclose(fp);

    printf("Total Characters: %d\n", chars);
    printf("Total Spaces: %d\n", spaces);
    printf("Total Tabs: %d\n", tabs);
    printf("Total New Lines: %d\n", newlines);

    return 0;
}
