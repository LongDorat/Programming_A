#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d la nam nhuan", year);
    }
    else
    {
        printf("%d la nam thuong", year);
    }

    return 0;
}