#include "Include.h"

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);

    if (a == 0)
    {
        if (b == 0)
        {
            printf("VO SO NGHIEM");
        }
        else
        {
            printf("VO NGHIEM");
        }
    }
    else
    {
        float x = -b / a;
        printf("x = %.1f", x);
    }

    return 0;
}