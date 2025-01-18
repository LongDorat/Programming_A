#include "Include.h"

int main()
{
    long lengthInCm;
    scanf("%ld", &lengthInCm);

    float lengthInMeters = (float)lengthInCm / 100;
    float lengthInKilometers = (float)lengthInCm / 100000;

    printf("%ldcm = %.03fm = %.03fkm", lengthInCm, lengthInMeters, lengthInKilometers);

    return 0;
}