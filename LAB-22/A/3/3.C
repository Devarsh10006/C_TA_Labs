
#include "stdio.h"

int main()
{
    FILE *fp;
    char ch;
    int id;
    char name[30];
    float marks;

    fp = fopen("student.txt", "w+");

    if (fp == NULL)
    {
        printf("File cannot be opened.\n");
        return 1;
    }

    fprintf(fp, "101 Devarsh 85.5\n");
    printf("Data written using fprintf().\n");

    fputc('A', fp);
    fputc('\n', fp);
    printf("Character written using fputc().\n");

    rewind(fp);

    fscanf(fp, "%d %29s %f", &id, name, &marks);

    printf("\nData read using fscanf():\n");
    printf("ID: %d\n", id);
    printf("Name: %s\n", name);
    printf("Marks: %.2f\n", marks);

    fseek(fp, 0, SEEK_SET);
    printf("\nFirst character using fgetc(): ");

    ch = fgetc(fp);
    printf("%c\n", ch);

    rewind(fp);
    ch = fgetc(fp);
    printf("After rewind(), first character: %c\n", ch);

    fclose(fp);

    return 0;
}
