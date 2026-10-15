
#include "stdio.h"

int main()
{
    FILE *fp;

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("File created and opened successfully.\n");

    fclose(fp);

    printf("File closed successfully.\n");

    return 0;
}
