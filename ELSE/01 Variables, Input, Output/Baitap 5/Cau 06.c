#include <stdio.h>

int main()
{
    int angleA, angleB, angleC;
    scanf("%d %d", &angleA, &angleB);

    angleC = 180 - angleA - angleB;
    printf("%d", angleC);

    return 0;
}