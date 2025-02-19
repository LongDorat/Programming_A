#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);

    printf("Area of equilateral triangle = %.02f", (float)(a * a) * sqrt(3) / 4);

    return 0;
}