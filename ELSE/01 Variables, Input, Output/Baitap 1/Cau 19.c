#include <stdio.h>

int main()
{
    int hours, minutes, seconds;
    scanf("%dh%dm%ds", &hours, &minutes, &seconds);

    const int total_seconds = hours * 3600 + minutes * 60 + seconds;
    printf("Number of seconds: %d\n", total_seconds);

    return 0;
}