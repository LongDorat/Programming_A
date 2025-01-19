#include "Include.h"

int main()
{
    double a, n;
    scanf("%lf %lf", &a, &n);

    printf("%.4lf", powf(a, n));

    return 0;
}