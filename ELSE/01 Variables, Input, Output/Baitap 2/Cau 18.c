#include "Include.h"

int main()
{
    int plate, a, b, c, d;
    scanf("%d", &plate);

    a = plate % 10;
    plate /= 10;
    b = plate % 10;
    plate /= 10;
    c = plate % 10;
    plate /= 10;
    d = plate;

    printf("%d", (a + b + c + d) % 10);
    return 0;
}