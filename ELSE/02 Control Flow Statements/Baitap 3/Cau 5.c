#include "Include.h"

int main()
{
    int kWh, oldUsage, newUsage;
    scanf("%d %d", &oldUsage, &newUsage);
    kWh = newUsage - oldUsage;
    float cost = 0;

    const float prices[] = {1549, 1600, 1858, 2340, 2615, 2701};
    const int limits[] = {50, 100, 200, 300, 400, INT_MAX};

    int i;
    for (i = 0; kWh > limits[i] && i < sizeof(limits) / sizeof(limits[0]); i++)
    {
        cost += (limits[i] - (i == 0 ? 0 : limits[i - 1])) * prices[i];
    }
    cost += (kWh - limits[i - 1]) * prices[i];

    printf("%d Kwh: %.0f VND", kWh, cost);
    return 0;
}
