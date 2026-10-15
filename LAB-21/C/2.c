
#include "stdio.h"

struct Time
{
    int hh;
    int mm;
    int ss;
};

int main()
{
    struct Time t1, t2, sum;

    printf("Enter first time:\n");
    printf("Enter hours: ");
    scanf("%d", &t1.hh);
    printf("Enter minutes: ");
    scanf("%d", &t1.mm);
    printf("Enter seconds: ");
    scanf("%d", &t1.ss);

    printf("\nEnter second time:\n");
    printf("Enter hours: ");
    scanf("%d", &t2.hh);
    printf("Enter minutes: ");
    scanf("%d", &t2.mm);
    printf("Enter seconds: ");
    scanf("%d", &t2.ss);

    sum.ss = t1.ss + t2.ss;
    sum.mm = t1.mm + t2.mm;
    sum.hh = t1.hh + t2.hh;

    sum.mm += sum.ss / 60;
    sum.ss = sum.ss % 60;

    sum.hh += sum.mm / 60;
    sum.mm = sum.mm % 60;

    printf("\nTotal Time = %02d:%02d:%02d\n",
        sum.hh, sum.mm, sum.ss
    );

    return 0;
}
