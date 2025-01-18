#include "Include.h"

int main()
{
    float R1, R2, R3;
    scanf("%f %f %f", &R1, &R2, &R3);
    
    printf("%.02f", (float)R1 + (R2 * R3) / (R2 + R3));
    return 0;
}