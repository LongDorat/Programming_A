#include <stdio.h>

int main()
{
    int day, month, year;
    scanf("%d %d %d", &day, &month, &year);

    int calendar[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        calendar[1] = 29;
    }

    day += 1;
    if (day > calendar[month - 1])
    {
        day = 1;
        month += 1;
    }
    if (month > 12)
    {
        month = 1;
        year += 1;
    }

    printf("%02d/%02d/%d", day, month, year);

    return 0;
}