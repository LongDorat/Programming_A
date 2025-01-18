#include "Include.h"

int main(void)
{
    int days, years = 0, weeks = 0, daysRemainder = 0;

    scanf("%d", &days);

    years = days / 365;
    daysRemainder = days % 365;

    while (daysRemainder >= 7)
    {
        daysRemainder -= 7;
        weeks++;
    }

    printf("%d days = %d year(s) %d week(s) and %d day(s).\n", days, years, weeks, daysRemainder);

    return 0;
}