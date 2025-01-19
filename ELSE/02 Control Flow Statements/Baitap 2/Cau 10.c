#include "Include.h"

int main()
{
    int day, month, year;
    scanf("%d %d %d", &day, &month, &year);

    int calendar[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        calendar[1] = 29;
    }

    bool isValidDate = (year >= 1) && (month >= 1 && month <= 12) && (day >= 1 && day <= calendar[month - 1]);
    isValidDate ? printf("YES") : printf("NO");

    return 0;
}