#include <stdio.h>
#include <math.h>

struct Point
{
    double X, Y;
};

struct Rect
{
    struct Point BottomLeft, TopRight;
};

double area(struct Rect r)
{
    return fabs(r.BottomLeft.X - r.TopRight.X) * fabs(r.BottomLeft.Y - r.TopRight.Y);
}

int main()
{
    struct Rect r = {{10, 2}, {2, 8}};
    printf("%.5lf", area(r));
}
