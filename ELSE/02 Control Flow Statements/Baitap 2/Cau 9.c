#include "Include.h"

int main()
{
    int month, year;
    scanf("%d %d", &month, &year);

    int calendar[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        calendar[1] = 29;
    }

    printf("Thang %d nam %d co %d ngay.", month, year, calendar[month - 1]);

    return 0;
}