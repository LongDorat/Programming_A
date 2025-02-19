#include <stdio.h>

int main()
{
    long totalSeconds;
    scanf("%ld", &totalSeconds);

    long hours = totalSeconds / 3600;
    long minutes = (totalSeconds % 3600) / 60;
    long seconds = totalSeconds % 60;

    if (hours > 23)
    {
        int days = hours / 24;
        hours = hours % 24;
        printf("%d day(s) %d:%d:%d", days, hours, minutes, seconds);
    }
    else
    {
        printf("%d:%d:%d", hours, minutes, seconds);
    }

    return 0;
}