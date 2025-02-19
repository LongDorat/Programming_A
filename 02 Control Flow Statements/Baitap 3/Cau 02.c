#include <stdio.h>

int main()
{
    int day, month, year;
    int dateOfTheYear = 0;
    scanf("%d %d %d", &day, &month, &year);

    int calendar[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        calendar[1] = 29;
    }

    for (int i = 0; i < month - 1; i++)
    {
        dateOfTheYear += calendar[i];
    }

    printf("%d", dateOfTheYear + day);

    return 0;
}