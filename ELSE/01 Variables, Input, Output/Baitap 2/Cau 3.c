#include "Include.h"

struct Birthday
{
    int date, month, year;
};
int main()
{
    struct Birthday bd;
    int currentYear;
    scanf("%d %d %d %d", &bd.date, &bd.month, &bd.year, &currentYear);

    printf("Ban sinh vao ngay %d thang %d nam %d. Nam nay, ban %d tuoi.", bd.date, bd.month, bd.year, currentYear - bd.year);

    return 0;
}