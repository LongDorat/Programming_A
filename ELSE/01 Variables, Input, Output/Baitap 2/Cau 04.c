#include <stdio.h>
#include <time.h>

struct Birthday
{
    int date, month, year;
};

int main()
{
    struct tm currentTime;
    time_t currentEpochTime;
    int currentYear;

    currentEpochTime = time(NULL);          // Get current time
    currentTime = *localtime(&currentEpochTime); // Convert to local time
    currentYear = currentTime.tm_year + 1900;    // Calculate current year

    struct Birthday bd;
    scanf("%d %d %d", &bd.date, &bd.month, &bd.year);
    printf("Ban sinh vao ngay %02d thang %02d nam %d. Nam nay, ban %d tuoi.", bd.date, bd.month, bd.year, currentYear - bd.year);

    return 0;
}