#include <stdio.h>

int main()
{
    int days = 0, hours = 0, minutes = 0, seconds = 0;
    long totalSeconds;
    scanf("%ld", &totalSeconds);

    days = totalSeconds / 86400;
    hours = (totalSeconds % 86400) / 3600;
    minutes = ((totalSeconds % 86400) % 3600) / 60;
    seconds = ((totalSeconds % 86400) % 3600) % 60;

    if (days > 0)
    {
        printf("%d days %d:%d:%d", days, hours, minutes, seconds);
    }
    else
    {
        printf("%d:%d:%d", hours, minutes, seconds);
    }

    return 0;
}