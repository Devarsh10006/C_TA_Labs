#include "stdio.h"
#include "string.h"

int main()
{
    FILE *fp, *temp;
    char line[500];
    int count = 0;
    int ch;

    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    temp = fopen("temp.txt", "w");

    if (temp == NULL)
    {
        printf("Temporary file cannot be created.\n");
        fclose(fp);
        return 1;
    }

    // Delete all blank lines
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        int blank = 1;
        int i;

        for (i = 0; line[i] != '\0'; i++)
        {
            if (line[i] != ' ' && line[i] != '\t' &&
                line[i] != '\n' && line[i] != '\r')
            {
                blank = 0;
                break;
            }
        }

        if (!blank)
        {
            fputs(line, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    // Reopen temporary file for reading
    fp = fopen("temp.txt", "r");

    if (fp == NULL)
    {
        printf("Temporary file cannot be opened.\n");
        return 1;
    }

    temp = fopen("newfile.txt", "w");

    if (temp == NULL)
    {
        printf("Output file cannot be created.\n");
        fclose(fp);
        return 1;
    }

    // Insert a blank line after the third line
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        fputs(line, temp);
        count++;

        if (count == 3)
        {
            // Ensure the third line ends before adding a blank line
            int len = strlen(line);

            if (len > 0 && line[len - 1] != '\n')
                fputc('\n', temp);

            fputc('\n', temp);
        }
    }

    fclose(fp);
    fclose(temp);

    // Replace original file with the processed file
    fp = fopen("newfile.txt", "r");
    temp = fopen("student.txt", "w");

    if (fp == NULL || temp == NULL)
    {
        printf("Error updating original file.\n");

        if (fp != NULL)
            fclose(fp);
        if (temp != NULL)
            fclose(temp);

        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(ch, temp);
    }

    fclose(fp);
    fclose(temp);

    printf("Blank lines deleted and a blank line inserted after line 3.\n");

    return 0;
}