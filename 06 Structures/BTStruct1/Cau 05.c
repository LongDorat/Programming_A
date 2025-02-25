#include <stdio.h>
#include <math.h>

struct Point
{
    double X, Y;
};

double Distance(struct Point A, struct Point B)
{
    return sqrt((A.X - B.X) * (A.X - B.X) + (A.Y - B.Y) * (A.Y - B.Y));
}

int isTriangle(struct Point A, struct Point B, struct Point C)
{
    double AB = Distance(A, B);
    double AC = Distance(A, C);
    double BC = Distance(B, C);
    if (AB + AC > BC && AB + BC > AC && AC + BC > AB)
        return 1;
    return 0;
}

int main()
{
    struct Point A = {1, 2};
    struct Point B = {1, 3};
    struct Point C = {2, 3};

    if (isTriangle(A, B, C))
        printf("YES");
    else
        printf("NO");
}