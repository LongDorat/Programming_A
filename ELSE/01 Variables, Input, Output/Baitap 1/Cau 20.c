#include "Include.h"

int main()
{
    int hours = 0, minutes = 0, seconds = 0, totalSeconds;
    scanf("%d", &totalSeconds);

    seconds = totalSeconds % 60;
    minutes = (totalSeconds / 60) % 60;
    hours = (totalSeconds / 3600) % 24;

    printf("%02d:%02d:%02d", hours, minutes, seconds);

    return 0;
}