#include"stdio.h"

void main()
{
    int feet;
    printf("Enter feet: ");
    scanf("%d", &feet);

    int inches = feet * 12;
    printf("inches = %d", inches);
}