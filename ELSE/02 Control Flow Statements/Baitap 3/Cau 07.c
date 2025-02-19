#include <stdio.h>
#include <math.h>

int main(void)
{
    double epsilon;
    scanf("%lf", &epsilon);

    int n = 0;
    double term = 4.0;
    double pi = 0;

    while (fabs(term) > epsilon)
    {
        if (n % 2 == 0)
        {
            pi += term;
        }
        else
        {
            pi -= term;
        }

        n += 1;
        term = 4.0 / (2 * n + 1);
    }

    printf("%.8f\n", pi);

    return 0;
}