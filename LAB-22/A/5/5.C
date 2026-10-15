#include "stdio.h"

int main()
{
    FILE *fp1, *fp2;
    int ch;

    fp1 = fopen("source.txt", "r");

    if (fp1 == NULL)
    {
        printf("Source file cannot be opened.\n");
        return 1;
    }

    fp2 = fopen("destination.txt", "w");

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

    printf("File copied successfully.\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
