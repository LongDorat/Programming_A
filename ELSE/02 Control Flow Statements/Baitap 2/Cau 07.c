#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        printf("VO NGHIEM");
    }
    else if (delta == 0)
    {
        float x = -b / (2 * a);
        printf("NGHIEM KEP\n");
        printf("x = %.2f", x);
    }
    else
    {
        float x1 = (-b - sqrt(delta)) / (2 * a);
        float x2 = (-b + sqrt(delta)) / (2 * a);
        printf("NGHIEM PHAN BIET\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f", x2);
    }

    return 0;
}