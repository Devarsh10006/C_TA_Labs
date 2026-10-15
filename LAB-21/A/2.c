#include "stdio.h"

struct Book
{
    char title[50];
    char author[50];
    char publication[50];
    float price;
};

int main()
{
    struct Book b[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter details of Book %d:\n", i + 1);

        printf("Enter Book Title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Enter Author Name: ");
        scanf(" %[^\n]", b[i].author);

        printf("Enter Publication: ");
        scanf(" %[^\n]", b[i].publication);

        printf("Enter Price: ");
        scanf("%f", &b[i].price);
    }

    printf("\n--- Book Details ---\n");

    for (i = 0; i < 3; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Title: %s\n", b[i].title);
        printf("Author: %s\n", b[i].author);
        printf("Publication: %s\n", b[i].publication);
        printf("Price: %.2f\n", b[i].price);
    }

    return 0;
}
