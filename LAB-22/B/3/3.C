#include "stdio.h"

int main()
{
    FILE *fp1, *fp2, *fp3;
    char line1[200], line2[200];
    int turn = 1;

    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");
    fp3 = fopen("merge.txt", "w");

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("Error opening files.\n");

        if (fp1 != NULL)
            fclose(fp1);
        if (fp2 != NULL)
            fclose(fp2);
        if (fp3 != NULL)
            fclose(fp3);

        return 1;
    }

    while (1)
    {
        if (turn == 1)
        {
            if (fgets(line1, sizeof(line1), fp1) != NULL)
                fputs(line1, fp3);
            else if (fgets(line2, sizeof(line2), fp2) != NULL)
                fputs(line2, fp3);
            else
                break;
        }
        else
        {
            if (fgets(line2, sizeof(line2), fp2) != NULL)
                fputs(line2, fp3);
            else if (fgets(line1, sizeof(line1), fp1) != NULL)
                fputs(line1, fp3);
            else
                break;
        }

        turn = 3 - turn;
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("Files merged successfully.\n");

    return 0;
}