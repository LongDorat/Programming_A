#include <stdio.h>
#include <math.h>

int main()
{
    double a, n, epsilon;
    scanf("%lf %lf %lf", &a, &n, &epsilon);

    double x_0 = a / n;
    double x_k = fabs(((n - 1) * pow(x_0, n) + a) / (n * pow(x_0, n - 1)));

    while (fabs(a - pow(x_k, n)) >= epsilon)
    {
        x_0 = x_k;
        x_k = fabs(((n - 1) * pow(x_0, n) + a) / (n * pow(x_0, n - 1)));
    }

    printf("%.8lf", x_k);
    return 0;
}