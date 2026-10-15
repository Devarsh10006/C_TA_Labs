#include "stdio.h"

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("file1.txt", "r");

    if (fp1 == NULL)
    {
        printf("Source file cannot be opened.\n");
        return 1;
    }

    fp2 = fopen("file2.txt", "a");

    if (fp2 == NULL)
    {
        printf("Destination file cannot be opened.\n");
        fclose(fp1);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    printf("File appended successfully.\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
