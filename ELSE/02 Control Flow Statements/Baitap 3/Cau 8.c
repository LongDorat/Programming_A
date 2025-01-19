#include "Include.h"

int main()
{
    double num, epsilon;
    scanf("%lf %lf", &num, &epsilon);

    double x_0 = (1 + num) / 2;
    double x_n = (x_0 + num / x_0) / 2;

    while (fabs(x_n - x_0) / x_0 > epsilon)
    {
        x_0 = x_n;
        x_n = (x_0 + num / x_0) / 2;
    }

    printf("%.8lf", x_n);

    return 0;
}