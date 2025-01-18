#include "Include.h"

struct Birthday
{
    int day, month, year;
};

int main()
{
    struct Birthday birthday;
    int currentYear;
    scanf("%d %d %d %d", &birthday.day, &birthday.month, &birthday.year, &currentYear);

    int age = currentYear - birthday.year;
    printf("Ban sinh ngay %02d thang %02d nam %d. Nam nay, ban %d tuoi.", birthday.day, birthday.month, birthday.year, age);

    return 0;
}