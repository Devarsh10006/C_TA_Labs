#include"stdio.h"

void main()
{
    int height[5], weight[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the height of person %d: ", i);
        scanf("%d", &height[i]);
        printf("Enter the weight of person %d: ", i);
        scanf("%d", &weight[i]);
    }
    
    int persons = 0;
    for (int i = 0; i < 5; i++)
    {
        if(height[i] > 170 && weight[i] < 50) persons++;
    }
    printf("Ans: %d", persons);
}