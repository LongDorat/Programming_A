#include "Include.h"

struct Point
{
    double x, y;
};

void readPoint(struct Point *p)
{
    scanf("%lf%lf", &(p->x), &(p->y));
}

void printPoint(struct Point a)
{
    printf("(%.4lf, %.4lf)\n", a.x, a.y);
}

int main()
{
    struct Point a, b;
    readPoint(&a);
    readPoint(&b);
    printPoint(a);
    printPoint(b);

    float distance = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    printf("Distance: %.4lf", distance);

    return 0;
}