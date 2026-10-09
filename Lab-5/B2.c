#include <stdio.h>
#include <time.h>

void main()
{
    time_t currentTime;

    time(&currentTime);

    printf("Current Date & Time: %s", ctime(&currentTime));
}