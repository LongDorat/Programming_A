#include <stdio.h>

struct Point
{
    double X, Y;
};

struct Rect
{
    struct Point loLeft, upRight;
};

int main()
{
    struct Rect a = {{5, 7}, {1, 10}};
    printf("{(%.1f,%.1f);(%.1f,%.1f)}", a.loLeft.X, a.loLeft.Y, a.upRight.X, a.upRight.Y);
}