#include <stdio.h>

struct Point
{
    double X, Y;
};

struct Rect
{
    struct Point BottomRight, TopLeft;
};

int isIn(struct Point M, struct Rect r)
{
    if (M.X > r.TopLeft.X && M.X < r.BottomRight.X && M.Y < r.TopLeft.Y && M.Y > r.BottomRight.Y)
        return 1;
    return 0;
}

int main()
{
    struct Rect r = {{10, 2}, {2,8}};
    struct Point M = {8, 6};

    if (isIn(M, r))
        printf("YES");
    else
        printf("NO");
}