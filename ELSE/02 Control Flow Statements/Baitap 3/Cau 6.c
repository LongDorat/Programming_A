#include "Include.h"

#include "Include.h"

int main()
{
    int angle;
    scanf("%d", &angle);

    angle %= 360;

    if (angle == 0)
    {
        printf("1");
        return 0;
    }

    const int angleThresholds[] = {270, 180, 90, 1};
    const int quadrantNumbers[] = {4, 3, 2, 1};
    for (int i = 0; i < sizeof(angleThresholds) / sizeof(angleThresholds[0]); i++)
    {
        if (angle % angleThresholds[i] != 0)
        {
            printf("%d", quadrantNumbers[i]);
            break;
        }
    }

    return 0;
}