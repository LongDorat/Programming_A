#include <stdio.h>

struct Point
{
    int x;
    int y;
};

int main()
{
    struct Point a;
    scanf("%d%d", &a.x, &a.y);
    printf("%d, %d\n", a.x, a.y);
    return 0;
}