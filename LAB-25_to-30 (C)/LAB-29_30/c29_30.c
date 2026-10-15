#include "stdio.h"

#define MAX 100

struct Customer
{
    int id;
    char name[50];
    char phone[15];
    int calls;
    float rate;
    float paid;
};

struct Customer c[MAX];
int count = 0;

void addRecord()
{
    if (count >= MAX)
    {
        printf("Record storage is full!\n");
        return;
    }

    int id, i;

    printf("Enter Customer ID: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (c[i].id == id)
        {
            printf("Customer ID already exists!\n");
            return;
        }
    }

    c[count].id = id;

    printf("Enter Customer Name: ");
    scanf(" %49[^\n]", c[count].name);

    printf("Enter Phone Number: ");
    scanf("%14s", c[count].phone);

    printf("Enter Number of Calls: ");
    scanf("%d", &c[count].calls);

    printf("Enter Rate per Call: ");
    scanf("%f", &c[count].rate);

    printf("Enter Amount Paid: ");
    scanf("%f", &c[count].paid);

    count++;

    printf("Record added successfully!\n");
}

void viewRecords()
{
    int i;

    if (count == 0)
    {
        printf("No records available!\n");
        return;
    }

    printf("\n--- Customer Records ---\n");

    for (i = 0; i < count; i++)
    {
        printf("\nCustomer ID: %d\n", c[i].id);
        printf("Name: %s\n", c[i].name);
        printf("Phone: %s\n", c[i].phone);
        printf("Number of Calls: %d\n", c[i].calls);
        printf("Rate per Call: %.2f\n", c[i].rate);
        printf("Total Bill: %.2f\n",
               c[i].calls * c[i].rate);
        printf("Amount Paid: %.2f\n", c[i].paid);
        printf("Amount Due: %.2f\n",
               c[i].calls * c[i].rate - c[i].paid);
    }
}

int searchRecord(int id)
{
    int i;

    for (i = 0; i < count; i++)
    {
        if (c[i].id == id)
            return i;
    }

    return -1;
}

void searchRecords()
{
    int id, pos;

    printf("Enter Customer ID to search: ");
    scanf("%d", &id);

    pos = searchRecord(id);

    if (pos == -1)
    {
        printf("Record not found!\n");
        return;
    }

    printf("\nCustomer ID: %d\n", c[pos].id);
    printf("Name: %s\n", c[pos].name);
    printf("Phone: %s\n", c[pos].phone);
    printf("Number of Calls: %d\n", c[pos].calls);
    printf("Rate per Call: %.2f\n", c[pos].rate);
}

void modifyRecord()
{
    int id, pos;

    printf("Enter Customer ID to modify: ");
    scanf("%d", &id);

    pos = searchRecord(id);

    if (pos == -1)
    {
        printf("Record not found!\n");
        return;
    }

    printf("Enter New Customer Name: ");
    scanf(" %49[^\n]", c[pos].name);

    printf("Enter New Phone Number: ");
    scanf("%14s", c[pos].phone);

    printf("Enter New Number of Calls: ");
    scanf("%d", &c[pos].calls);

    printf("Enter New Rate per Call: ");
    scanf("%f", &c[pos].rate);

    printf("Enter Updated Amount Paid: ");
    scanf("%f", &c[pos].paid);

    printf("Record modified successfully!\n");
}

void viewPayment()
{
    int id, pos;
    float bill, due;

    printf("Enter Customer ID: ");
    scanf("%d", &id);

    pos = searchRecord(id);

    if (pos == -1)
    {
        printf("Record not found!\n");
        return;
    }

    bill = c[pos].calls * c[pos].rate;
    due = bill - c[pos].paid;

    printf("\n--- Payment Details ---\n");
    printf("Customer Name: %s\n", c[pos].name);
    printf("Total Bill: Rs. %.2f\n", bill);
    printf("Amount Paid: Rs. %.2f\n", c[pos].paid);
    printf("Amount Due: Rs. %.2f\n", due);

    if (due <= 0)
        printf("Payment Status: Paid\n");
    else
        printf("Payment Status: Pending\n");
}

void deleteRecord()
{
    int id, pos, i;

    printf("Enter Customer ID to delete: ");
    scanf("%d", &id);

    pos = searchRecord(id);

    if (pos == -1)
    {
        printf("Record not found!\n");
        return;
    }

    for (i = pos; i < count - 1; i++)
    {
        c[i] = c[i + 1];
    }

    count--;

    printf("Record deleted successfully!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== TELECOM BILLING SYSTEM =====\n");
        printf("1. Add New Record\n");
        printf("2. View List of Records\n");
        printf("3. Modify Record\n");
        printf("4. View Payment\n");
        printf("5. Search Record\n");
        printf("6. Delete Record\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input!\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
            }

            continue;
        }

        switch (choice)
        {
            case 1:
                addRecord();
                break;

            case 2:
                viewRecords();
                break;

            case 3:
                modifyRecord();
                break;

            case 4:
                viewPayment();
                break;

            case 5:
                searchRecords();
                break;

            case 6:
                deleteRecord();
                break;

            case 7:
                printf("Thank you for using Telecom Billing System!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 7);

    return 0;
}