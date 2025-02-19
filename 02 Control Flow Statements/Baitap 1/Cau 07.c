#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    float delta = (float)b * b - 4 * a * c;
    if (delta < 0)
    {
        printf("No real roots.");
    }
    else if (delta == 0)
    {
        printf("x = %.2f", (float)-b / 2 * a);
    }
    else
    {
        float x1 = (float)(-b - sqrt(delta)) / 2 * a;
        float x2 = (float)(-b + sqrt(delta)) / 2 * a;
        printf("x1 = %.2f\nx2 = %.2f", x1, x2);
    }

    return 0;
}