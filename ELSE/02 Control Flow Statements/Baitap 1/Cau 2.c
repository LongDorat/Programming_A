#include "Include.h"

int main()
{
    float distance;
    scanf("%f", &distance);

    float cost;
    if (distance < 0.5)
    {
        cost = 115000;
    }
    else if (distance < 30)
    {
        cost = 115000 + (distance - 0.5) * 14500;
    }
    else
    {
        cost = 11500 + 14500 * 29.5 + (distance - 30) * 11600;
    }

    printf("%.02f km = %.02f VND", distance, cost);

    return 0;
}